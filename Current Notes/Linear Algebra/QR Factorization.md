The following method helps in approximating eigenvalues of matrices.

>[!def|*] QR Factorization
>Suppose $A$ is a square matrix with [[Linearly Independent]] columns. Then there exist unique matrices $Q$ and $R$ such that $Q$ is [[Unitary Operators|Unitary]], $R$ is [[Upper Triangular Matrix|Upper Triangular]] with only positive numbers on its diagonal, and: $$A = QR$$

>[!rmk|*] Finding the QR factorization
>To find the QR factorization of a matrix, we must:
>1. Let $v_1, \dots, v_n$ be the columns of $A$ respectively. 
>2. Apply the [[Gram-Schmidt Procedure]] to get an [[Orthonormal]] list. 
>3. Let $Q$ be the [[Unitary Operators|Unitary]] matrix whose columns are $e_1, \dots , e_n$. 
>4. Let $R$ be the matrix whose entry in row $j$, column $k$, is $\langle  v_k, e_j \rangle$. 

