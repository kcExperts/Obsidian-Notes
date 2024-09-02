
>[!def|*] Positive Operator
>An operator $T \in \mathcal L (V)$ is called positive if $T$ is [[Self-Adjoint]] and: $$\langle Tv, v \rangle \ge 0$$for all $v \in V$. If $V$ is a complex vector space, then the requirement that $T$ be [[Self-Adjoint]] can be dropped.

>[!def|*] Square Root
>An operator $R$ is called a square root of an operator $T$ if $R^2 = T$.

>[!theorem|1] Characterization of Positive Operators
>Let $T \in \mathcal L (V)$. Then the following are equivalent:
>1. $T$ is a positive operator.
>2. $T$ is [[Self-Adjoint]] and all [[Eigenvalue|Eigenvalues]] of $T$ are nonnegative.
>3. With respect to some [[Orthonormal Basis]] of $V$, the matrix of $T$ is a diagonal matrix with only nonnegative numbers on the diagonal.
>4. $T$ has positive square root.
>5. $T$ has a [[Self-Adjoint]] square root.
>6. $T = R^* R$ for some $R \in \mathcal L (V)$.

>[!theorem|2]
>Every positive operator on $V$ has a unique positive square root. We denote it as $\sqrt T$.

>[!theorem|3]
>Suppose $T$ is a positive operator on $V$ and $v \in V$ is such that $\langle Tv , v \rangle = 0$. Then $Tv = 0$.




