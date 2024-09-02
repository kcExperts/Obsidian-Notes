---
aliases:
  - Interior Point
---

>[!def|*] Interior Point
>Let $A \in \mathbb{R}^d$, a point $\vec x \in A$ is an interior point of $A$ if: $$\exists r>0 \; \;B_r(\vec x) \subseteq A$$
>In other words: $\vec x$ is contained in an open subset of $A$.
>
>We denote the set of interior points of $A$ to be $\text{Int}(A)$. Sometimes, we use $A^0$.

>[!proposition|1] 
>The interior of $A$ is the largest open subset of $A$. 
>I.e. Define $V$ to be the union of all open subsets of $A$ ($V$ is open). Then $\text{int}(A) = V$.
>>[!claim|*]- Proof
>>`\begin{proof}` We shall show containment both ways for $\text{int}(A) = V$.
>>
>>$\subseteq$: Suppose $x \in \text{int}(A)$ is arbitrary. Then by definition, we have: $$\exists \: r>0 : B_r(x) \subseteq A$$Thus $x \in B_r(x)$. Now we know that [[The r Ball]] is open. Since $V$ is the union of all open subsets, then $B_r(x) \in V$, hence $x \in B_r(x)$, thus $\text{int}(A) \subseteq V$.
>>
>>$\supseteq$: Suppose $x \in V = U_1 \cup U_2 \cup \dots \cup U_n$ (where $U_i$ are open subsets of $A$). Then $\exists \: i : v \in U_i$. Clearly $V \subseteq A$ since it contains the union of open subsets of only $A$. Hence $U_i \subseteq V \subseteq A \implies$ $U_i \subseteq A$. Since $U_i$ is open, we have: $$\exists \: r > 0 : B_r(x) \subseteq A$$Hence $x \in \text{int}(A)$. Thus $\text{int}(A) \subseteq V$. 
>>
>>We conclude that $\text{int}(A) = V$.
>> `\end{proof}`

