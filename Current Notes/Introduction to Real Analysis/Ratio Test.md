A main weakness of the [[Comparison Test]] is that we need another series to compare our original series to. We now show a method to test convergence using only the given series.

>[!theorem|*] Ratio Test
>Let $a_n$ be a sequence satisfying:
>- $\exists \; K \in \mathbb{N} : a_k \ne 0 \; \; \forall \; k \ge K$
>- $\lim_{k \rightarrow \infty} |\frac{a_{k+1}}{a_k}| = L \in \mathbb{R}$
>
>Then we have:
>- If $L < 1 \implies \sum_{k=1}^\infty a_k$ converges
>- If $L > 1 \implies \sum_{k=1}^\infty a_k$ diverges. 
>- If $L = 1 \implies$ nothing can be said.
>
>Proof is left as a quiz problem (as always).

>[!exm]
>Consider $\sum_{k=1}^\infty (\frac{k^k}{k!})$. Then: $$\lim_{k \rightarrow \infty} |\frac{a_{k+1}}{a_k}| = \lim_{k \rightarrow \infty} |\frac{k!(k+1)^{k+1}}{k^k(k+1)!}|=\lim_{k \rightarrow \infty} \frac{(k+1)^k}{k^k}$$
>$$= \lim_{k \rightarrow \infty} (\frac{k}{k}+\frac{1}{k})^k = \lim_{k \rightarrow \infty} (1 + \frac{1}{k})^k = e > 1$$
>Thus our series diverges.




