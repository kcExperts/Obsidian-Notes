Given a string made using `.ascii` or `.string`, the following subroutine will determine the length of the string without accounting for the null terminating character (just in case, it is better to use `.string`)
```Assembly
StringLength:
	#r2 contains string
	subi	sp, sp, 12
	stw		r3, 0(sp)	#Counts characters
	stw		r4, 4(sp)	#Stores char of string to verify if \0
	stw		r5, 8(sp)	#Stores null for comparison purposes
	
	mov		r3, r0		#Set counter to 0 
	movi	r5, 0		#Null
sl_loop:
	ldb		r4, 0(r2)	#Get char
	beq		r4, r5, sl_end_loop	#End if \0 encountered
	addi	r3, r3, 1	#Increment counter
	addi	r2, r2, 1	#Increment pointer to next char (1) not (4)
	br		sl_loop		#Loop until null found
sl_end_loop:
	mov		r2, r3		#return counter

	ldw		r3, 0(sp)	
	ldw		r4, 4(sp)	
	ldw		r5, 8(sp)	
	addi	sp, sp, 12

	ret
```

A full program is shown below that uses [[NIOS II Print Hex Digit]] and [[NIOS II Print Character]]. Since strings have a maximum of 32 bits, we must use the digit version of print hex. The program will print `0B` which represents `11` which is the correct length of `Hello World`.
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
	
	movia	r2, STRING
	call    StringLength
	call    PrintHexByte
	break


StringLength:
	subi	sp, sp, 12
	stw		r3, 0(sp)	
	stw		r4, 4(sp)	
	stw		r5, 8(sp)	
	
	mov		r3, r0		
	movi	r5, 0		
sl_loop:
	ldb		r4, 0(r2)	
	beq		r4, r5, sl_end_loop	
	addi	r3, r3, 1	
	addi	r2, r2, 1	
	br		sl_loop		
sl_end_loop:
	mov		r2, r3		

	ldw		r3, 0(sp)	
	ldw		r4, 4(sp)	
	ldw		r5, 8(sp)	
	addi	sp, sp, 12

	ret

PrintHexByte:
	subi	sp, sp, 12
	stw		r2, 8(sp)
	stw		r3, 4(sp)
	stw		ra, 0(sp)
	
	mov		r3, r2	
	
	srli	r2, r2, 4
	andi	r2, r2, 0xF 	
	call 	PrintHexDigit
	mov		r2, r3
	andi	r2, r2, 0xF 	
	call 	PrintHexDigit
	
	ldw		r2, 8(sp)
	ldw		r3, 4(sp)
	ldw		ra, 0(sp)
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
	stw		r3, 4(sp)
	stw		r4, 0(sp)
	movia	r3, JTAG_UART_BASE
pc_loop:
	ldwio	r4, STATUS_OFFSET(r3)
	andhi	r4, r4, WSPACE_MASK
	beq		r4, r0, pc_loop
	stwio	r2, DATA_OFFSET(r3)

	ldw		r3, 4(sp)
	ldw		r4, 0(sp)
	addi	sp, sp, 8
	ret
	
	.org 0x1000
STRING: .ascii	"Hello World"
	.end
```
