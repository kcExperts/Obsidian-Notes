---
aliases:
  - Transpose
---
This seemingly innocent operation turns out to be of extreme importance for future theorems and definitions:

>[!def|*] Transpose $A^T$
>The *transpose* of a [[Matrices|Matrix]] $A$, denoted $A^T$, is the matrix obtained from $A$ by interchanging rows and columns (if $A$ is $m \; \text{x} \; n$, then $A^T$ is $n \; \text{x} \; m$). The entries of this matrix are given by: $$(A^T)_{k,j} = A_{j,k}$$

>[!exm|*]-
>Consider: $$A = \left[ \begin{array}{ccc} 1 &  2& 3 \\ 4  &5 & 6 \end{array} \right]$$Then $A^T$ is given by: $$A^T = \left[ \begin{array}{ccc} 1 & 4   \\ 2 &5   \\ 3 & 6   \end{array} \right]$$

>[!theorem|*] Properties
>The transpose has the following properties:
> - $(A+B)^T = A^T + B^T$
> - $(\lambda A)^T = \lambda A^T$
> - $(AB)^T = B^TA^T$

