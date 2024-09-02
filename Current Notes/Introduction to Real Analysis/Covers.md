---
aliases:
  - Cover
  - Subcover
  - Subcovers
---
Let us begin by definition what it means to be an open cover.
>[!def|*] Open Cover
>Let $(X,\mathcal T)$ be a [[Topology|Topological Space]] and $A \subseteq X$. An open cover of $A$, $\mathcal U$ is: $$\mathcal U = \{\mathcal U_\alpha\}\subseteq \mathcal T$$with $A \subseteq \cup_\alpha \mathcal U_\alpha$.
>One should interprets $\mathcal U_a$ as an open set and $\mathcal U$ as the union of those open sets; creating an open cover.

>[!rmk|*]- Intuition
>Essentially, an open cover $\mathcal U$, is a union of open sets in $\mathcal T$ such that is “covers” the set $A \subseteq X$. The following image represents the idea well:
>![[Pasted image 20240314135251.png]]
>

>[!def|*] Subcover
>$\tilde{\mathcal U}$ is a subcover of $\mathcal U$ if $\tilde{\mathcal U} \subseteq \mathcal U$ and $\tilde{\mathcal U}$ is an open cover of $A$.

>[!exm|1]
>Consider $A = (0,1)$, clearly there are infinitely many open covers of $A$. We shall list $1$ of them: $$\mathcal U = \left\{ \left( -\frac{1}{2}, \frac{1}{2} \right) ,\left( 0, \frac{3}{4} \right) ,\left( \frac{1}{4}, \frac{5}{4} \right)  \right\}$$With: 
>- $\mathcal U_1 = \left\{ \left( -\frac{1}{2}, \frac{1}{2} \right)  \right\}$
>- $\mathcal U_2 = \left\{ \left(0, \frac{3}{4} \right)  \right\}$
>- $\mathcal U_3 = \left\{ \left( \frac{1}{4}, \frac{5}{4} \right)  \right\}$
>
>One can also construct a subcover: $$\tilde{\mathcal U} = \left\{ \left( -\frac{1}{4}, \frac{1}{2} \right) ,\left( 0, \frac{5}{8} \right) ,\left( \frac{1}{4}, \frac{9}{8} \right)  \right\}$$We note $\tilde{\mathcal U} \subseteq \mathcal U$.




