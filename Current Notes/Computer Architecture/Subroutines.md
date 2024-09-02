Subroutines in assembly are essentially functions in high level languages. The terms are synonymous. Instead of pasting blocks of repeated code in memory, we can use subroutines to save space. However, unique challenges need to be addressed, specifically how to access and return from the subroutine.

>[!definition|*] Link Register
>A register that contains the return address so the [[Program Counter]] knows where to return to once the subroutine is done.

>[!definition|*] #Call Instruction
>The call instruction is a special [[Branching]] instruction that performs the following operations:
>- Store the contents of the PC to the link register.
>- Branch to the target address specified by the call instruction.
>
>Denoted `call LABEL`.

>[!definition|*] #Return Instruction
>The return instruction is another special branching instruction that:
> - Branches to the address contained in the link register.
>
>Denoted `ret`.

However, such an approach needs to be modified for [[Subroutine Nesting and Processor Stack|Subroutine Nesting]].
We also need to investigate [[Parameter Passing]] with subroutines, as passing in arguments is not as simple as a high level language would suggest.

