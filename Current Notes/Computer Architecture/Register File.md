General-purpose [[Registers]] are usually implemented in the form of a register file. Think of it at a grouping of registers.

>[!def|*] Register file
>These are small and fast blocks of memory consisting of:
>- An array of storage elements.
>- Access to circuitry that enables read and write.
>
>To achieve read and write, the following are considered:
>- Two output paths for register reading (operands typically require a max of two registers).
>- Two input paths to determine which register needs to be read (contains the address).
>- One input path to write to a register.
>- One address path to determine which register to read to.
>
>>[!rmk|*]- Hardware visual representation.
>>The hardware implementation would look like:
>>![[Pasted image 20240229160839.png]]
>>And for a two block system:
>>![[Pasted image 20240229160908.png]]


