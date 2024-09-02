---
aliases:
  - Least Upper Bound
---
For $A \subseteq \mathbb{R}$, the supremum is defined as the least [[Bounds|Upper Bound]] of $A$. In other words, it is the greatest [[Bounds|Lower Bound]] of the set of all upper bounds of $A$. We note that the supremum is unique.

>[!definition|*] Supremum
>The supremum of a set $A$ is the least [[Bounds|Upper Bound]] of the set $A$. We have that $s = sup(A)$ if and only if:
> - $s$ is an upper bound of $A$.
> - $\forall \; b \in U$ : $U$ is the set of upper bounds $\implies$ $s \le b$.

>[!rmk|*] Useful proof Definition
>Let $A \subseteq \mathbb{R}$ : $A \ne \emptyset \; \land \; A$ is bounded. Then: $$s = \text{sup}(A) \iff a \le s \; \forall \; a \in A \; \land \; \exists \; a \in A: s - \epsilon < a$$
>$$s = \text{sup}(A) \iff a \le s \; \forall \; a \in A \; \land \; A \cap(s-\epsilon,s] \ne \emptyset$$

>[!theorem|*]
>If $A \subseteq B$ are nonempty bounded sets $\implies \text{sup}(A) \le \text{sup}(B)$

For an example of a Supremum/Infimum proof, see [[Sup and Inf Worked Example TODO]].








