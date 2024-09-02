[[JTAG UART Interface]] 
The following modular subroutines prints a given character.
```Assembly
#NEEDS TO BE IMPLEMENTED BEFORE .text part

.equ	JTAG_UART_BASE,	0x10001000	#address of first JTAG UART register
.equ	DATA_OFFSET,	0		
#offset of JTAG UART data register
.equ	STATUS_OFFSET,	4		
#offset of JTAG UART status register
.equ	WSPACE_MASK,	0xFFFF		
#used in AND operation to check status
#--------------------------------------
#Subroutine
PrintChar:
	subi	sp, sp, 8
	stw	r4, 4(sp)
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
```

Below is an example of a complete program that implements the print character subroutine.
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
	
	movi	r2, '\n'
	call PrintChar
	movi	r2, '2'
	call PrintChar
	movi	r2, '7'
	call PrintChar
	movi	r2, '4'
	call PrintChar
	movi	r2, '\n'
	call PrintChar
	
	break

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