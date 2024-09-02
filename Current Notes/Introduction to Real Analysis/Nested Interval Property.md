
>[!definition|*] Nested Interval Property
>The nested interval property states that for each $n \in \mathbb{N}$ assume we are given a closed interval $I_n = [a_n, b_n] = \{x \in \mathbb{R}: a_n \le x \le b_n\}$. Assume also that each $I_n$ contains $I_{n+1}$. Then the resulting nested sequence of closed intervals $I_1 \supseteq I_2 \supseteq \dots$ has a nonempty intersection: $\cap_{n=1}^\infty I_n \ne \emptyset$. In short: $$\forall \; n \in \mathbb{N} \; \land \; I_n = \{x \in \mathbb{R}: a_n \le x \le b_n\}: I_{n+1} \subseteq I_n \implies \cap_{n=1}^\infty I_n \ne \emptyset$$
>>[!claim|*]- Proof
>>`\begin{proof}`  We will use the [[Axiom of Completeness]] to show that $\exists \; x \in \mathbb{R}: x \in \cap_{n=1}^\infty I_n$.
To do so, consider, without loss of generality, the set of left bounds of $I_n$:$$A = \{a_n: n \in \mathbb{N}\}$$We immediately note $A \subseteq \mathbb{R}$. As the intervals are nested, it is clear that every $b_n$ is an [[Bounds|Upper Bound]] of $A$. Thus $\exists \; x = \text{sup}(A)$. As $x$ is an upper bound of $A$ $\implies$ $a_n\le x \;\forall \; a \in A$. The fact that each $b_n$ is an upper bound of $A$ and that $x = \text{sup}(A)$ $\implies$ $x \le b_n$. Then we have that $a_n \le x \le b_n \implies \cap_{n=1}^\infty I_n \ne \emptyset$.`\end{proof}`

