---
aliases:
  - Isolated Point
---

>[!def|*] Isolated Point
>If $x \in A$ is not a [[Cluster Points|Cluster Point]] of $A$, it is called an isolated point of $A$. 

>[!exm|1]-
>$B = (0,1) \cup \{2\} \implies \text{Cluster Points} = \{2\}$ It is clear that $2$ is not a [[Cluster Points|Cluster Point]]. Thus it must be an isolated point.

>[!proposition|1]
>Let $A \subseteq \mathbb{R}^d$ be finite. Then every $x \in A$ is an isolated point. 
>>[!claim|*]- Proof
>>`\begin{proof}` Let $\vec x \in A$. Now define $r = \text{min}\{\rho(\vec x, \vec y): \vec y \ne \vec x\}$. With this, define $\hat B_\frac{r}{2}(\vec x)$. Since $r$ is the minimum distance between any two points in $A$, taking half of that means that no points in $A$ will exist in $\hat B_\frac{r}{2}(\vec x)$. Hence: $$\hat B_\frac{r}{2}(\vec x) \cap A = \emptyset$$We conclude that all $x \in A$ are isolated points by definition.
>> `\end{proof}`

>[!exm|2]-
>Consider the set: $$B = \{ \frac{1}{n}: n \in \mathbb{N}_+\} \subseteq \mathbb{R}$$It is clear that every point in $B$ is isolated.
>`\begin{proof}` Consider, for each $n \in \mathbb{N}_+$, $r = \frac{1}{2n}$. It is clear that for $n \in \mathbb{N}_+, \frac{1}{n} > \frac{1}{2n}$. Let $x \in B$ and define $\hat B_r(\vec x)$. Since $r = \frac{1}{2n} < \frac{1}{n}$ and $\frac{1}{n}$ is [[Monotone, Nondecreasing and Nonincreasing|Monotone]] decreasing sequence, we must have: $$\hat B_r(\vec x) \cap B = \emptyset$$Thus every $x \in B$ is an isolated point.
> `\end{proof}`

