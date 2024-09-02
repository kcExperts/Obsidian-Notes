Following from [[Memory Organization]], we have bits, bytes and words to deal with. Since words can have varying lengths and that there are far too many bits to deal with in a standard computer, it is practical to give addresses to individual **bytes**. This assignment of addresses is called **byte addressability**.

>[!rmk|*] Byte Locations
>Byte locations have addresses $0,1, \dots$ . Since we assume a word is $32$ bits longs, each word contains $4$ bytes, thus the addresses of the following words are at multiples of $4$ ($0,4,\dots$).

We are then faced with which direction to assign byte addresses in a word. Do we go from left to right or right to left? This leads us to [[Big-Endian and Little-Endian]]. 