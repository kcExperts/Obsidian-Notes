>[!exercise|1]
>By the question, we have $16$ kilo-bytes of information capacity (so not including overhead). We also have $64$-byte block size. 
>1. We have $16$ kilo-bytes capacity $\implies 2^4 \cdot 2^{10}$ bytes $= 2^{14}$ bytes. Now $64$- byte blocks $\implies 2^6 \frac{\text{bytes}}{\text{blocks}}$. Hence: $$ \# \text{blocks in cache} = \frac{2^{14} \;\text{bytes}}{2^{6} \; \frac{bytes}{blocks}} = 2^8 \; \text{blocks}$$
>2. Let us do the partitioning (breakdown) of address bits. We have $6$ offset bits, (from $2^6$ bytes/blocks), also $8$ index bits (from $2^8$ blocks). Now to find the tag bits, we do $32 - 6- 8 = 18$. (We use $32$ as the question specifies that it is a full $32$ bit address).
>3. To identify $16$ words, we need $4$ bits ($16 = 2^4$). Then we take the upper $4$ bits of the offset. The lower $2$ bits are the offset within one word.
>4. I got lost womp womp




