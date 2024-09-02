---
aliases:
  - Converging Sequence
---
Converging [[Sequences]] are sequences that as $n \rightarrow \infty$, $a_n$ becomes arbitrarily close to a value $L$. We call this value the [[Limits|Limit]] of $a_n$. 

>[!def|*] Converging Sequences
>$$a_n \rightarrow L \iff \forall \; \epsilon > 0, \; \exists \; N \in \mathbb{N} : |a_n - L| < \epsilon \; \; \forall \; n \ge N$$

>[!rmk|*]
>We note that every converging sequence is a [[Bounds of a Sequence|Bounded Sequence]]. 

In loose terms, the above definition states that $a_n$ having some limit $L$ means that the difference $a_n - L$ becomes arbitrarily small after taking a large enough $n$. If $a_n \rightarrow L$, we write $\lim_{n \rightarrow \infty} a_n = L$ and we say $a_n$ is convergent. Otherwise, we say $a_n$ is divergent. 
The [[Algebraic Limit Theorem]] offers insight into operations that can be done using two converging subsequences. 

>[!example|*]
>Show that $a_n = \{ \frac{n}{n+1} : \; n \in \mathbb{N}\} \implies a_n \rightarrow 1$.
>>[!claim|*]- Proof
>>`\begin{proof}` We need to show: $$\forall \epsilon > 0, \; \exists \; N \in \mathbb{N} : |a_n - 1| < \epsilon \; \forall \; n \ge N$$To do so, we need to find a value of $N$. To do so, we work backwards:$$|a_n - 1| = |\frac{n}{n+1}-1| = |-1||1-\frac{n}{n+1}| = 1-\frac{n}{n+1} = \frac{1}{n+1} < \epsilon$$ Where the $3^{rd} \; \land \; 4^{th}$ and fourth step are possible as $\frac{n}{n+1} < 1 \; \land \; |-1| = 1$. Rearranging for $\epsilon$ produces $\frac{1}{\epsilon}-1 < n$. Then we can take $N > \frac{1}{\epsilon}-1$.
>>We can now proceed with the actual proof.
>> 
>>Let $|a_n - 1| < \epsilon \; \land \; N > \frac{1}{\epsilon}-1$. Then:$$|a_n -1|=|\frac{n}{n+1}-1|=\frac{1}{n+1} \le \frac{1}{N+1} < \frac{1}{(\frac{1}{\epsilon}-1)+1} < \frac{1}{\frac{1}{\epsilon}} < \epsilon$$ Thus we have shown $|a_n - 1| < \epsilon$ as desired. We conclude $a_n \rightarrow 1$.
>> `\end{proof}`
