---
aliases:
  - Cluster Point
  - Limit Point
  - Accumulation Point
---

>[!def|*] Cluster/ Limit / Accumulation points
>Let $A \subseteq \mathbb{R}^d$. A point $\vec x \in \mathbb{R}^d$ is a cluster point of $A$ if: $$\hat B_r(\vec x)\cap A \ne \emptyset$$$\forall \; r > 0$. The set of cluster points of $A$ is denoted $A^{'}$.

>[!exm|*]-
>Some examples:
>- $A = (0,1) \subseteq \mathbb{R}$ $\implies A^{'} = [0,1]$
>- $B = (0,1) \cup \{2\} \implies B^{'} = [0,1]$ (Clearly a ball around $2$ with sufficiently small $r$ gives the $\emptyset$)

Note $\hat B$ is the [[Punctured Ball]]. Now you might have noticed that an alternate name for cluster points are limit points. It turns out that involving [[Sequences]] leads to interesting things.

>[!def|*]
>Let $A \subseteq \mathbb{R}^d$ be a set. A [[Sequences|Sequence]] $x_n$ is in $A$ if: $$x_n \in A \; \; \forall \: n \in \mathbb{N} \; \text{(or} \; \mathbb{N}_+ \text{)}$$
>We write $x_n \subseteq A$. 

>[!theorem|1] 
>Let $A \subseteq \mathbb{R}^d$ be a set. The following are equivalent:
>1. $x$ is a cluster point of $A$.
>2. $B_r(x) \cap A$ is infinite $\forall \: r > 0$. 
>3. $\exists \; x_n \subseteq A: x_n \ne x \; \; \:\forall \: n \in \mathbb{N} \; \land \; \lim_{n \rightarrow \infty} x_n = x$  
>
>>[!claim|*]- Proof
>>`\begin{proof}` Here we prove the implications in a specific order.
>>$(3) \implies (2)$: Let $x_n \subseteq A$ with $x_n \rightarrow x$. By the definition of a [[Converging Sequences|Converging Sequence]]: $\forall \: r >0, \exists \; N \in \mathbb{N} : \rho(x_n,x) < r \; \forall n \ge N$. Then: $$\{x_n: n \ge N\} \subseteq B_r(x) \cap A$$Since $n \ge N$ contains infinite terms, so will $B_r(x) \cap A$. 
>>
>>$(2) \implies (1)$: Take the puncture ball $\hat B_r(x)$. We know $\hat B_r(x) = B_r(x) \backslash \{x\}$. Since $B_r(x) \cap A$ is infinite, removing one point form the intersection will still make it infinite. Thus $\hat B_r(x) \cap A \ne \emptyset$. Therefore, by definition of a cluster point, $x$ is a cluster point of $A$.
>>
>>$(1) \implies (3)$: Since $x$ is a cluster point of $A$, we know, by definition, that: $$\hat B_r(x) \cap A \ne \emptyset \; \; \forall r >0$$We must construct a sequence. The strategy here is to take some point, say $x_1 \in \hat B_1 (x) \cap A$. Doing this for each $n \in \mathbb{N}_+$, we get: $x_n \in \hat B_{\frac{1}{n}}(x) \cap A$. 
>>We note that $x_n$ defined this way is in $A$ and that $x_n \ne x$ since $x_n \in \hat B_{\frac{1}{n}} (x)$. All that is left is to show that it converges to $x$. 
>>$\forall \epsilon > 0$, by the [[Archimedean Property]], $$\exists \; N \in \mathbb{N}: \frac{1}{N} < \epsilon \implies \rho(x_n,x) < \frac{1}{n} < \frac{1}{N} < \epsilon \; \; \text{whenever} \; n \ge N$$
>> `\end{proof}`

>[!rmk|*] Takeaway
>The takeaway from the theorem is that cluster points are the limits of [[Sequences]] in $A$ that are not equal to the cluster point. Hence why we may sometimes refer to cluster points as limit points.

This leads us to our fourth definition of a [[Open and Closed Sets|Closed]] set.

>[!theorem|2]
>Let $A \subseteq \mathbb{R}^d$. $A$ is closed $\iff$ $\forall \: x_n \in A, \lim_{n \rightarrow \infty} x_n\in A$.
>Note: These limits can be cluster points, like Theorem 1, but they could also be isolated points ($\text{i.e}$ Constant sequences).
>>[!claim|*]- Proof by Contradiction
>>`\begin{proof}` We show implication both ways:
>>$\implies$: Suppose, for contradiction, that $\exists \; x_n \in A: \lim_{n \rightarrow \infty} x_n \not\in A$. For notation, let $x= \lim_{n \rightarrow \infty} x_n$. Then $x \in A^c$. Since $A$ is closed, $A^c$ is open by definition. By openness, $\exists \; r > 0: B_r(x) \subseteq A^c$. Since $x_n \rightarrow x$, $\exists \; N \in \mathbb{N} : x_n \in B_r(x) \; \forall n \in \mathbb{N}$ ($\text{i.e}$ $x_n \in A^c$). This contradicts the fact that $x_n \subseteq A$. 
>>
>>$\impliedby$: Suppose, for contradiction, that every [[Converging Sequences|Converging Sequence]] in $A$ converges to a limit in $A$, but $A$ is not closed. 
>>Then $A^c$ is not open by definition. Thus $\exists \; y \in A^c: \forall r >0, \hat B_r(y) \cap A \ne \emptyset$. By Theorem 1, $y$ is a cluster point of $A$. Furthermore, $\exists x_n \subseteq A$ converging to $y$ with $x_n \ne y \; \forall n$. But this contradicts the assumption that every converging subsequence has a limit in $A$. 
>> `\end{proof}`
