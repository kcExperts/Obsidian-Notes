The Archimedean property is a useful tool for proofs, it follows directly from the [[Axiom of Completeness]]. 

>[!definition|*] Archimedean Property
>The Archimedean property states that: $$\forall \; a,b \in \mathbb{R}: a > 0 \implies \exists \; n \in \mathbb{N} : na > b$$In particular, we also have:$$\forall \; \epsilon > 0 \implies \exists \; n \in \mathbb{N} : \frac{1}{n} < \epsilon$$
Essentially, for any $\mathbb{R}$, there is a $\mathbb{N}$ that is greater or smaller than the specified real number. 
>>[!claim|*]- Proof
>>`\begin{proof}`  We prove the first result. To do so, assume, for the sake of contradiction, that: $$\exists \; r \in \mathbb{R} : \forall n \in \mathbb{N} \implies n < r$$This means that $\mathbb{N}$ is bounded above. Since $\mathbb{N} \subset \mathbb{R}$, the [[Axiom of Completeness]] states that $\mathbb{N}$ has a [[Supremum]] in $\mathbb{R}$. Let $s = \text{sup}(\mathbb{N})$. By definition of the supremum, $s - 1$ is not an upper bound. Let $m \in \mathbb{N}$. Thus: $$s-1<m \implies s < m + 1$$But a defining property of $\mathbb{N}$ is that $\forall n,m \in N \implies m+n \in \mathbb{N}$. Then we have that $m+1 \in \mathbb{N}$. Thus $s$ cannot be the supremum. We have a contradiction and we conclude that:$$\forall \; a,b \in \mathbb{R}: a > 0 \implies \exists \; n \in \mathbb{N} : na > b$$
Letting $na = \epsilon \; \land \; b = \frac{1}{n}$ produces the second part of the Archimedean property. `\end{proof}` 



