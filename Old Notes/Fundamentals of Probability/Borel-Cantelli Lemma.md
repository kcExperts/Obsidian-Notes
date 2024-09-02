
>[!theorem|*] Borel-Cantelli Lemma
>Let $\{A_1,A_2,A_3, \dots\}$ be a sequence of events. Prove that if the series $\sum_{n=1}^\infty P(A_n)$ converges, then: $$P \left(  \bigcap_{m=1}^\infty \bigcup_{n=m}^\infty A_n\right) =0$$In essence, this theorem states that if $\:\sum_{n=1}^\infty P(A_n) < \infty$, the probability that infinitely many of the $A_n$’s occur is $0$.

>[!claim|*]- Proof
>`\begin{proof}`  
>Here we make use of [[Sequences of Real Numbers Theorems|Intro to Real Analysis: Theorem 2]]. Thus, since $\sum_{n=1}^\infty P(A_n)$ converges, we have that $P(A_n) \rightarrow 0$. With this, we are justified in saying: $$\lim_{m \rightarrow \infty} \sum_{n=m}^\infty P(A_n) = 0$$Now let $B_m = \bigcup_{n=m}^\infty A_n$. This gives rise to the following relation: $$\begin{array}{ccc} \text{m=1} \implies A_1 \cup A_2 \cup A_3 \cup \dots  \\ \text{m=2} \implies A_2 \cup A_3 \cup \dots\\ \text{m=3} \implies  A_3 \cup \dots \end{array}$$From this, it should be clear that $B_1 \supseteq B_2 \supseteq B_3 \supseteq \dots$ meaning that $\{B_m:m\ge 1\}$ is a [[Probability Function|decreasing]] sequence of events. Thus by the [[Continuity of Probability Functions]], we have: $$P \left( \bigcap_{m=1}^\infty B_m \right) = P \left(  \lim_{m \rightarrow \infty} B_m \right)  = \lim_{m \rightarrow \infty} P(B_m)$$Now by [[Boole’s Inequality]], we have: $$\lim_{m \rightarrow \infty} P(B_m) = \lim_{m \rightarrow \infty} P \left(  \bigcup_{n=m}^\infty A_n \right) \le \lim_{ m \rightarrow \infty} \sum_{n=m}^\infty P(A_n) = 0$$We conclude that: $$P \left(  \bigcap_{m=1}^\infty \bigcup_{n=m}^\infty A_n\right) =0$$ 
>`\end{proof}`


