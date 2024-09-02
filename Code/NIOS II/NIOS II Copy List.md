Prepare pseudocode for a subroutine CopyList(src,dst,n) where src and dst are pointers to lists that each have storage for n word-sized items. The subroutine should copy each element from the src list to the dst list. Translate the pseudocode to a modular implementation in Nios II assembly language that conforms with the required register-usage convention. Prepare a complete program with a main routine and data definitions to test your subroutine. Use the Web-based simulator to verify that the implementation is correct. (You create your own data, e.g., a source list with numbers such as 1, 3, 5, 7, and a destination list with the appropriate amount of space reserved. The main routine should initialize the stack pointer, prepare arguments, call the subroutine, and terminate properly. Inspect memory after execution to confirm that the subroutine has functioned correctly.)

```Assembly
.text
.org	0x0000
.global _start

_start:
	movia	sp, 0x7FFFFC	#Initialize stack pointer
	
	movia	r2, LISTS
	movia	r3, LISTD
	ldw	    r4, N(r0)
	call	CopyList
	break

CopyList:			#r2 is src, r3 is dst
	subi	sp, sp, 16	#Make room to store elements
	stw	    r2, 0(sp)   #src Pointer
	stw	    r3, 4(sp)	#dst Pointer
	stw	    r4, 8(sp)	#Length
	stw	    r5, 12(sp)	#src list element

cl_loop:	
	ldw	    r5, 0(r2)	#Load respective src element
	stw	    r5, 0(r3)	#Store respective src into first dst
	subi	r4, r4, 1	#Decrement length
	addi	r2, r2, 4	#Increment src to next elem
	addi	r3, r3, 4	#Increment dst to next elem
	bgt	r4, r0, cl_loop	#Loop until all elements are copied
cl_end_loop:
	ldw    	r2, 0(sp)
	ldw	    r3, 4(sp)
	ldw	    r4, 8(sp)
	ldw	    r5, 12(sp)
	addi	sp, sp, 16
	ret

	.org	0x1000

N:	    .word	4
LISTS:	.word	1,3,5,7
LISTD:	.skip	16
	
	.end
```