
>[!lemma|*]- Positive Invertible Operator
>A [[Self-Adjoint]] operator $T \in \mathcal L (V)$ is a positive invertible operator if and only if $\langle  Tv, v \rangle  > 0$ for every nonzero $v \in V$.

>[!def|*]- Positive Definite
>A matrix $B \in \mathbb{F}{m,n}$ is called positive definite if $B^* = B$ and: $$\langle  Bx,x \rangle  > 0$$for every nonzero $x \in \mathbb{F}^n$.

>[!theorem|*] Cholesky Factorization
>Suppose $B$ is a positive definite matrix. Then there exists a unique [[Upper Triangular Matrix]] $R$ with only positive numbers on its diagonal such that: $$B = R^*R$$

>[!rmk|*] Finding the Cholesky Factorization
>1. Since $B$ is positive definite, $\exists$ an invertible square matrix $A$ of the same size as $B$: $$B =A^*A$$
>2. Use [[QR Factorization]] to find $A = QR$, then: $$A = A^*A = R^*Q^*QR = R^*R$$

