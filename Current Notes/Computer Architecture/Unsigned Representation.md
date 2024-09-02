---
aliases:
  - Sign-and-magnitude
  - 1's Complement
  - 2's Complement
---
There are three systems that are used to represent both positive and negative numbers using $n$-bits. They are presented below.

>[!rmk|*]- Summary
>![[Pasted image 20240208102540.png]]

In this course, 2’s complement will be used frequently

>[!definition|*] 2’s Complement
>2’s Complement is obtained by doing 1’s complement then adding $1$ to the remaining expression. In this system, as seen in the summary image, there is only one `0` present. 
>
>Although it may seem unnatural, 2’s Complement is the most efficient way to do [[Addition and Subtraction of Signed Integers]].


>[!definition|*] Sign-and-Magnitude Representation
>In sign-and-magnitude representation, the left-most significant bit is assigned to represent either $+$ (0) or $-$ (1). This means that $n$-bits can represent $\{|2^{n-1}|\}$ numbers for $\pm$.  
>>[!exm|*]- Examples
>>- `0000` represents $+0$. 
>>- `1000` represents $-0$. 
>>- `1101` represents $-5$.
>>
>>Note that this representation “wastes” a number as 0 is represented twice. Thus we need another more efficient representation.

>[!definition|*] 1’s Complement
>In 1’s complement, negative values are obtained by complementing (or flipping) every bit of the positive value. The same can be done to the negative number to get the positive one. 
>(This operation is equivalent to subtracting $2^n-1$ from the number).
>>[!exm]- Examples
>>Consider:
>>- `7` $=$ `0111` $\implies$ `1000` $=$ `-7` in 1’s complement
>>- `-3` $=$ `1011` $\implies$ `0100` $=$ `3` in 1’s complement
>>- `0` $=$ `0000` $\implies$ `1111` $=$ `-0` in 1’s complement
>>
>>As you can see, we still have that “wasted” position as there is $\pm$ 0. 

