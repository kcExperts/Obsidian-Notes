Suppose you are given a two strings, say `string1` and `string2`. The following code detects if `string2` is a substring of `string1`. 

>[!rmk|*]- Template Code
>![[Pasted image 20240306171941.png]]

>[!rmk|*]- Important Remark
>When using `.ascii`, it IS NOT null terminated `\0`. Thus the length of the string should only count the characters and spaces. On the other hand, if using `.string` it IS null terminated `\0`. Now you can use this to your advantage if you want to detect `.string2` to be at the end purely. For most purposes however, it is fine to use either `.ascii` or `.string`. Just remember to place them after variable or list declarations.

The following subroutine returns a `1` if `string2` is present, else it returns `0`. Strings using `.ascii` and `.string` can be used.
#### Subroutine
```Assembly
SubStringSearch:
	#r2 points to string1 = T
	#r3 points to string2 = P
	subi	sp, sp, 24
	stw		r4, 0(sp) 	#Length of string1 = n
	stw		r5, 4(sp)	#Length of string2 = m
	stw		r6, 8(sp) 	#Scans through string1
	stw		r7, 12(sp)	#Scans through string2
	stw		r8, 16(sp)	#Char in string1 for comparison
	stw		r9, 20(sp)	#Char in string2 for comparison

	sub		r4, r4, r5	#Compute n-m
	add		r4, r2, r4	#Address of T(n-m)
	add		r5, r3, r5	#Address of P(m)
	
sss_loop1:
	mov		r6, r2		#For scanning T
	mov		r7, r3		#For scanning P
sss_end_loop1:
sss_loop2:
	ldb		r8, 0(r6)	#Store char T to compare
	ldb		r9, 0(r7)	#Store char P to compare
	bne 	r8, r9, nomatch 
	addi	r6, r6, 1	#Point to next char in T
	addi	r7, r7, 1	#Point to next char in P
	bgt		r5, r7, sss_loop2	#Loop if unfinished scanning
	movi	r2, 1		#substring is present (true 1)
	br 		match		#exit main body 
sss_end_loop2:
nomatch:
	addi	r2, r2, 1	#Point to nect char in T
	bge		r4, r2, sss_loop1	#Check next chars in T
	mov		r2, r0		#substring not present (false 0)
match:
	ldw		r4, 0(sp) 	
	ldw		r5, 4(sp)	
	ldw		r6, 8(sp) 	
	ldw		r7, 12(sp)	
	ldw		r8, 16(sp)	
	ldw		r9, 20(sp)	
	addi	sp, sp, 24

	ret
```

#### Full Program (Does not need String Length)
A complete program that does not require the manual input of the string length is shown below. We make use of [[NIOS II String Length]], [[NIOS II Print Hex Digit]] and [[NIOS II Print Character]] to print either `1` or `0`.
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
	
	movia	r2, STRING1
	call 	StringLength
	mov		r4, r2
	
	movia	r2, STRING2
	call 	StringLength
	mov		r5, r2
	
	movia	r2, STRING1
	movia	r3,	STRING2
	
	call	 SubStringSearch
	call 	PrintHexDigit

	break

StringLength:
	#r2 contains string
	subi	sp, sp, 12
	stw		r3, 0(sp)	#Counts characters
	stw		r4, 4(sp)	#Stores char of string to verify if \0
	stw		r5, 8(sp)	#Stores null for comparison purposes
	
	mov		r3, r0		#Set counter to 0 
	movi	r5, 0		#Null char
sl_loop:
	ldb		r4, 0(r2)	#Get char
	beq		r4, r5, sl_end_loop	#End if null encountered
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

SubStringSearch:
	#r2 points to string1 = T
	#r3 points to string2 = P
	subi	sp, sp, 24
	stw		r4, 0(sp) 	#Length of string1 = n
	stw		r5, 4(sp)	#Length of string2 = m
	stw		r6, 8(sp) 	#Scans through string1
	stw		r7, 12(sp)	#Scans through string2
	stw		r8, 16(sp)	#Char in string1 for comparison
	stw		r9, 20(sp)	#Char in string2 for comparison

	sub		r4, r4, r5	#Compute n-m
	add		r4, r2, r4	#Address of T(n-m)
	add		r5, r3, r5	#Address of P(m)
	
sss_loop1:
	mov		r6, r2		#For scanning T
	mov		r7, r3		#For scanning P
sss_end_loop1:
sss_loop2:
	ldb		r8, 0(r6)	#Store char T to compare
	ldb		r9, 0(r7)	#Store char P to compare
	bne 	r8, r9, nomatch 
	addi	r6, r6, 1	#Point to next char in T
	addi	r7, r7, 1	#Point to next char in P
	bgt		r5, r7, sss_loop2	#Loop if unfinished scanning
	movi	r2, 1		#substring is present (true 1)
	br 		match		#exit main body 
sss_end_loop2:
nomatch:
	addi	r2, r2, 1	#Point to nect char in T
	bge		r4, r2, sss_loop1	#Check next chars in T
	mov		r2, r0		#substring not present (false 0)
match:
	ldw		r4, 0(sp) 	
	ldw		r5, 4(sp)	
	ldw		r6, 8(sp) 	
	ldw		r7, 12(sp)	
	ldw		r8, 16(sp)	
	ldw		r9, 20(sp)	
	addi	sp, sp, 24

	ret

PrintHexDigit:
	subi	sp, sp, 12
	stw		r2, 8(sp)
	stw		r3, 4(sp)
	stw		ra, 0(sp)

	mov		r3, r2
phd_if:
	movi	r2, 9
	ble		r3, r2, phd_else
phd_then:
	subi	r2, r3, 10
	addi	r2, r2, 'A'
	br		phd_end_if
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

.org	0x1000

STRING1:.string	"Hello World"
STRING2:.string	"ello W"
	.end
```

#### Full Program (Needs String Length)
A complete implementation that prints the result is shown below. It requires [[NIOS II Print Character]] and [[NIOS II Print Hex Digit]].
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
	movia	r2, STRING1
	movia	r3, STRING2
	ldw		r4, L1(r0)
	ldw		r5, L2(r0)

	call SubStringSearch
	call PrintHexDigit

	break

SubStringSearch:
	#r2 points to string1 = T
	#r3 points to string2 = P
	subi	sp, sp, 24
	stw		r4, 0(sp) 	#Length of string1 = n
	stw		r5, 4(sp)	#Length of string2 = m
	stw		r6, 8(sp) 	#Scans through string1
	stw		r7, 12(sp)	#Scans through string2
	stw		r8, 16(sp)	#Char in string1 for comparison
	stw		r9, 20(sp)	#Char in string2 for comparison

	sub		r4, r4, r5	#Compute n-m
	add		r4, r2, r4	#Address of T(n-m)
	add		r5, r3, r5	#Address of P(m)
	
sss_loop1:
	mov		r6, r2		#For scanning T
	mov		r7, r3		#For scanning P
sss_end_loop1:
sss_loop2:
	ldb		r8, 0(r6)	#Store char T to compare
	ldb		r9, 0(r7)	#Store char P to compare
	bne 	r8, r9, nomatch 
	addi	r6, r6, 1	#Point to next char in T
	addi	r7, r7, 1	#Point to next char in P
	bgt		r5, r7, sss_loop2	#Loop if unfinished scanning
	movi	r2, 1		#substring is present (true 1)
	br 		match		#exit main body 
sss_end_loop2:
nomatch:
	addi	r2, r2, 1	#Point to nect char in T
	bge		r4, r2, sss_loop1	#Check next chars in T
	mov		r2, r0		#substring not present (false 0)
match:
	ldw		r4, 0(sp) 	
	ldw		r5, 4(sp)	
	ldw		r6, 8(sp) 	
	ldw		r7, 12(sp)	
	ldw		r8, 16(sp)	
	ldw		r9, 20(sp)	
	addi	sp, sp, 24

	ret

PrintHexDigit:
	subi	sp, sp, 12
	stw		r2, 8(sp)
	stw		r3, 4(sp)
	stw		ra, 0(sp)

	mov		r3, r2
phd_if:
	movi	r2, 9
	ble		r3, r2, phd_else
phd_then:
	subi	r2, r3, 10
	addi	r2, r2, 'A'
	br		phd_end_if
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

.org	0x1000

L1:	.word	11
L2:	.word	6
STRING1:.string	"Hello World"
STRING2:.string	"ello W"
	.end
```
