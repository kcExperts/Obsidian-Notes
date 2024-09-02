We will only use [[Unsigned Representation|2's Complement]] as it is the most efficient approach. 

To understand 2’s complement arithmetic, one must consider addition [[Modulo|mod]] $N$. Suppose you had a circle with the positive and negative representation of [[Integers]]. Then suppose choose an integer $a$ and $b$. Performing $a+b$ is as easy as finding $a$ and moving one place $b$ times. However, we want to perform addition in a more classical way.

>[!definition|*] Addition of Signed Numbers
>To add signed numbers together, get their 2’s complement and line them up to do classical bit by bit addition. If you need to, carry over the one until it is either absorbed or hits the end. If it does indeed hit the end, then ignore the carry-out. The remaining number will be the 2’s complement of the number you were searching for.
>>[!exm|*]-
>![[Pasted image 20240208145102.png]]
>(Always ignore the carry-out, this is a consequence of modulo $N$)

>[!definition|*] Subtraction of Signed Numbers
>To do subtraction of two signed numbers, that is $X-Y$ (assuming they are already in 2’s complement), take (again) the complement of $Y$, then add it to $X$ using the addition rule defined above. If the number is in the range $-2^{n-1}$ through $+2^{n-1}-1$, then the answer is valid.
>>[!exm|*]-
>>![[Pasted image 20240208150233.png]]
>>Do note that **adding** together two negative numbers is **not** a subtraction operation. Instead, the standard rule of addition applies. 


