Instead of writing infinitely many long instructions in code, we can use branching in order to write loops. 

>[!definition|*] Branching
>Branching effectively loads a specified address into the [[Program Counter]]. To do so. For the programmer to easily understand where the code will go, they may label sections of the code with a name (all caps no spaces) that the branch instruction can then go to.
>In [[Register Transfer Notation|RTN]], we have:
> - `Branch_if_[Ri] > [Ri]  LABEL` Which will compare the registers or constant with each other, branching to the section of code with the specified LABEL if the condition is true. See [[NIOS II]] for implementation in NIOS II assembly.

