Suppose we want to iterate over a list in NIOS II using a modular subroutine. For this program, the ITERATOR will take and then store the elements of LIST into another list A. This program is complete and is fully modular.

```Assembly
#-------------
#Must be Included In Every Program
.text
.org	0x0000
.global	_start
#-------------

_start:
	movia	sp, 0x7FFFFC	#Initialize sp
	
	movia	r2, LIST	#Make r2 a pointer to LIST
	ldw	r3, LENGTH(r0)	#Load length argument
	movia	r4, A		#Make r4 a pointer to A
	call	ITERATOR	#Call our iterator
	break			    #Halts program

ITERATOR:
	#We will need to modify LENGTH to decrement
	#and the list pointer.
	
	subi	sp, sp, 16	#Make room to store arguments
	stw r2, 12(sp)
	stw	r3, 8(sp)	    #Length of the LIST
	stw	r5, 4(sp)	    #LIST element
	stw	r6, 0(sp)	    #A element

	#We put for r2 as this function has no return value
i_loop:
	ldw	r5, 0(r2)	    #Read LIST element
	stw	r5, 0(r4)	    #Store LIST element in A
	subi	r3, r3, 1	#Decrement one from LENGTH
	addi	r2, r2, 4	#Increment LIST pointer
	addi	r4, r4, 4	#Increment A pointer
	bgt	r3, r0, i_loop
end_loop:	
	#Restore values
	ldw	r6, 0(sp)
	ldw	r5, 4(sp)
	ldw	r3, 8(sp)
	ldw r2, 12(sp)
	addi	sp, sp, 16
	ret

.org	0x1000
	

LIST:	.word	1, 2, 3, 4
LENGTH:	.word	4
A:	.skip	16
	.end
```
