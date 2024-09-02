The processor does not need to know explicitly about the existence of the cache. It simply orders Read and Write requests using addresses that refer to location in memory. 

The cache control determines whether the requested word currently exists in the location of the cache. If it does, a *read or write hit* is said to have occurred. The main memory is not involved when there is a cache hit in a read operation. For write, it is a bit different:
1. Write-through protocol: Update cache and main memory.
2. Write-back protocol: Only updates the cache, memory updated later when block is replaced. This scheme needs *modified* or *dirty bits* to mark blocks that are updated in the cache. **(Good if same location is written to repeatedly)**

If the desired information is not present in the cache, a *read or write miss* has occurred. To fix this:
- Read miss: The block with the desired word is transferred from main memory to the cache.
- Write miss:
	- Under write-through: Information is written to the main memory.
	- Under write-back: First transfer block containing the addressed word into the cache. Then overwrite location in cached block.