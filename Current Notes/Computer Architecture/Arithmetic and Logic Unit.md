---
aliases:
  - ALU
---
The Arithmetic and Logic Unit (ALU) is a central component of the [[Processor]]. It handles basic mathematical and logical operations. 

Operands are often held in high-speed [[Registers]] within the processor, each typically for one word. 

The operands for the ALU are usually brought in from memory. After the operation is performed, either they will be transferred to memory or retained in the processor.

#### For Chapter 5
The ALU will generally look like:
![[Pasted image 20240302103139.png]]
Here, we have: `(some ALU type instruction) RC, RA, RB/Immed`
- Output of address $A$ are connected directly to the `ALU`.
- Output of address $B$ are connected to a [[Computer Architecture/Multiplexers|Multiplexers]] incase we actually input an immediate value instead of a register. Thus we can choose which to input. The result is then fed into the `ALU`.
- The output of the `ALU` is then fed into the [[Computer Architecture/Register File|Register File]]. 
Note that internal registers should be added if it is in the data path:
![[Pasted image 20240324130619.png]]