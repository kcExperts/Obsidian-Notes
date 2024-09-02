The forward implication of the Cauchy criterion is straightforward, but the reverse implication is quite daring to do as in order to prove the sequence converges, we must know its limit. To do so, we will use the [[Bolzano-Weierstrass Theorem]]. As this theorem requires a bounded sequence, we show [[Cauchy Sequences]] are [[Bounds|Bounded]]. 

>[!lemma|*]- Cauchy Sequences are bounded
>`\begin{proof}` Given $\epsilon = 1, \exists \; N: |x_m-x_n| < 1 \; \; \forall \; m,n \ge N$. Since $n \ge N$, we must have $|x_n| \le |x_N| \implies |x_n| < |x_N| + \epsilon  \implies |x_n| < |x_N| + 1$. Thus:$$M = \text{max}\{|x_1|,|x_2|, \dots, |x_{N-1}|, |x_N| + 1\}$$is a bound for the sequence $x_n$.  
>
>(Note: $|x_n| \le |x_N|$ or else the difference between terms $x_m, x_n$ could be greater than $x_N$, thus an $\epsilon$ would exist such that $|x_m - x_n| \ge \epsilon$, which is not what we want).
> `\end{proof}`

>[!theorem|*] Cauchy Criterion
>A sequence $a_n$ is convergent $\iff a_n$ is Cauchy.
>>[!claim|*]- Proof
>>`\begin{proof}` We must prove both sides:
>>
>>$\implies$: Suppose $a_n \rightarrow a \implies \forall \; \epsilon > 0, \exists \; N \in \mathbb{N} : |a_n - a| < \frac{\epsilon}{2}\; \forall \; n \ge N$. Now consider $|a_n - a_m| : n,m \ge N$. By the [[Triangle Inequality]], we have: $$|a_n-a_m| = |(a_n -a)+(-a_m+a)| \le |a_n-a| + |a_m-a| < \frac{\epsilon}{2} + \frac{\epsilon}{2} = \epsilon$$Thus $|a_n - a_m| < \epsilon$ as desired.
>>
>>$\impliedby$: Suppose $a_n$ is a Cauchy, the the above lemma, $a_n$ is bounded. By the [[Bolzano-Weierstrass Theorem]], a convergent subsequence $a_{n_k}$ exists. Set: $$a = \lim\; x_{n_k}$$We must now show $a_n$ converges to this same limit (as shown in the [[Convergent Subsequences Theorem]]). Now, since $a_n$ is Cauchy, we have $\exists \;N: |a_m - a_n| < \frac{\epsilon}{2} \; \forall \; n,m \ge N$. Similarly, since $a_{n_k}$ converges, for some $n_k \ge N$, we have $|a_{n_k} - a| < \frac{\epsilon}{2}$. Consider $|a_n - a|$, by the [[Triangle Inequality]], we have: $$|a_n - a| = |a_n - a_{n_k} + a_{n_k} - a| \le |a_n - a_{n_k}|+|a_{n_k} - a| < \frac{\epsilon}{2} + \frac{\epsilon}{2} = \epsilon$$Thus $|a_n - a| < \epsilon$ as desired.
>>  `\end{proof}`


