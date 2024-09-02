---
aliases:
  - SVD
---

>[!theorem|*] Singular Value Decomposition
>Suppose $T \in \mathcal{L}(V,W)$ and the positive [[Singular Values]] of $T$ are $s_1, \dots, s_m$. Then there exist [[Orthonormal]] lists $e_1, \dots , e_m$ in $V$ and $f_1, \dots, f_m$ in $W$ such that: $$Tv = s_1 \langle  v,e_1 \rangle  f_1 + \dots + s_m \langle  v,e_m \rangle  f_m$$For every $v \in V$.

>[!def|*]- Non-Square Diagonal Matrix
>An $M$-by-$N$ matrix $A$ is called a [[Diagonal Matrix]] if all entries of the matrix are $0$ except possible $A_K,k$ for $k = 1, \dots , \min \{M,N\}$.

>[!theorem|*] Matrix version of SVD
>Suppose $A$ is an $M$-by-$n$ matrix of rank $m \ge 1$. Then $\exists$ an $M$-by-$m$ matrix $B$ with [[Orthonormal]] columns, an $m$-by-$m$ diagonal matrix $D$ with positive numbers on the diagonal, and an $n$-by-$m$ matrix $C$ with orthonormal columns such that: $$A = BDC^*$$

>[!rmk|*] Finding the SVD of a Matrix
>To find the SVD of a matrix, we do the following:
>1. Compute $A^*A$ and get its [[Eigenvalue|Eigenvalues]].
>2. Extract the [[Singular Values]] associated with the matrix. Remember to list them in descending order, from biggest on the left to the smallest on the right. 
>3. Find an orthonormal basis for each [[Eigenspace]]. Let them be $e_i$. Now for each singular value $s_i$, compute: $$f_i = \frac{Ae_i}{s_i}$$
>
>Then:
>- The columns of $B$ are given by $f_i$’s. 
>- $D$ is the [[Diagonal Matrix]] with the singular values on its diagonal, from the biggest on the top left to the smallest on the bottom right.
>- The columns of $C$ are given by $e_i$’s. Taking the [[Adjoint]] of $C$ (the [[Complex Conjugate]] [[Transpose of a Matrix|Transpose]]) produces $C^*$.

>[!rmk|*]- Comparison with the Spectral Theorems
>![[Pasted image 20240406192020.png]]

>[!theorem|1] SVD of Adjoint and Pseudoinverse
>Suppose $T \in \mathcal{L}(V,W)$ and the positive [[Singular Values]] of $T$ are $s_1, \dots, s_m$. Suppose $e_1, \dots, e_m$ and $f_1, \dots f_m$ are [[Orthonormal]] lists in $V$ and $W$ such that: $$Tv = s_1 \langle  v,e_1 \rangle  f_1 + \dots + s_m \langle  v,e_m \rangle  f_m$$For every $v \in V$. Then: $$T^*w = s_1 \langle  w,f_1 \rangle  e_1 + \dots + s_m \langle  w,f_m \rangle  e_m$$and: $$T^\dagger w = \frac{\langle w,f_1 \rangle}{s_1}e_1 + \dots + \frac{\langle w,f_m \rangle}{s_m}e_m$$

