Conceptually, operation of cache memory is simple:
![[Pasted image 20240409134205.png]]We use cache memory to hold code that is repeated and used frequently in a program, instead of having to fetch it from slower memory.

>[!def|*] Temporal Locality
>Instructions/data that have been recently accessed are likely to be again.

>[!def|*] Spatial Locality
>Nearby instructions or data likely to be accessed after current access.

To exploit spatial locality, we transfer cache block with multiple adjacent words from memory. Mapping function determines where a block from memory is to be located in the cache. When the cache is full, the replacement algorithm determines which blocks to remove for space. 