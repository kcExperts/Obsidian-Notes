
>[!theorem|*] Comparison Test
>Let $a_k \; \land \; b_k$ be [[Sequences]] with $0 \le a_k \le b_k \; \forall \; k \in \mathbb{N}$. Then:
>- $\sum_{k=1}^\infty b_k$ converges $\implies$ $\sum_{k=1}^\infty a_k$ converges.
>- $\sum_{k=1}^\infty a_k$ diverges $\implies$ $\sum_{k=1}^\infty b_k$ diverges.
>- If $a_k>0 \; \land \; b_k > 0 \; \forall \; k \in \mathbb{N}$: $\frac{a_k}{b_k} = L$. 
>	- If $L \in (0, \infty)$, then $\sum_{k=0}^\infty a_k$ converges $\iff$ $\sum_{k=1}^\infty b_k$ converges.
>	- If $L = 0$, then $\sum_{k=1}^\infty b_k$ converges $\implies$ $\sum_{k=1}^\infty a_k$ converges.
>	- If $L = \infty$, then $\sum_{k=1}^\infty b_k$ diverges $\implies$ $\sum_{k=1}^\infty a_k$ diverges.

>[!exm]- Showing $\sum_{k=1}^\infty \frac{1}{\sqrt k}$ diverges
>Recall the harmonic series. Since $k \ge \sqrt k \;\; \forall \; k \in \mathbb{N}$, we have $\frac{1}{k} \le \frac{1}{\sqrt k}$. We conclude $\sum_{k=1}^\infty \frac{1}{\sqrt k}$ diverges.

>[!exm]- Showing $\sum_{k=1}^\infty \frac{1}{2k+1}$ diverges
>We will again compare with the harmonic series. But since $2k+1 \ge k$, we cannot use the same comparison test. Instead, consider: $$2k+1 \le 2k+2 = 2(k+1)$$Since $\sum_{k=1}^\infty \frac{1}{2(k+1)} = \frac{1}{2} \sum_{k=1}^\infty \frac{1}{k+1}$ diverges, then the original series diverges.

>[!exm]- Showing $\sum_{k=1}^\infty \frac{3}{2k^2-\sqrt k}$ converges
>We will compare it with $\sum_{k=1}^\infty \frac{1}{k^2}$ which we know converges from the previous example. Now: $$\lim_{k \rightarrow \infty}(\frac{3}{2k^2-\sqrt k})(\frac{1}{k^2})^{-1} = \lim_{k \rightarrow \infty}( \frac{3k^2}{2k^2-sqrt k}) = \frac{3}{2}$$Since the limit is finite, our series converges.
