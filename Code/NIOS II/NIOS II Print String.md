---
aliases:
  - NIOS II Hello World
---
We make use of [[NIOS II Print Character]] subroutine. Here we will loop through a pointer to a string printing the character. The subroutine is given below:
>[!rmk|*]- String
>The string that is to be used in the `PrintString` must be a byte array of characters. Thus, when declaring `STRING`, one would use `.ascii` or `.string` instead of `.word` and follow it by the desired string in quotation marks. 
>The difference between `.ascii` and `.string` are not small, but a significant one is that `.string` null terminates. Use `.string` for strings as it will work better.

```Assembly
PrintString:
	#Store stuff including ra
	subi	sp, sp, 12
	stw	r2, 0(sp)	#Character
	stw	r3, 4(sp)	#STRING ptr
	stw	ra, 8(sp)

	mov	r3, r2		#STRING ptr to r3	

ps_loop:
	ldb	r2, 0(r3)		#Must be byte for STRING
	beq	r2, r0, ps_end_loop	#End loop if null character
	call	PrintChar		#Print character
	addi	r3, r3, 1		#Increment Pointer
	br	ps_loop			#Loop
ps_end_loop:
	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	ra, 8(sp)	#Restore ret address
	addi	sp, sp, 12
	
	ret
```

A fully functioning Hello World program is shown below. 

```Assembly
.equ	JTAG_UART_BASE,	0x10001000	#address of first JTAG UART register
.equ	DATA_OFFSET,	0		#offset of JTAG UART data register
.equ	STATUS_OFFSET,	4		#offset of JTAG UART status register
.equ	WSPACE_MASK,	0xFFFF	#used in AND operation to check status

.text
.org	0x0000
.global	_start

_start:
	movia	sp, 0x7FFFFC

	movia	r2, STRING	#Get r2 to point to first char
	call	PrintString	
	break

PrintString:
	#Store stuff including ra
	subi	sp, sp, 12
	stw	r2, 0(sp)	#Character
	stw	r3, 4(sp)	#STRING ptr
	stw	ra, 8(sp)

	mov	r3, r2		#STRING ptr to r3	

ps_loop:
	ldb	r2, 0(r3)		#Must be byte for STRING
	beq	r2, r0, ps_end_loop	#End loop if null character
	call	PrintChar		#Print character
	addi	r3, r3, 1		#Increment Pointer
	br	ps_loop			#Loop
ps_end_loop:
	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	ra, 8(sp)	#Restore ret address
	addi	sp, sp, 12
	
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

.org	0x1000

STRING:	.string	"Hello World"
	.end
```
