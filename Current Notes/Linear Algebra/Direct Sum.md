---
aliases:
  - Direct Sums
---

>[!definition|*] Direct Sum
Suppose $V_1, \dots V_n$ are [[Vector Subspace|V.Sub]] $V_1 + \dots + V_n$ is called a direct sum if each element has one unique representation. Such a sum is denoted: $$V_1 \oplus \dots \oplus V_n$$We note the following important equivalency: $$V_1 \oplus V_2 \iff V_1 \cap V_2 = \{ 0 \}$$
We also note the a direct sum is the smallest [[Vector Space|V.S]] that contains $V_1, \dots V_n$. 

>[!theorem] Direct Sum Construction
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $A$ is a V.Sub of $V$ $\implies$ $\exists$ $W$ : $W$ is a V.Sub of  $\;V \;\;\land \;\; V = A \oplus W$.
>>[!claim|*]- Proof
>>`\begin{proof}` We know that we can extend a [[Linearly Independent]] set of vectors $w_1, \dots, w_n$ into a [[Basis]]. Let $A$ have a basis $w_1, \dots, w_n$, then we add vectors $v_1, \dots, v_m$ until we form a basis of $V$. Assign $v_1, \dots, v_m$ to $W$ and by definition, $A \cap W = \{0\}$. Thus $A \oplus W$.
>> `\end{proof}`

We now find conditions that a sum must satisfy for it to be a direct sum.

>[!theorem] Condition for a Direct Sum
>Suppose $V_1, \dots , V_n$ are subspaces of $V$. Then $V_1+ \dots + V_n$ is a direct sum $\iff$ the only way to write $0$ as a sum $v_1 + \dots + v_n$ is by taking $v_1 = \dots = v_n = 0$.

>[!theorem] Condition for a Direct Sum using Dimension
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $V_1, \dots , V_n$ are [[Vector Subspace|V.Sub]] of $V$. Then $V_1 + \dots + V_n$ is a direct sum $\iff$ $\text{dim}(V_1 + \dots + V_n) = \text{dim}(V_1) + \dots + \text{dim}(V_n$).

>[!lemma]- $V_1 \oplus V_2 = V_2 \oplus V_1$
>`\begin{proof}` We will show inclusion on both sides. Thus suppose we had $V_1 \oplus V_2 \implies v_1 + v_2 \in V_1 \oplus V_2$. Since direct sums are a [[Vector Space]], they are closed under addition, thus $v_2 + v_1 \in V_1 \oplus V_2$. Thus $V_2 \oplus V_1 \in V_1 \oplus V_2$.
>Now suppose we had $V_2 \oplus V_1 \implies v_2 + v_1 \in V_2 \oplus V_1$. Since it must respect closure under addition: $v_1 + v_2 \in V_2 \oplus V_1$ Thus $V_1 \oplus V_2 \in V_2 \oplus V_1$. We have shown inclusion both ways, thus $V_1 \oplus V_2 = V_2 \oplus V_1$. 
> `\end{proof}`

>[!lemma]- $V_1 \oplus (V_2 \oplus V_3) = (V_1 \oplus V_2) \oplus V_3$
>`\begin{proof}` We show inclusion both ways. Suppose we had $V_1 \oplus (V_2 \oplus V_3) \implies v_1 + (v_2 + v_3) \in V_1 \oplus (V_2 \oplus V_3)$. Since direct sums are a [[Vector Space]], it is distributive: $(v_1 +v_2) + v_3 \in V_! + (V_2 + V_3)$
>Now suppose we had $(V_1 \oplus V_2) \oplus V_3 \implies (v_1 + v_2) + v_3  = (V_1 \oplus V_2) \oplus V_3$. Since direct sums are distributive: $v_1+(v_2+v_3) \in (V_1 \oplus V_2) \oplus V_3$. We have shown inclusion both ways thus: $V_1 \oplus (V_2 \oplus V_3) = (V_1 \oplus V_2) \oplus V_3$.
> `\end{proof}`
