---
aliases:
  - DRAM
---
[[Static Memories|SRAM]] is fast, but their cells require several transistors. Less expensive and higher density RAM can be implemented with simpler cells. These simpler cells do not retain their state for a long period, unless they are accessed frequently for Read or Write operations. 

>[!def|*] Dynamic RAM (DRAM)
>Memory that stores information for a short period is called dynamic RAM.

DRAM usually consists of a [[Capacitors|Capacitor]] $C$ and a transistor $T$. 
![[Pasted image 20240407212127.png]]To store information, $T$ is turned on and appropriate voltage is applied to the bit line. This causes a known amount of charge to be stored in the capacitor. After the transistor is turned off, the charge remains stored in the capacitor, but not for long as the capacitor begins to discharge. 
During operation, rows are periodically refreshed to maintain charge.

Consider the following $32M \times 8$ with cells organized in the form of a $16K \times 16K$ array:
![[Pasted image 20240407213136.png]]Since every word is of $8$ bits, the $16K$ cells in each row are divided into $2K$ groups of $8$. Thus $14$ address bits are needed ($2^{14} = 2048 = 2K$). Now suppose we select a row, we still need to choose between the $2K$ data, thus we need $11$ address bits. Thus $25$-bit address is required The high order (row) consists of $14$ bits and the low order (column) consists of $11$ bits. (Think of this entire thing like selecting an entry out of a huge matrix).