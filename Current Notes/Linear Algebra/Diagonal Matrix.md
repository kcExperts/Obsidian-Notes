
>[!def|*] Diagonalizable
>An operator on $V$ is called diagonalizable if the operator has a diagonal matrix with respect to some basis of $V$.

>[!theorem|1] Conditions equivalent to diagonalizability
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal L (V)$. Let $\lambda_1, \dots, \lambda_m$ denote the distinct [[Eigenvalue|Eigenvalues]] of $T$. Then the following are equivalent:
>1. $T$ is diagonalizable
>2. $V$ has a basis consisting of [[Eigenvector|Eigenvectors]] of $T$.
>3. $V = E(\lambda_1,T) \oplus \dots \oplus E(\lambda_m,T)$
>4. $\text{dim}(V) = \text{dim}(E(\lambda_1,T))+ \dots + \text{dim}(E(\lambda_m,T))$.

From this, we get:

>[!corollary|1]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal L (V)$ has $\text{dim}(V)$ distinct [[Eigenvalue|Eigenvalues]]. Then $T$ is diagonalizable.

>[!theorem|2] Necessary and Sufficient Condition for Diagonalizability
>Suppose $V$ is finite-dimensional and $T \in \mathcal L (V)$. Then $T$ is diagonalizable if and only if the minimal polynomial of $T$ equals: $$(z-\lambda_1) \dots (z-\lambda_m)$$for some list of distinct numbers $\lambda_1, \dots, \lambda_m \in \mathbb{F}$.

>[!theorem|3] Restriction of diagonalizable operator to invariant subspace
>Suppose $T \in \mathcal L (V)$ is diagonalizable and $U$ is a subspace of $V$ that is invariant under $T$. Then $T|_U$ is a diagonalizable operator on $U$.



