This code uses [[NIOS II Print Hex Digit]] and [[NIOS II Print Character]].
This code is a modular subroutine that prints two hex digits corresponding to a value $n$ that is assumed to be in the range $0$ to $255$. The code will be written assuming it is not in range (thus an extra instruction will be included, see main idea remark).

>[!rmk|*]- Pseudocode
>```Pseudocode
>PrintHexByte(n) :: #Where n is between 0 and 255
>#Note 254 is 0xFE
>#We need to store the upper (F) in another variable
>	digit = n shifted right by 4 bits (srli)
>	digit = digit AND 0xF (Not needed as assumed)
>	#But the prev line is if we pass 2FE, we only want F
>	#So we and with 0xF to conserve F
>	PrintHexDigit(digit)
>	digit = n AND 0xF
>	PrintHexDigit(n)
>return
>#srli = shift right logical immediate
>#Save r2, r3, ra
>```

>[!rmk|*]- Main Idea
>Firstly, we note that 0 to 255 represents $16^2$ numbers. Thus, as expected, $2$ hex digits are in use here. We recall that one [[Hexadecimal]] number is comprised of $4$ [[Binary]] numbers. Now our `PrintHexDigit` function only prints out $1$ hex at a time. The best way to separate our hex digits is to store the upper $4$ bits into another variables using [[Shift Instructions]]. Since we need to shift them downwards, we will use a `lshiftr` to shift our the first four bits. Then we can just pass the variable to `PrintHexDigit`, which will print the correct `4` bits. For this code, we assume it is within range.
>
>If it was not within range, we would need to do an `AND` operation as shown in the pseudocode to ensure correct function.

Below is the modular subroutine:
```Assembly
PrintHexByte:
	subi	sp, sp, 12
	stw	r2, 8(sp)
	stw	r3, 4(sp)
	stw	ra, 0(sp)
	
	mov	r3, r2	#Shift r2 for nested subroutine
	
	srli	r2, r2, 4
	andi	r2, r2, 0xF 	#Not req if under assumption of range
	call 	PrintHexDigit
	mov		r2, r3
	andi	r2, r2, 0xF 	#Required to isolate first 4 bits
	call 	PrintHexDigit
	
	ldw	r2, 8(sp)
	ldw	r3, 4(sp)
	ldw	ra, 0(sp)
	addi	sp, sp, 12
	ret
```

Shown below is a complete implementation of a program (by default it will print `64` which corresponds to the decimal representation of $100$)
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

	movi	r2, 100
	call PrintHexByte

	movi	r2, '\n'
	call PrintChar
	break

PrintHexByte:
	subi	sp, sp, 12
	stw	r2, 8(sp)
	stw	r3, 4(sp)
	stw	ra, 0(sp)
	
	mov	r3, r2	#Shift r2 for nested subroutine
	
	srli	r2, r2, 4
	andi	r2, r2, 0xF 	#Not req if under assumption of range
	call 	PrintHexDigit
	mov		r2, r3
	andi	r2, r2, 0xF 	#Required to isolate first 4 bits
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
