In essence, the nicest operators on $V$ are those for which an [[Orthonormal Basis]] exists for an operator that is diagonalizable. The spectral theorem will allow us to connect some dots and constitutes one of the most important theorems and tools for operators on an [[Inner Product Space]]. Its extension to infinite-dimensional spaces plays a key role in functional analysis.

To prove the theorem, two lemmas are needed.
>[!lemma|1]
>Suppose $T \in \mathcal L (V)$ is [[Self-Adjoint]] and $b,c \in \mathbb{R}$ are such that $b^2 < 4c$. Then: $$T^2 + bT + cI$$is an invertible operator.

>[!lemma|2]
>Suppose $T \in \mathcal L (V)$ is [[Self-Adjoint]], Then the [[Minimal Polynomial]] of $T$ is: $$T = (z - \lambda_1) \dots (z-\lambda_m)$$for some $\lambda_1, \dots , \lambda_m \in \mathbb{R}$.

>[!theorem|*] Real Spectral Theorem
>Suppose $\mathbb{F} = \mathbb{R}$ and $T \in \mathcal L (V)$. Then the following are equivalent:
>1. $T$ is [[Self-Adjoint]].
>2. $T$ has a diagonal matrix with respect to some [[Orthonormal Basis]] of $V$.
>3. $V$ has an [[Orthonormal Basis]] consisting of [[Eigenvector|Eigenvectors]] of $T$.

>[!theorem|*] Complex Spectral Theorem
>Suppose $\mathbb{F} = \mathbb C$ and $T \in \mathcal L (V)$. Then the following are equivalent:
>1. $T$ is a [[Normal Operator]].
>2. $T$ has a diagonal matrix with respect to some [[Orthonormal Basis]] of $V$.
>3. $V$ has an [[Orthonormal Basis]] consisting of [[Eigenvector|Eigenvectors]] of $T$.

