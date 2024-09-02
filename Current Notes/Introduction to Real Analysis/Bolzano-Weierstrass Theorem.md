For [[Bounds|Bounded]] sequences, it turns out that it is always possible to find a converging subsequence.

>[!theorem|*] Bolzano-Weierstrass
>If $a_n$ is bounded $\implies$ it has a convergent subsequence.
>>[!claim|*]- Proof
>>`\begin{proof}` We go about proving this directly.
>>Since $a_n$ is bounded, $\exists \; M > 0: |a_n| \le M \; \; \forall \; n \in N$. Now bisect the closed interval $[-M, M]$ into $[-M,0] \; \land \; [0,M]$. At least one of these intervals must have an infinite amount of terms of $a_n$.
>>Select the interval for which this is true and label it $I_1$. Now let $a_{n_1}$ be a term in $a_n$ satisfying $a_{n_1} \in I_1$. We then bisect $I_1$ into closed intervals of equal lengths, and let $I_2$ be the half that contains infinite terms. As we have an infinite number of terms, $\exists \; a_{n_2}: n_2 > n_1 \; \land \; a_{n_2} \in I_2$.  
>>![[Pasted image 20240214101159.png]]
>>We continue this process for $I_k$ by bisecting $I_{k-1}$ and choosing the interval with infinite terms. Thus $n_k > n_{k-1} > \dots > n_2 > n_1: a_{n_k} \in I_k$. We have now constructed a sequence, we now need to show that it is a [[Converging Sequences|Converging Sequence]]. We note: $$I_1 \supseteq I_2 \supseteq \dots \supseteq I_{k-1} \supset I_k$$Form a set of nested intervals. By the [[Nested Interval Property]], $\exists \; x \in \mathbb{R}$ contained in every $I_k$. All we need to show is that $a_{n_k} \rightarrow x$.
>>Let $\epsilon > 0$. By construction, the length of $I_k$ is $M(\frac{1}{2})^{k-1}$. This converges to $0$ (which follows directly from the example in [[Convergent Subsequences Theorem]]). Choose $N : k \ge N \implies$ the length of $I_k < \epsilon$. As $a_{n_k} \; \land \; x$ are both in $I_k$, it follows that $|a_{n_k} - x| < \epsilon$.
>>
>>(Note: $I_k < \epsilon$ as the length $I_k$ converges to 0. Thus $|I_k - 0| < \epsilon \; \; \forall \; k \ge N$. Simplifying nets us $|I_k| < \epsilon \implies I_k < \epsilon$).
>> `\end{proof}`

