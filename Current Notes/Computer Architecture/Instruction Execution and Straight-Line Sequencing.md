Recall that in [[Memory Organization]], every byte is $8$-bits and our words are $4$ bytes. To run instructions, the [[Processor]] contains the [[Program Counter]], which holds the address of the next instruction to be executed.

>[!definition|*] Straight-Line Sequencing
>To begin a program, the address of the first instruction is placed in the PC, which when executed, the PC will (unless otherwise specified from by code), will increment its address by $4$ to get the next word (and thus instruction).

Executing instructions is a two-phase procedure. For *instruction fetch*, the instruction is fetched from memory using the address stored in the PC and placed into the [[Instruction Register]].

In the *instruction execute*, the IR determines what needs to handle the instruction and executes it. At some point during this process, the PC advances to point to the next instruction.

However, [[Branching]] and [[Subroutines]] can modify where the PC will advance to.