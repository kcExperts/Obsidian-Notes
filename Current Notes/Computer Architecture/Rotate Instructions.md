In the [[Shift Instructions]], the bits are shifted out of the operand and lost, except for the last bit shifted out which is retained in Carry flag C. In situations where it is desirable to preserve the shifted out bits, a rotate instruction will be used.

>[!definition|*] Rotate Instruction
>The rotate instruction will take the bits that have been shifted out and will insert them at the beginning (or end depending on which direction is used) instead of filling the new spots with $0$’s. There are two types:
> - `RotateR`: This function rotates the bits without adding the Carry flag C in. Thus if `11` is rotated out, then `11` will be inserted in place of the $0$’s. 
> - `RotateRC`: This function rotates the bits and adds the Carry flag C in. Thus if `01` is rotated and C contains `1`, then `10` will be inserted in place of the generated $0$’s. 

