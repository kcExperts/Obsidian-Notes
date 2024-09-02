
>[!exm|*] Question 1
>Develop pseudocode and Nios II code for a modular subroutine `PrintHexDigit(n)` that uses `PrintChar(ch)` to print an ASCII character in the range `0` to `9` (`A` to `F`) for an input value $n$ that is assumed to be between $0$ and $15$. 

>[!rmk|*]- Pseudocode for Q1
>```Pseudocode
>PrintHexDigit(n):: #Assume between 0 ^ 15
>#Now take advantage of adjacency of 0 to 9 ^ A to F: B = A+1, 1=0+1
>	if(n > 9) then 
>		#will need to print between A to F
>		ch = (n - 10) + 'A'
>	else
>		#will need to print between 0 to 9
>		ch = n + '0'
>	end if
>	PrintChar(ch) #Nested subroutine (must save ret address)
>		#Must also pass r2 into printchar, thus we will pass n into r3
>		#Must save r2 (it changes for ch), save r3 (will be
>		overwritten for n), save ra (nested call)
>		#In between, we will use r2 (after n in r3 and before call) to
>		store 9 inside (for if statement)
>```

>[!rmk|*]- Assembly Subroutine Code for Q1
>```Assembly
>PrintHexDigit:
>	subi	sp, sp, 12
>	stw	r2, 8(sp)
>	stw	r3, 4(sp)
>	stw	ra, 0(sp)	#Nested call present
>
>	mov	r3, r2
>phd_if:
>	movi	r2, 9
>	ble	r3, r2, phd_else
>phd_then:
>	subi	r2, r3, 10
>	addi	r2, r2, 'A'
>	br	phd_end_if
>phd_else:
>	addi	r2, r3, '0'
>phd_end_if:
>	call	PrintChar	#r2 prepared with char
>	
>	load	r2, 8(sp)
>	load	r3, 4(sp)
>	load	ra, 0(sp)
>	addi	sp, sp, 12
>
>	ret
>```

>[!exm|*] Question 2
>Develop pseudocode and Nios II code for a modular subroutine for `PrintHexByte(n)` that uses `PrintHexDigit(n)` to print two hex digits corresponding to a value $n$ that is assumed to be in the range $0$ to $255$.

We note a number below $255$ is up to two hex-digits. Thus we need to call `PrintHexDigit(n)` twice. 

```Pseudocode
PrintHexByte(n) :: #Where n is between 0 and 255
#Note 254 is 0xFE
#We need to store the upper (F) in another variable
	digit = n shifted right by 4 bits (srli)
	digit = digit AND 0xF (Not needed as assumed)
	#But the prev line is if we pass 2FE, we only want F
	#So we and with 0xF to conserve F
	PrintHexDigit(digit)
	digit = n AND 0xF
	PrintHexDigit(n)
return
#srli = shift right logical immediate
#Save r2, r3, ra
```

>[!exm|*] Question 3
>Provide image



