>[!definition|*] Move Instruction
>The move instruction is used to copy the contents of one register (or a constant) into another register. 
>- `mov   rC, rA` produces $[\text{RD}] \leftarrow [\text{RA}]$
>- `movi   rC, rA` produces $[\text{RD}] \leftarrow \text{IMMED}$
>
>Note that a move instruction is a shorthand of `add   rC, rA, r0` (this is what the move instruction actually does to copy the contents of the register). The copying of registers is used so often that it warranted its own operation. 


