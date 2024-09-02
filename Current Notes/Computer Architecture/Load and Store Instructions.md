These instructions are used to move data between [[Memory]] or [[Input and Output]] and [[Registers]]. 

Note that these instructions must have [[Word Alignment]]. For our purposes, word alignment will be `4` as the length of a word is defined to be `4` bytes. 

For load and store instructions, the assembler calculates which register you want accessed by adding the index (representing the number of bytes) to the register to get the affective address. Thus `x(ri) implies EA = [Ri] + x`. Thus even if you want to access the $0^{th}$ byte, you must still put 0 for convention.

```Example
#Load value from r2 into r3.

ldw r3, 0(r2)

#Store value from r3 into location r2.

stw r3, 0(r2) 
```

Think of it as all instructions follow the same ordering except for `stw`. 