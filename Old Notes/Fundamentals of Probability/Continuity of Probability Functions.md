---
aliases: []
---

>[!rmk|*] Reminder of General Continuity
>Recall that a function $f: \mathbb{R} \rightarrow \mathbb{R}$ is continuous if: $$\lim_{x \rightarrow c} f(x) = f(c) \iff \lim_{n \rightarrow \infty} f(x_n) = f(\lim_{n \rightarrow \infty}x_n)$$Which holds $\forall \: n: x_n \in \mathbb{R}$.

Now we translate this idea into something useful for probability. Be familiar with the notation in [[Probability Function]]. 

>[!theorem|*] Continuity of the Probability Function
>For any increasing or decreasing sequence of events, $\{E_n, n \ge 1\}$, we have: $$\lim_{n \rightarrow \infty} P(E_n) = P(\lim_{n \rightarrow \infty} E_n)$$

>[!claim|*]- Proof of the Continuity of the Probability Function
>`\begin{proof}`
>We show the result holds for both increasing and decreasing [[Probability Function|Probability Functions]]. 
>
>**Increasing**:
>Suppose $\{E_n, n \ge 1\}$ is increasing. Let $F_1= E_1 \; \land \; F_n = E_n - E_{n-1}$. Clearly $\{F_i, i \ge 1\}$ is a mutually exclusive set of events that satisfy: $$\begin{array}{ccc} \bigcup_{i=1}^n F_i = \bigcup_{i=1}^n E_i = E_n \; \; \forall \: n \in \mathbb{N}_+ \\ \bigcup_{i=1}^\infty F_i = \bigcup_{i=1}^\infty E_i\end{array}$$(Which is a similar trick that we did in the proof for [[Boole’s Inequality]]). Thus: $$P(\lim_{n \rightarrow \infty} E_n) = P\left( \bigcup_{i=1}^\infty E_i \right) = P\left( \bigcup_{i=1}^\infty F_i \right) = \sum_{i=1}^\infty P(F_i) = \lim_{n \rightarrow \infty} \sum_{i=1}^n P(F_i)$$$$= \lim_{n \rightarrow \infty} P\left( \bigcup_{i=1}^n F_i \right) = \lim_{n \rightarrow \infty} P\left( \bigcup_{i=1}^n E_i \right) = \lim_{n \rightarrow \infty} P(E_n)$$
>Where the first and last equality are true as $P$ is increasing.
>
>**Decreasing**:
>Suppose $\{E_n, n \ge 1\}$ is decreasing. Then $\forall \: n, E_n \supseteq E_{n+1}$. Taking the complement means that $E^c_n \subseteq E^c_{n+1}$ hence the sequence $\{E_n^c, n \ge 1\}$ is an increasing sequence. Thus: $$P(\lim_{n \rightarrow \infty} E_n) = P \left( \bigcap_{n = 1}^\infty E_i \right)  = 1- P\left[ \left( \bigcap_{n=1}^\infty E_i\right)^c \: \right]  = 1-P \left( \bigcup_{n=1}^\infty E^c_i\right)$$$$= 1 - P(\lim_{n \rightarrow \infty} E^c_n) = 1-\lim_{n \rightarrow \infty}P(E_n^c) = 1 - \lim_{n \rightarrow \infty}[1-P(E_n)]$$$$= 1-1+ \lim_{n \rightarrow \infty}P(E_n) = \lim_{n \rightarrow \infty} P(E_n)$$
>Where the third equality holds because of Demorgans Law.
>`\end{proof}`

>[!exm|1]
>Suppose that some individuals in a population produce offspring of the same kind. The offspring of the initial population are called second generation, the offspring of the second generation are called third generation, and so on. Furthermore, suppose that with probability: $$\exp\left[ \frac{-(2n^2+7)}{6n^2} \right] $$The entire population completely dies out by the $n^{th}$ generation before producing any offspring, what is the probability that such a population survives forever?

>[!claim|*]- Solution to Example 1
>Let $E_n$ denote the event of extinction of the entire population by the $n^{th}$ generation. Now our probability function is an increasing function. Hence ($E_1 \subseteq E_2 \subseteq E_3 \subseteq \dots$). With this, we are able to apply the continuity theorem. We have: $$\begin{array}{ccc} P(\text{lives forever}) = 1 - [P(\text{lives forever})^c \:] \end{array}$$Thus: $$P(\text{lives forever})=  1 - P(\text{eventually dies}) = 1 - P \left( \bigcup_{i=1}^\infty E_i \right)$$
>$$=1 - \lim_{n \rightarrow \infty} P(E_n)= 1 - \lim_{n \rightarrow \infty} \exp \left( -\frac{2n^2+7}{6n^2} \right)  = 1 - e^{-1/3}$$







