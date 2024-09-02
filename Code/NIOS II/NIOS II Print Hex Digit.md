This subroutine prints a hexadecimal character ($0$ to $F$). It is assumed that the input is between the range of $0$ to $15$. Requires [[NIOS II Print Character]].
```Assembly
PrintHexDigit:
	subi	sp, sp, 12
	stw	r2, 8(sp)
	stw	r3, 4(sp)
	stw	ra, 0(sp)	#Nested call present

	mov	r3, r2
phd_if:
	movi	r2, 9
	ble	r3, r2, phd_else
phd_then:
	subi	r2, r3, 10
	addi	r2, r2, 'A'
	br	phd_end_if
phd_else:
	addi	r2, r3, '0'
phd_end_if:
	call	PrintChar	#r2 prepared with char
	
	ldw 	r2, 8(sp)
	ldw 	r3, 4(sp)
	ldw 	ra, 0(sp)
	addi	sp, sp, 12

	ret
```

Below is a complete implementation of this program.
```Assembly
.equ	JTAG_UART_BASE,	0x10001000	
.equ	DATA_OFFSET,	0		
.equ	STATUS_OFFSET,	4	
.equ	WSPACE_MASK,	0xFFFF	

.text
.org	0x0000
.global	_start

_start:
	movia	sp, 0x7FFFFC
	
	movi	r2, '\n'
	call PrintChar
	movi	r2, 10
	call PrintHexDigit
	movi	r2, 12
	call PrintHexDigit
	movi	r2, 4
	call PrintHexDigit
	movi	r2, '\n'
	call PrintChar
	break

PrintHexDigit:
	subi	sp, sp, 12
	stw	r2, 8(sp)
	stw	r3, 4(sp)
	stw	ra, 0(sp)	#Nested call present

	mov	r3, r2
phd_if:
	movi	r2, 9
	ble	r3, r2, phd_else
phd_then:
	subi	r2, r3, 10
	addi	r2, r2, 'A'
	br	phd_end_if
phd_else:
	addi	r2, r3, '0'
phd_end_if:
	call	PrintChar	#r2 prepared alrd
	
	ldw 	r2, 8(sp)
	ldw 	r3, 4(sp)
	ldw 	ra, 0(sp)
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

	.end
```