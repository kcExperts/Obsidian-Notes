
>[!theorem|*] Boole’s Inequality
>Let $A_1,A_2,A_3, \dots$ be a sequence of events of a [[Sample Space]]. Then: $$P \left(  \bigcup_{n=1}^\infty A_n \right) \le \sum_{n=1}^\infty P(A_n)$$

>[!claim|*]- Proof
>`\begin{proof}`
>We cannot use induction as this is an infinite union and sum. To get around this, define: $$B_1 = A_1 \; \land \; B_n = A_n/\bigcup^{n-1}_{j=1}B_{j} \; \; \forall \: n \ge 2$$By construction, every $B_i$ is mutually exclusive, hence by Axiom $3$, we have: $$P \left( \bigcup_{n=1}^\infty B_n \right) = \sum_{n=1}^\infty P(B_n)$$Furthermore, by construction, we also have: $$\bigcup_{n=1}^\infty B_n = \bigcup_{n=1}^\infty A_n$$Which holds as they will both cover the entire space. We should also note that $B_n \subseteq A_n$. Hence: $$P(B_n) \le P(A_n)$$Thus: $$P \left( \bigcup_{n=1}^\infty A_n\right) = P \left( \bigcup_{n=1}^\infty B_n\right) = \sum_{n=1}^\infty P(B_n) \le \sum_{n=1}^\infty P(A_n) $$Giving us our desired result.
>`\end{proof}`

>[!corollary|*]
>Let $A_1,A_2,A_3, \dots$ be a sequence of events of a sample space. Then: $$P \left(  \bigcap_{n=1}^\infty A_n \right) \ge 1 - \sum_{n=1}^\infty P(A^c_n)$$

>[!claim|*]- Proof
>`\begin{proof}`
>We have: $$P \left( \bigcap_{n=1}^\infty A_n\right) = 1 - \left[  P \left( \bigcap_{n=1}^\infty \right)^c \: \right] = 1- P \left( \bigcup_{n=1}^\infty A_n^c \right) $$Which holds by Demorgans Law. Applying Boole’s Inequality nets: $$P \left(  \bigcap_{n=1}^\infty A_n \right) \ge 1 - \sum_{n=1}^\infty P(A^c_n)$$Which holds as $A_n^c$ is also a sequence of events. 
>`\end{proof}`



