This subroutine returns a byte list that has been left shifted by $4$ bits ($1$ byte). We will verify the code by using the full program implementation for the [[NIOS II Print Byte List]] example. The subroutine is shown below:

```Assembly
LeftShiftByteList:
	subi	sp, sp, 12	
	stw	    r2, 0(sp)	#List pointer
	stw	    r3, 4(sp)	#Num of elems in list
	stw	    r4, 8(sp)	#Will store list pointer

	mov	    r4, r2
lsbl_loop:
	ldbu	r2, 0(r4)	#Store byte
	slli	r2, r2, 4	#Left bit shift of 4 (1 byte)
	stb	    r2, 0(r4)	#Store new byte into list
	subi	r3, r3, 1	#Decrement length
	addi	r4, r4, 1	#Increment pointer by 1 byte
	bgt	r3, r0, lsbl_loop
lsbl_end_loop:
	mov	r2, r4
	
	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	r4, 8(sp)
	addi	sp, sp, 12
	ret
```

A full implementation is shown below:
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

	movia	r2, LISTB	
	ldw	r3, L(r0)
	call	PrintByteList
	call 	LeftShiftByteList
	call	PrintByteList

	break

LeftShiftByteList:
	subi	sp, sp, 12	
	stw	r2, 0(sp)	#List pointer
	stw	r3, 4(sp)	#Num of elems in list
	stw	r4, 8(sp)	#Will store list pointer

	mov	r4, r2
lsbl_loop:
	ldbu	r2, 0(r4)	#Store byte
	slli	r2, r2, 4	#Left bit shift of 4 (1 byte)
	stb	r2, 0(r4)	#Store new byte into list
	subi	r3, r3, 1	#Decrement length
	addi	r4, r4, 1	#Increment pointer by 1 byte
	bgt	r3, r0, lsbl_loop
lsbl_end_loop:
	mov	r2, r4
	
	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	r4, 8(sp)
	addi	sp, sp, 12
	ret

PrintByteList:
	subi	sp, sp, 16
	stw	r2, 0(sp)	
	stw	r3, 4(sp)	
	stw	r4, 8(sp)	
	stw	ra, 12(sp)	

	mov	r4, r2		
pbl_loop:
	ldbu	r2, 0(r4)	
	subi	r3, r3, 1	
	call	PrintHexByte	
	addi	r4, r4, 1	
	bgt	r3, r0, pbl_loop	
pbl_end_loop:
	movi	r2, '\n'	
	call 	PrintChar	

	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	r4, 8(sp)
	ldw	ra, 12(sp)
	addi	sp, sp, 16
	ret

PrintHexByte:
	subi	sp, sp, 12
	stw	r2, 8(sp)
	stw	r3, 4(sp)
	stw	ra, 0(sp)
	
	mov	r3, r2	
	
	srli	r2, r2, 4
	andi	r2, r2, 0xF 	
	call 	PrintHexDigit
	mov	r2, r3
	andi	r2, r2, 0xF 	
	call 	PrintHexDigit
	
	ldw	r2, 8(sp)
	ldw	r3, 4(sp)
	ldw	ra, 0(sp)
	addi	sp, sp, 12
	ret

PrintHexDigit:
	subi	sp, sp, 12
	stw	r2, 8(sp)
	stw	r3, 4(sp)
	stw	ra, 0(sp)	

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
	call	PrintChar		
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

	.org 0x1000

L:	.word	4
LISTB:	.byte	0x2c, 0xE8, 0xF4, 0x75
	.end
```