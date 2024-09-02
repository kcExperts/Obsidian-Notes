---
aliases:
  - Immediate Mode
---
The *immediate mode* from [[Addressing Modes]] gives a method to implement constants in arithmetic, logic, store and load instructions. ([[NIOS II]] implements this by putting attaching an `i` at the type of instruction being used such as `addi` or `subi`). 

>[!rmk|*] Constant Limitation
>When immediate mode is used, the operand (constant) is restricted to $16$-bits. Thus, a $32$-bit value cannot be given explicitly in a single instruction that must fit in a $32$-bit word. [[Handling 32-Bit Immediate Values]] gives solutions to this problem.

Using this will immediately use the specified constant in the operation without problems. However, do not forget to specify that it is an immediate operation. Immediate are especially helpful when handling [[Indirection and Pointers]]