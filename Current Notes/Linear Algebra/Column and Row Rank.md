---
aliases: []
---
>[!def|*] Column and Row Rank
>Suppose $A$ is an $m \; \text{x} \; n$ matrix with entries in $\mathbb{F}$.
>- The *Column Rank* of $A$ is the dimension of the **span** of the columns of $A$ in $\mathbb{F}^{m,1}$. 
>- The *Row Rank* of $A$ is the dimension of the **span** of the rows of $A$ in $\mathbb{F}^{1,n}$. 
>
>See [[Rank]].

>[!exm|*]-
>Consider: $$A = \left[ \begin{array}{ccc} 4 & 7 & 1 & 8\\ 3 & 5 &2  &9  \end{array} \right]$$Then the *Column Rank* of $A$ is: $$\text{dim}(span( \left[ \begin{array}{ccc}  4   \\   2  \end{array} \right], \left[ \begin{array}{ccc}  7   \\    5 \end{array} \right], \left[ \begin{array}{ccc}  1   \\  2   \end{array} \right], \left[ \begin{array}{ccc}  8   \\  9   \end{array} \right]))$$Since these vectors span $\mathbb{F}^2$, they cannot have a dimension greater than $2$. Since the first and third vector are not [[Linear Combination|Linear Combinations]] of each other, the dimension must be equal or greater to $2$. Since it cannot be greater than $2$, we conclude that the *Column Rank* $= 2$. 


