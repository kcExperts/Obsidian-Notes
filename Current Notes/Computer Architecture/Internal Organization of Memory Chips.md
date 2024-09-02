Consider the diagram below:
![[Pasted image 20240407203831.png]]Here we have a simple $16 \times 8$ arrangement ($16$ words of $8$ bits each). The above image represents an example of how we could organize memory. Each row of cells constitutes a *memory word* and all cells of a row are connected to a common line called the *word line*. 

The above requires $16$ pins (external connections):
- $4$ for bit-address ($2^4$ words are present) (See decoder)
- $8$ for data (the bits $b_0 , \dots , b_7$)
- $1$ Chip select (CS)
- $1$ read and write ($1$ for read $0$ for write) ($\text{R}/\overline{\text{W}}$)
- $2$ for ground and power

Consider one that has $1K$ memory cells (thus it has $1024$ cells). It may be organized as a $128 \times 8$ memory, requiring $19$ pins:
- $7$ for bit-address ($2^7 = 128$)
- $8$ for data 
- $1$ chip select
- $1$ read and write
- $2$ for ground and power

>[!rmk|*] Cost
>The “Cost” that we associate with memory is the number of pins that are needed. 

So for the $1K$ case, why don’t we consider $32 \times 32$ or $32$ words of $32$ bits each. We could use $5$ data lines connected to a multiplexer and demultiplexer and then $5$ for the bit-address. Hence only $14$ pins will be needed. If the mux/demux is included in this count, $1$ read and write will be needed and $5$ pins for addressing the mux/demux will be needed, hence $20$ pins will be used. But we usually ignore this, hence $14$ pins:

![[Pasted image 20240407210553.png]]