
>[!theorem] 
>Let $a_k$ be a sequence of positive terms: $$\sum_{k=1}^\infty a_k \; \text{converges} \iff S_n \; \text{is bounded}$$This is a quiz problem. Use the [[Convergent Subsequences Theorem]] and the [[Monotone Convergence Theorem]]. 

>[!theorem]
>$$\sum_{k=1}^\infty a_k \; \text{converges} \implies a_k \rightarrow 0$$
>>[!claim|*]- Proof
>>`\begin{proof}` $\exists \; L \in \mathbb{R}: \; \forall \; \epsilon > 0, \; \exists \; N \in \mathbb{N}: \; |L-S_n| < \frac{\epsilon}{2} \; \forall \; n \ge N$.
>>Then $|a_{n+1}| = |S_{n+1} - S_{n}|$. As we know it converges, we have: $$=|S_{n+1}-S_n + L - L| \le |s_{n+1}-L| + |S_n - L| < \epsilon$$Which holds by the [[Triangle Inequality]].   
>> `\end{proof}`

>[!corollary|*] Divergence Criterion
>If $a_k$ does not converge to $0$, then $\sum_{k=1}^\infty a_k$ diverges. 

