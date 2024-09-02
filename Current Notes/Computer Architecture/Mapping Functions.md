There are several possible methods for determining where memory blocks are placed in the cache. 

>[!def|*] Direct Mapping
>The simplest way to determine cache locations is with this technique. Here we simply map block $j$ of the main memory onto block $j$ modulo the amount of blocks in the cache. Replacement algorithm consist of just overwriting the previous information in the block. It is the least flexible mapping.

>[!def|*] Associative Mapping
>This is the most flexible mapping method. A main memory block can be placed into any cache block position. New information is removed only if the cache is full.

>[!def|*] Self-Associative Mapping
>Another approach is to use a combination of the direct and associative mappings. The blocks of the cache are grouped into sets, and the mapping allows a block from the main memory to reside in any block of a specified set. 

