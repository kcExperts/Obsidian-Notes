We note that the inter-stage registers in the [[ALU and Datapath Design]] `RA`, `RB`, `RZ`, `RN`, and `RY` are always enabled. The desired setting of various control signals can be determined by examining the actions taken in each execution step of every instruction. 

In step `T5`, the `RF_write` signal is set to $1$. It may be generated using the following logic expression: $$\text{RF\_write} = \text{T5} \cdot (\text{ALU} + \text{Load}+\text{Call})$$

- type of instruction
- step we are in T1, T2 blah blah
- ALU represents all possible instructions involving Alu

>[!rmk|*] Logic Expressions For signals:
> - $\text{RF\_write} = T5 \cdot (ALU+Load+Call)$
> - $\text{PC\_en} = T1 + T3 \cdot (Call+Branch+Return)$
> - $\text{INC\_select} = T3$
> - $\text{IR\_en} = T1$
> - $\text{MEM\_write} = T3 + Store$

