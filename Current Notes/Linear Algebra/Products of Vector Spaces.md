>[!definition|*] Product of Vector Spaces
>Suppose $V_1, \dots ,V_n$ are [[Vector Space|V.S]] over $\mathbb{F}$.
>- The product $V_1 \times \dots \times V_n$ is defined by: $$V_1 \times \dots \times V_n = \{(v_1, \dots, v_n): v_1 \in V_1, \dots , v_n \in V_n\} $$
>- Addition on $V_1 \times \dots \times V_n$ is defined by:$$(w_1, \dots, w_n) + (v_1, \dots, v_n) = (u_1 + v_1, \dots, u_n + v_n)$$
>- Scalar Multiplication on $V_1 \times \dots \times V_n$ is defined by: $$\lambda(v_1,\dots, v_n) = (\lambda v_1, \dots, \lambda v_n)$$

It is clear that if $V_1, \dots , V_n$ are vector spaces, then so is $V_1 \times \dots \times V_n$. Now we ask ourselves how to calculate the [[Dimension of a Vector Space|Dimension]] of such a product.

>[!theorem]- $\text{dim}(V_1 \times \dots \times V_n) = \text{dim}(V_1) + \dots + \text{dim}(V_n)$
>`\begin{proof}` Consider $V_k : 1 \le k \le n$. Let $v_1^k, \dots, v_n^k$ be a [[Basis]] for $V_k$. (A quick note: $\mathbb{R}^2 \times \mathbb{R}^2 = \{(x,y),(a,b)\}$, thus it is a vector of vectors in a sense). Now consider the element in $V_1 \times \dots \times V_n$ that equals the basis for $V_k$ in the $k^{th}$ slot and $0$ everywhere else. It is clear that it is a [[Linearly Independent]] vector that spans $V_k$. If we repeat this $\forall \; V_i \in V_1 \times \dots \times V_n$, we will get a list of linearly independent vectors that [[Span]] $V_1 \times \dots \times V_n$. With this, we conclude $\text{dim}(V_1 \times \dots \times V_n) = \text{dim}(V_1) + \dots + \text{dim}(V_n)$ as desired.
> `\end{proof}`

>[!theorem]- Define $T \in L(V_1 \times \dots \times V_n, V_1 + \dots + V_n)$ by $T(v_1, \dots, v_n) = v_1 + \dots + v_j$. Then $V_1 + \dots + V_n$ is a direct sum $\iff$ $T$ is injective
>`\begin{proof}` We show that both sides hold:
>
>$\implies$: Suppose $V_1 + \dots + V_n$ is a [[Direct Sum]], then by Theorem 2 in [[Direct Sum|Direct Sums]], the only way to write $0$ is by taking $v_1, \dots v_n = 0$. From this, we easily have that $\text{ker}(T) = \{0\} \implies \text{dim}(\text{ker}(T)) = 0 \implies T$ is injective.
>
>$\impliedby$: Suppose $T$ is injective, thus $\text{dim}(\text{ker}(T)) = 0 \implies \text{ker}(T) = \{0\}$. From Theorem 2 in [[Direct Sum|Direct Sums]], we have that $V_1 + \dots + V_n$ is a direct sum.
>  `\end{proof}`



