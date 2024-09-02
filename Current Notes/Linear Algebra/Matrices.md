---
aliases:
  - Matrix
---
Suppose we wanted to represent a system in a compact form. We use what is known as a Matrix.

>[!def|*] Matrix $A_{j,k}$
>Suppose $m,n \in \mathbb{Z}_+$. An $m \; \text{x} \; n$ matrix $A$ is a rectangular array of elements of $\mathbb{F}$ with $m$ rows and $n$ columns. $$\left[ \begin{array}{ccc} A_{1,1} & \dots & A_{1,n} \\ \vdots &  & \vdots\\ A_{m,1} & \dots & A_{m,n} \end{array} \right]$$Where $A_{j,k}$ is the entry at the $j^{th}$ row and $k^{th}$ column.
>

>[!exm|*]-
>Consider: $$\left[ \begin{array}{ccc} 1 & 3 & 8 \\ 7i & 5-3i & 2 \\ -4  & i &  -8\end{array} \right]$$Then the entry at $A_{3,2} = i$. 

We also define three main operations on matrices:

>[!def|*] Standard Matrix Operations
>The usual three operations defined on matrices are:
>>[!def|*]- Addition
>>Let $A, B$ be two matrices, then: $$A + B = \left[ \begin{array}{ccc} A_{1,1} & \dots & A_{1,n} \\ \vdots &  & \vdots\\ A_{m,1} & \dots & A_{m,n} \end{array} \right] + \left[ \begin{array}{ccc} B_{1,1} & \dots & B_{1,n} \\ \vdots &  & \vdots\\ B_{m,1} & \dots & B_{m,n} \end{array} \right] = \left[ \begin{array}{ccc} A_{1,1} + B_{1,1} & \dots & A_{1,n} + B_{1,n} \\ \vdots &  & \vdots\\ A_{m,1} + B_{m,1} & \dots & A_{m,n} + B_{m,n} \end{array} \right]$$
>
>>[!def|*]- Scalar Multiplication
>>Let $\lambda \in \mathbb{F} \; \land \; A$ be a matrix, then: $$\lambda A = \lambda \left[ \begin{array}{ccc} A_{1,1} & \dots & A_{1,n} \\ \vdots &  & \vdots\\ A_{m,1} & \dots & A_{m,n} \end{array} \right] = \left[ \begin{array}{ccc}  \lambda A_{1,1} & \dots & \lambda A_{1,n} \\ \vdots &  & \vdots\\ \lambda A_{m,1} & \dots & \lambda A_{m,n} \end{array} \right]$$
>
>We also have [[Matrix Multiplication]]

Lastly, we define some notation:

>[!rmk|*] Notation
>We will use $A_{\cdot, k}$ to denote the $k^{th}$ column and $A_{j,\cdot}$ to denote the $j^{th}$ row.



