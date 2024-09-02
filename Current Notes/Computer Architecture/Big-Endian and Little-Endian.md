There are two ways that [[Byte Addressability]] can be assigned across words. 

>[!definition|*] Little-Endian
>Little-Endian consists of ordering byte addresses from lowest to highest in a word from *right* to *left*. It is the most natural form and is often used. Think of it as writing a binary number, you start from the right and move to the left.

>[!def|*] Big-Endian
>Big-Endian consists of ordering byte addresses from lowest to highest in a word from *left* to *right*. 

>[!exm|*]- Big-Endian and Little-Endian Image
> ![[Pasted image 20240208153931.png]]
>

With this defined, [[Word Alignment]] allows us to define how words align in memory. 
