
>[!rmk|*] Basic Concepts
> - Suppose a computer had $n$-bit addresses, then it is capable of storing up to $2^n$ memory locations.
> 	- For $16$ bits: $2^{16} = 64K$ (kilo) memory locations.
> 	- For $32$ bits: $2^{32} = 4G$ (giga) locations.
> - Since we are focused on retrieving words, the upper $30$ bits determine where to access and the lower $2$ bits determine which byte to access.

>[!def|*] Memory access time
>It is the time that has elapsed between the initiation of an operation to transfer a word of data and the completion of that operation.
>

>[!def|*] Memory cycle time
>It is the minimum time delay required between the initiation of two successive memory operations. 

>[!def|*] Random-access memory (RAM)
>A memory unit is called RAM if the access time to any location is the same, independent of the location’s address. 