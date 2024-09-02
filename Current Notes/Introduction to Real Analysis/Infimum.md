---
aliases:
  - Greatest Lower Bound
---
For $A \subseteq \mathbb{R}$, the infimum is defined as the greatest [[Bounds|Lower Bound]] of $A$. In other words, it is the least [[Bounds|Upper Bound]] of the set of all lower bounds of $A$. We note the infimum is unique. 

>[!definition|*] Infimum
>The infimum of a set $A$ is the greatest [[Bounds|Lower Bound]] of the set $A$. We have that $l = inf(A)$ if and only if:
> - $l$ is a lower bound of $A$.
> - $\forall \; b \in L$ : $L$ is the set of lower bounds, $s \le b$.

>[!rmk|*] Useful Proof Definition
>Let $A \subseteq \mathbb{R}$ : $A \ne \emptyset \; \land \; A$ is bounded. Then: $$l = \text{inf}(A) \iff l \le a \; \forall \; a \in A \; \land \; \exists \; a \in A: a < l + \epsilon$$
>$$l = \text{inf}(A) \iff l \le a \; \forall \; a \in A \; \land \; A \cap[l,l + \epsilon) \ne \emptyset$$

>[!theorem|*]
>If $A \subseteq B$ are nonempty bounded sets $\implies \text{inf}(B) \le \text{inf}(A)$

For an example of a Supremum/Infimum proof, see [[Sup and Inf Worked Example TODO]].