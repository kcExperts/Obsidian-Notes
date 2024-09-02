
>[!theorem|*] Order Limit Theorem
>If $a_n, b_n$ are [[Sequences]] with [[Limits]] $a \; \land \;b$ respectively and $a_n \le b_n \; \forall n \in \mathbb{N}$, then we have $a \le b$.
>>[!claim|*]- Proof
>>`\begin{proof}`  We prove the contrapositive: Suppose $b<a \; \land \;$ let $\epsilon = \frac{a-b}{2} > 0$. Since: $$a_n \rightarrow a \implies \;\exists N_a \in \mathbb{N}: \; |a_n - a| < \epsilon = \frac{a-b}{2}$$Similarly: $$a_n \rightarrow a \implies \;\exists N_b \in \mathbb{N}: \; |b_n - a| < \epsilon = \frac{a-b}{2}$$Let $N = \text{max}\{N_a,N_b\} \implies$ for $n \ge N$, we have by properties of the [[Absolute Value]] that:$$|a_n-a|<\epsilon \implies-\epsilon > a_n - a > \epsilon = \frac{b-a}{2} \implies a_n > \frac{b+a}{2}$$Similarly:$$|b_n-b|<\epsilon \implies \frac{a-b}{2} = -\epsilon  > b_n - b > \epsilon \implies b_n < \frac{b+a}{2}$$By [[Transitivity]] of $<$ , we have $b_n < a_n \; \forall \; n \ge N$ as desired. `\end{proof}` 

>[!corollary|*] Alternate Defintion of the Theorem
>Equivalently, the Order Limit Theorem reads:
>1. If $a_n \ge 0 \forall n \in \mathbb{N}$, then $a \ge 0$.
>2. If $\:\exists \: c \in \mathbb{R} : c \le b_n \; \forall n$, then $c \le b$. Similarly, if $a_n \le c \; \forall \: n \in \mathbb{N}$, then $a \le c$.

Notice $a_n < b_n$ satisfies $a_n \le b_n$ condition of the theorem. 

