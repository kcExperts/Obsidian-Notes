
This subroutines will poll the keyboard status and get the character types in by the user.

>[!rmk|*]- Pseudocode
>![[Pasted image 20240325140958.png]]

```Assembly
GetChar:
	subi	sp, sp, 12
	stw	r3, 0(sp)	#JTAG UART data pointer
	stw	r4, 4(sp)	#data of JTAG UART
	stw	r5, 8(sp)	#st

	movia	r3, JTAG_UART_BASE
GC_Do_While:
	ldwio	r4, 0(r3)
	andi	r5, r4, 0x8000
	beq	r5, r0, GC_Do_While
GC_End_Do_While:
	andi	r2, r4, 0xFF
	
	ldw	r3, 0(sp)
	ldw	r4, 4(sp)
	ldw	r5, 8(sp)
	addi sp, sp, 12

	ret
```

The following is a complete implementation of the code. We make use of the [[NIOS II Print Character]] subroutine.

The below code will stop looping by default once the `Tab` key is pressed.
```Assembly
.equ	JTAG_UART_BASE,	0x10001000	#address of first JTAG UART register
.equ	DATA_OFFSET,	0		#offset of JTAG UART data register
.equ	STATUS_OFFSET,	4		#offset of JTAG UART status register
.equ	WSPACE_MASK,	0xFFFF		#used in AND operation to check status

.text
.org	0x0000
.global	_start

_start:
	movia	sp, 0x7FFFFC
	movi r3, '	'	#End Condition
main_loop:
	call GetChar
	call PrintChar
	bne r2, r3, main_loop
main_end_loop:
	break

GetChar:
	subi	sp, sp, 12
	stw	r3, 0(sp)	#JTAG UART data pointer
	stw	r4, 4(sp)	#data of JTAG UART
	stw	r5, 8(sp)	#st

	movia	r3, JTAG_UART_BASE
GC_Do_While:
	ldwio	r4, 0(r3)
	andi	r5, r4, 0x8000
	beq	r5, r0, GC_Do_While
GC_End_Do_While:
	andi	r2, r4, 0xFF
	
	ldw	r3, 0(sp)
	ldw	r4, 4(sp)
	ldw	r5, 8(sp)
	addi sp, sp, 12

	ret

PrintChar:
	subi	sp, sp, 8
	stw	r3, 4(sp)
	stw	r4, 0(sp)
	movia	r3, JTAG_UART_BASE
pc_loop:
	ldwio	r4, STATUS_OFFSET(r3)
	andhi	r4, r4, WSPACE_MASK
	beq	r4, r0, pc_loop
	stwio	r2, DATA_OFFSET(r3)

	ldw	r3, 4(sp)
	ldw	r4, 0(sp)
	addi	sp, sp, 8
	ret

	.end
```
