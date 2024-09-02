We start with some basic terminology:

>[!definition|*]- Isomorphism
>In linear algebra, an isomorphism is an [[Invertible Linear Maps|Invertible Linear Map]]. 

>[!definition|*]- Isomorphic
>Two vector spaces $V,W$ are called isomorphic if there is an isomorphism between the two of them. It is denoted $V \cong W$.

Now if we have an isomorphism between two vector spaces, it means that in a sense, they are essentially the same, as shown in the following theorem.

>[!theorem|1]- $V\cong W \iff \text{dim}(V) = \text{dim}(W)$ (Both are [[Finite-Dimensional Vector Space|Finite-Dimensional]]).
>`\begin{proof}` Since this is an $\iff$ statement, we show both ways:
>
>$\implies$: Since $V \cong W$, then there exists $T \in L(V,W): T$ is [[Bijective]]. Since $T$ is a bijection, it is [[Injective]] and [[Surjective]]. Thus the $\text{dim}(\text{null}(T)) = 0$ and $\text{dim}(\text{range}(T)) = \text{dim}(W)$. By the [[Fundamental Theorem of Linear Maps]]: $$\text{dim}(V) = \text{dim}(\text{null}(T)) + \text{dim}(\text{range}(T)) = 0 + \text{dim}(W) = \text{dim}(W)$$Thus $\text{dim}(V) = \text{dim}(W)$ as desired.
>
>$\impliedby$: Let $T \in L(V,W)$, since $\text{dim}(V) = \text{dim}(W)$, by theorem 2 in [[Invertible Linear Maps]], we immediately have that $T$ is invertible. Since there is an invertible linear map between $V \; \land \; W$, then they are isomorphic and we have $V \cong W$ as desired.
> `\end{proof}`

We note two important lemmas that we will state with no provided proof:

>[!lemma]- $L(V,W) \cong \mathbb{F}^{m,n}$ using $\mathcal{M}(T)$

>[!lemma] $\text{dim}(L(V,W)) = \text{dim}(V) \cdot \text{dim}(W)$

To prove Lemma 2, it might be important to note that $\text{dim}(\mathbb{F}^{m,n}) = \text{dim}(mn)$ whose proof is also left to the reader. We continue to the [[Quotient Space]]
