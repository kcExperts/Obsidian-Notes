Essentially, memory consists of many bits, organized into locations called words of varying length (we will assuming 32-bit word size from now on until otherwise specified). Thus we are lead to [[Byte Addressability]]

>[!definition|*] #Word 
>Memory is organized is such a way to allow a group of $n$ bits to be stored or retrieved in a *single* basic operation. Each group of $n$ bits is called a **word**. 

>[!definition|*] #Byte
>A **byte** is a unit of $8$ bits. It is also the standard length of an ASCII character.

>[!definition|*] #Address
>The unique identifier that identifies the location of a single item of information in memory is called an *address*. It is standard to use numbers from $0$ to $2^k$ to denote memory addresses.

>[!rmk|*] Top Down Memory Organization
>For [[NIOS II]], memory is organized in a top down fashion. If you were to imagine a tower, with each level as a word, then higher memory addresses correspond to lower levels in the tower. This is an important idea when working with [[Indirection and Pointers]] as well as the [[Stack Pointer]].

