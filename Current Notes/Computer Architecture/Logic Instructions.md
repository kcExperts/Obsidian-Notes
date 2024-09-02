`AND`, `OR` and `NOT` are the basic building blocks of digital circuits. It is also useful to be able to apply these instructions to bits, bytes or words. 

>[!definition|*] #Bit-wise 
>Let $a$ and $b$ be two binary words. A bit-wise operation between the two of them compared the first bit of $a$ with the first bit of $b$, then the second bit of $a$ with the second bit of $b$, so on so forth. 

The usual `AND`, `OR` and `NOT` operations are computed bit-wise. If the usage of the *immediate addressing mode* is required, then the constant value (most likely $16$-bits) will be extended to $32$-bits by $0$-extension. 

Other logic instructions such as [[Shift Instructions]] and [[Rotate Instructions]]