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
	ldw		r3, L(r0)
	movi	r4, 0x80
	call	ShowByteList
	call	LimitByteList
	call	ShowByteList
	movia	r2, STRING
	call	PrintString

	break
	
	PrintString:
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

ShowByteList:
	subi	sp, sp, 16
	stw	r2, 0(sp)	#Byte list pointer
	stw	r3, 4(sp)	#Num of elems in list
	stw	r4, 8(sp)	#Will store byte list pointer
	stw	ra, 12(sp)	#Save return address

	mov	r4, r2		#Need r2 for later subroutines
sbl_loop:
	movi	r2, '('
	call	PrintChar
	ldbu	r2, 0(r4)	#Get first byte of list
	subi	r3, r3, 1	#Decrement list length
	call	PrintHexByte	#Print byte
	addi	r4, r4, 1	#Increment pointer by 1 byte
	movi	r2, ')'
	call	PrintChar
sbl_if:
	beq 	r3, r0, sbl_endif
sbl_then:
	movi	r2, ','
	call	PrintChar
	movi	r2, ' '
	call	PrintChar
sbl_endif:
	bgt	r3, r0, sbl_loop
sbl_end_loop:
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

LimitByteList:
	subi	sp, sp, 16
	stw	r2, 0(sp) 	#Pointer to list
	stw	r3, 4(sp)	#Num of elem in list
	stw	r4, 8(sp)	#Value
	stw	r5, 12(sp)	#List elem storage
lbl_loop:
	ldbu	r5, 0(r2)
	subi	r3, r3, 1
lbl_if:
	bgt	r4, r5, lbl_endif
	stb	r4, 0(r2)
lbl_endif:
	addi	r2, r2, 1
	bgt	r3, r0, lbl_loop
lbl_end_loop:
	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	r4, 8(sp)
	ldw	r5, 12(sp)
	addi	sp, sp, 16
	ret
	
	.org 0x1000
L:	.word	4
LISTB:	.byte	0x4A, 0xC9, 0xA8, 0x63
STRING:	.string	"Lab 3\n"
	.end
```

```Assembly
ShowByteList:
	subi	sp, sp, 16
	stw	r2, 0(sp)	#Byte list pointer
	stw	r3, 4(sp)	#Num of elems in list
	stw	r4, 8(sp)	#Will store byte list pointer
	stw	ra, 12(sp)	#Save return address

	mov	r4, r2		#Need r2 for later subroutines
sbl_loop:
	movi	r2, '('
	call	PrintChar
	ldbu	r2, 0(r4)	#Get first byte of list
	subi	r3, r3, 1	#Decrement list length
	call	PrintHexByte	#Print byte
	addi	r4, r4, 1	#Increment pointer by 1 byte
	movi	r2, ')'
	call	PrintChar
sbl_if:
	beq 	r3, r0, sbl_endif
sbl_then:
	movi	r2, ','
	call	PrintChar
	movi	r2, ' '
	call	PrintChar
sbl_endif:
		
	bgt	r3, r0, sbl_loop
sbl_end_loop:
	movi	r2, '\n'	
	call 	PrintChar	

	ldw	r2, 0(sp)
	ldw	r3, 4(sp)
	ldw	r4, 8(sp)
	ldw	ra, 12(sp)
	addi	sp, sp, 16
	ret
```

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
	call	ShowByteList

	break

ShowByteList:
	subi	sp, sp, 16
	stw	r2, 0(sp)	#Byte list pointer
	stw	r3, 4(sp)	#Num of elems in list
	stw	r4, 8(sp)	#Will store byte list pointer
	stw	ra, 12(sp)	#Save return address

	mov	r4, r2		#Need r2 for later subroutines
sbl_loop:
	movi	r2, '('
	call	PrintChar
	ldbu	r2, 0(r4)	#Get first byte of list
	subi	r3, r3, 1	#Decrement list length
	call	PrintHexByte	#Print byte
	addi	r4, r4, 1	#Increment pointer by 1 byte
	movi	r2, ')'
	call	PrintChar
sbl_if:
	beq 	r3, r0, sbl_endif
sbl_then:
	movi	r2, ','
	call	PrintChar
	movi	r2, ' '
	call	PrintChar
sbl_endif:
		
	bgt	r3, r0, sbl_loop
sbl_end_loop:
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
LISTB:	.byte	0x4A, 0xC9, 0xA8, 0x63
	.end
```