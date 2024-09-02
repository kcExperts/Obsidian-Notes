Similar to the [[Cauchy Criterion]] for sequences, we have one that extends to series.

>[!theorem|*] Cauchy Criterion for Series
>$\sum_{k=1}^\infty a_k$ converges $\iff$ $\forall \; \epsilon > 0, \; \exists \; N: | \sum_{k=n+1}^m a_k| < \epsilon$ whenever $m>n \ge N$.
>>[!claim|*]- Proof
>>`\begin{proof}` $\sum_{k=1}^\infty a_k$ converges $\iff$ $S_n$ converges.
>>Recall $S_n$ converges $\iff$ $S_n$ is Cauchy.
>>Recall $S_n$ is Cauchy $\iff$ $\forall \; \epsilon > 0, \exists \; N: |S_n - S_m| = |a_{n+1} + a_{n+2} + \dots + a_m| < \epsilon$ whenever $m>n \ge N$.
>> `\end{proof}`

