Prepare pseudocode for a subroutine CopyListPositiveElements(src,dst,n) that is similar to the previous subroutine, except (a) it only copies elements that are positive, and (b) it returns the count of copied items (which could be zero). As a hint, the pseudocode could still be based on a for loop, but an additional index variable would have to be managed explicitly for the destination list. Develop the appropriate Nios II assembly-language code for a modular subroutine that conforms to the register-usage convention. Prepare a complete program with a main routine, test data (e.g., a source list with numbers such as 1, -3, 5, -7), and space in memory for a global variable where the returned count from the subroutine can be written for inspection.

```Assembly
.text
.org	0x0000
.global	_start

_start:
	movia	sp, 0x7FFFFC

	movia	r2, LISTS
	movia	r3, LISTD
	ldw	r4, N(r0)	#Must be r0, contants do not work
	ldw	r5, COUNT(r0)	#We take memory offset COUNT and add it to r0
	call	CopyListPositiveElements
	stw	r2, COUNT(r0)
	break	

CopyListPositiveElements:
	subi	sp, sp, 16
	stw	r3, 0(sp)	#LISTD
	stw	r4, 4(sp)	#N
	stw	r5, 8(sp)	#COUNT
	stw	r6, 12(sp)	#Element storage

	mov	r5, r0		#Initialize COUNT to 0
clpe_loop:
	ldw	r6, 0(r2)
	blt	r6, r0, clpe_end_if
clpe_if:
	addi	r5, r5, 1
	stw	r6, 0(r3)
	addi	r3, r3, 4
clpe_end_if:
	addi	r2, r2, 4
	subi	r4, r4, 1
	bgt	r4, r0, clpe_loop
clpe_end_loop:
	mov	r2, r5		#Return Count
	ldw	r3, 0(sp)
	ldw	r4, 4(sp)
	ldw	r5, 8(sp)
	ldw	r6, 12(sp)
	addi	sp, sp, 16
	ret

.org	0x1000

N:	.word	4
LISTS:	.word	1, -3, 5, -7
LISTD:	.skip	16
COUNT:	.skip	4
	.end
```