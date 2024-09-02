Memory allows the storage of digital information. This information is used for a wide range of things.

### Types of Memory
#### Primary Memory
This type of memory is electronic memory with a fixed address starting at location $0$. The memory here is grouped in multi-bit words of either $16$, $32$ or $64$ bits for fast access. Most of this course will be done assuming groups of $32$ [[Bits]].

#### RAM
RAM (random access memory) is memory with a short access time which is independent of location. This type of memory can be accessed faster than primary memory.

#### Cache Memory
Cache memory is located directly on the CPU chip. It has less total memory then any other type but it is fast and used to store instructions that the [[Central Processing Unit]] uses frequently.

#### Secondary Memory
This memory stores information when the system is offline. Storage devices such as a [[Hard Disk Drive]] or a [[Solid-State Drive]] make up the bulk of secondary memory. Secondary memory is less expensive than all other types but it is much slower. 
### Memory Organization
Memory consists of many cells that either contain $1$ or $0$. The term memory refers to a collection of consecutive words.

>[!definition|*] Word
>A word is a group of $n$ [[Bits]]. Generally, it can be from 16 to 64 bits. Commonly, it will be 32 bits.

>[!definition|*] Byte
>A byte is a collection of 8 [[Bits]]. A word in this course will consist of 4 bytes. 

>[!definition|*] Big and Little-Endian Addressing
>In memory, there are two ways to assign byte addresses across words.
>- Big-Endian: We number from leftmost (significant) byte to rightmost. 
>- Little-Endian: We address from least-significant to most significant.
>
>>[!rmk]- Image Representation
>> ![[Pasted image 20240205142409.png]]
