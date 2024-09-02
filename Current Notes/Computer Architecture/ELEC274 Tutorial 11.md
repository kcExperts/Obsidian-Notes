
>[!exercise|1] Solution
>We know that we have $32 \times 16$ physical array with $2$ data pins with it being `SRAM`. 
>1. **Total Storage in Bits**: To get the answer, we just do a multiplication. Hence $32 \cdot 16 = 2^5 \cdot 2^4 = 2^9 = 512$ bits. (Remember to say the units and note that $2^9$ is an acceptable answer as we have no access to calculators).
>2. **Logical Organization**: First we find the depth: $$\text{depth} =\frac{\text{(total bits)}}{\text{(data pins)}} = \frac{2^9}{2} = 2^8$$Then: $$\text{logical org} = \text{depth} \times \text{width} = 2^8 \times 2 = 256 \times 2$$
>3. **Number of Address Bits Required**: Since the depth is $2^8$, $8$ address bits are needed. 
>4. **Usage of Address Bits**: We note the upper $5$ bits select a row (we have $32 = 2^5$ rows, thus $5$ bits are needed) the remaining $8-5=3$ bits select $2$ bits (as a group) in the selected row (where $2^3 = 8$ gives the number of **pairs** of bits that make up the rows).
>5. **Pin Count**: We need $14$ total pins since:
>	- $8$ address bits (see $3$)
>	- $2$ data I/O pins (given from question)
>	- Need $\text{R}/\overline{W}$ and CS.
>	- Need power and ground.

>[!exercise|2]
>Now here we have: $2M\times 8$ (logical) and it is `DRAM`. Hence:
>1. The total bits is given by: $$2M \cdot 8 =2^1 2^{20} \times 2^3 = 2^{24}\; \text{bits}$$
>2. We note $2^{24} = 2^{12} \cdot 2^{12} = (2^2 \cdot 2^{10}) \cdot (2^2 \cdot 2^{10})$. Thus our physical organization is $4K \times 4K$. 
>3. Now for the use of address bits, we have: $2 \cdot 2^{20} = 2^{21}$. The bits are multiplexed. Now we need the upper bits are for the row and we know it is $4K \times 4K$, hence it is $12$. For the remaining $21-12 = 9$  lower bits. They select a group of $8$ bits within a row (as it is $2M \times 8$). (To check that $9$ is correct, in one row we have $4K$ hence $2^{12}$ bits per row. Hence $$\frac{2^{12}\frac{\text{bits}}{\text{row}}}{2^3 \frac{\text{bits}}{\text{group}}} = 2^9 \frac{\text{group}}{\text{row}}$$Thus our answer is correct. First present $12$ upper bits and assert $\overline{RAS}$ then present $9$ lower bits and assert $\overline{CAS}$. 
>4. We have 26 pins.
>	- We have $12$ address pins
>	- $8$ data I/O pins
>	- $\overline{RAS} \; \land \; \overline{CAS}$
>	- R/$\overline W$ and CS
>	- power, ground

A key different between both exercises is that $1$ was a physical thing and $2$ was a logical thing. 

>[!exercise|3]
>We know the total capacity $64K$ bits and it is `SRAM`. 
>- Total capacity, given by: $64K$ bits = $2^6 \cdot 2^{10} = 2^{16}$ bits. Which can give us a perfect square! 
>- Physical array can be $2^8 \times 2^8 = 256 \times 256$. 
>- Logical view based on $8$ data pins.
>- Hence depth is $8K$
>- We conclude logical organization is $8K \times 8K$.
>- The number of address bits is $2^{16} / 2^3 = 2^{13}$. Hence $13$ address bits.
>- Use of address bits: $13$ total. Upper $8$ select a row and the remaining $13-8 = 5$ bits select a group of $8$ bits within row. 
>- We have $25$ pins
>	- $13$ address pins
>	- $8$ data I/O pins
>	- R/$\overline W$ , CS
>	- power, ground

