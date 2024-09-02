---
aliases:
  - SDRAM
---

>[!def|*] Synchronous DRAM (SDRAM)
>These are a [[Dynamic RAM|DRAM]] that uses clock signals for added control circuitry, providing many useful features. 

SDRAM have several different modes of operation, selected by writing control information into a mode register. Necessary control signals are generated internally using a column counter and the clock signal. New data are placed on the data lines at the rising edge of each clock pulse. Consider the following:

![[Pasted image 20240409131916.png]]
This shows a timing diagram for a typical burst of read $4$. Note the memory usually takes $5$ or $6$ clock cycles to active the selected row/column, but here we use $2$ for simplicity. 
1. The row address is latched under the control of the RAS signal.
2. The column address is latched under the control of the CAS signal.
3. After a delay of one clock cycle, the first set of data bits is placed on the data lines (SDRAM automatically increments the column address to access the next three sets of bits in the selected row, which are placed on the data lines in the next $3$ clock cycles).