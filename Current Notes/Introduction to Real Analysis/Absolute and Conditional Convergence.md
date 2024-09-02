
>[!def|*] Absolute Convergence
>A series $\sum_{k=1}^\infty a_k$ converges absolutely if $\sum_{k=1}^\infty |a_k|$ converges.

>[!def|*] Conditional Convergence
>A series converges conditionally if it does not converge absolutely.

>[!theorem|*]
>$\sum_{k=1}^\infty |a_k|$ converges $\implies$ $\sum_{k=1}^\infty a_k$ converges.
>>[!claim|*]- Proof
>>`\begin{proof}` Let $s_n = \sum_{k=1}^\infty a_k \; \land \; T_n = \sum_{k=1}^\infty |a_k|$. Since $T_n$ converges, it is Cauchy, and thus $\forall \; \epsilon >0, \; \exists \;N : |T_m-T_n| = \sum_{k=n+1}^\infty |a_k| < \epsilon$ if $m >n$. 
>>$\therefore$, for $m>n \ge N$, we have, by the [[Triangle Inequality]]: $$|S_n-S_m| = |\sum_{k=1}^\infty a_k| \le \sum_{k=1}^\infty |a_k| = |T_n - T_m| < \epsilon$$
>> `\end{proof}