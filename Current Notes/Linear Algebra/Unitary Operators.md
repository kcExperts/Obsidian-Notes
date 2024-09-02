---
aliases:
  - Unitary
---

>[!def|*] Unitary Operator
>An operator $S \in \mathcal L (V)$ is called unitary if $S$ is an invertible [[Isometry]]. 
>
>If $V$ is finite-dimensional, then having $S \in \mathcal L (V)$ and $S$ being an Isometry already means it is invertible since it is injective (see Theorem 2 in [[Invertible Linear Maps]]).

>[!theorem|1] Characterization of Unitary Operators
>Suppose $S \in \mathcal L (V)$. Suppose $e_1, \dots, e_n$ is an [[Orthonormal Basis]] of $V$. Then the following are equivalent:
>1. $S$ is a unitary operator.
>2. $S^*S = SS^* = I$.
>3. $S$ is invertible and $S^{-1} = S^*$.
>4. $Se_1, \dots , Se_n$ is an orthonormal basis of $V$.
>5. The rows of $\mathcal M(S,(e_1, \dots, e_n))$ form an orthonormal basis of $\mathbb{F}^n$ with respect to the [[Euclidean Inner Product]].
>6. $S^*$ is a unitary operator.

>[!theorem|2]
>Suppose $\lambda$ is an [[Eigenvalue]] of a unitary operator. Then $|\lambda | = 1$.

>[!theorem|3] Unitary operators on Complex Inner Product Spaces
>Suppose $\mathbb{F} = \mathbb C$ and $S \in \mathcal L (V)$. Then the following are equivalent.
>1. $S$ is a unitary operator.
>2. There is an orthonormal basis of $V$ consisting of [[Eigenvector|Eigenvectors]] of $S$ whose corresponding eigenvalues all have absolute value $1$.






