We can probably deduce that if a sequence is [[Monotone, Nondecreasing and Nonincreasing|Monotone]] and is a [[Bounds of a Sequence|Bounded Sequence]], then it must converge to some number.

>[!definition|*] Monotone Convergence Theorem
>Let $a_n$ be a bounded monotone sequence $\implies$ $a_n$ converges.
>If $a_n$ is [[Monotone, Nondecreasing and Nonincreasing|Nondecreasing]] $\implies$ $\lim_{n \rightarrow \infty} a_n = \text{sup}(\text{range}(a_n))$
>If $a_n$ is [[Monotone, Nondecreasing and Nonincreasing|Nonincreasing]] $\implies$ $\lim_{n \rightarrow \infty} a_n = \text{inf}(\text{range}(a_n))$
>>[!claim]- Proof
>>`\begin{proof}` We only prove the [[Supremum]] case.
>>Assume $a_n$ is non-decreasing (if not, consider $b_n = -a_n$). Let $s = \text{sup}(\text{range}(a_n))$, we will show that this is the [[Limits|Limit]] of the sequence. We can say that $s$ exists as $a_n$ is bounded. 
>>By definition of the supremum, $\forall \; \epsilon > 0, s- \epsilon$ is not an upper bound of $\text{range}(a_n)$. In other terms: $$\forall \; \epsilon > 0, \exists \; N \in \mathbb{N}: s- \epsilon < a_n \;\;\forall \; n \ge N \implies s- \epsilon<a_n \le s< s+\epsilon$$This is equivalent to saying $|a_N-S| < \epsilon$. Since $a_n$ is non decreasing, $a_{n+1} \ge a_n \; \forall \; n \in \mathbb{N}$ $\implies a_n \ge a_N$ if $n \ge N$. Thus $|a_n-s| < \epsilon \; \\forall \; n \ge N$. Which is what we were after.
>> `\end{proof}`



