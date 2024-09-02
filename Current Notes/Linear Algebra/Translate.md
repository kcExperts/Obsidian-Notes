---
aliases:
  - Cosets
---

>[!definition|*] Translate
>Suppose $v\ \in V \; \land \; U \subseteq V \implies v + U \subseteq V:$ $v+U = \{v+u:u \in U\}$
>Then the [[Subset]]  (not subspace) $v+U$ is said to be the translate of $U$.
>
>Note $[w] = w + U = \{w+u : u \in U\}$ is common notation.

>[!exm|*]- 
>Consider the line $U \in \mathbb{R}^2: U = \{(x,2x): x \in \mathbb{R}\}$. In other words, $U$ is the line in $\mathbb{R}^2$ through the origin with slope $2$. Now if we let $v \in \mathbb{R}^2: v = (a,b)$, then we offset this line by some $a \; \land \; b$. Doing so translates the line to a different position.
>![[Pasted image 20240216112209.png]]
>
>You might begin to notice that the translate stays parallel to the other in the sense that their intersection is empty. We will explore this in the generalization of translates, called the [[Quotient Space]].

>[!rmk|*]- Translates are never empty
>`\begin{proof}` Clearly: $$[w] = w+U = \{w+u: u \in U\}$$Since $U$ is a subspace of $V$, $U$ must contain $0_v$. Thus $w+0_v = w \in [w]$, thus the vector $w$ is in $[w]$ thus $[w] \ne \emptyset$.
>  `\end{proof}`

Now our goal, as always, is to find a way to make the translate into a vector space. Thus we make the [[Quotient Space]]. 
