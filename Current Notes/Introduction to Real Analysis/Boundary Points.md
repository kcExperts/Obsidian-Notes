---
aliases:
  - Boundary Point
---

>[!def|*] Boundary Point
>Let $A \subseteq \mathbb{R}^d$, then a point $\vec x \in \mathbb{R}^d$ is a boundary point of $A$ if: $$\forall r> 0 \; \; B_r(\vec x) \cap A \ne \emptyset \; \land \; B_r (\vec x) \cap A^c \ne \emptyset$$Boundary points are denoted using $\text{bd}(A)$.

>[!rmk|1]
>1. We use $\text{bd}(A)$ to denote the boundary of $A$. Sometimes we use $\partial A$.
>2. If $\vec x \in \text{bd}( A)$, doesn’t mean $\vec x \in A$. (Ex: $A = (0,1) \implies \text{bd}(A) = \{0,1\}$)
>3. $\text{bd}(A) = \text{bd}(A^c)$

The following lemma will prove useful for an alternate definition of [[Closure]].

>[!lemma|1] 
>$$\text{bd}(A) = \overline A /\text{int}(A)$$
>>[!claim|*]- Proof
>>`\begin{proof}` We will show inclusion both ways.
>>
>>$\subseteq$: Suppose $x \in \overline A / \text{int}(A)$, then $B_r(x) \not\in A$ by definition (we have removed all [[Interior Points]]). Then, we must have that $B_r(x) \cap A^c \ne \emptyset$. Since $\text{int}(A) \subseteq A$ and $\overline A = A \cup A’$, then $\exists \; x \in A’: \hat B_r(x) \cap A \ne \emptyset$. Clearly: $$\hat B_r(x) \cap A \ne \emptyset \implies B_r(x) \cap A \ne \emptyset$$Since we have $B_r(x) \cap A^c \ne \emptyset \; \land \; B_r(x) \cap A \ne \emptyset$, we conclude $x \in \text{bd}(A)$ and thus: $\overline A /\text{int}(A) \subseteq \text{bd}(A)$.
>>
>>$\supseteq$: Suppose $x \in \text{bd}(A)$, then $B_r(x) \cup A^c \ne \emptyset$. Hence $B_r(x) \not\in A$. Then by definition of $\overline A /\text{int}(A)$, we must have $x \in \overline A /\text{int}(A)$. We conclude that $\text{bd}(A) \subseteq \overline A /\text{int}(A)$.
>>
>>Thus we must have $\text{bd}(A) = \overline A / \text{int}(A)$ as desired.  
>> `\end{proof}`

>[!exm|*]-
>
![[Pasted image 20240229171126.png]]
In this image, assuming that $B$ belongs to the set (think of it as a random point outside), then $B \; \land \; C$ are boundary points.

