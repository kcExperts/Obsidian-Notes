---
aliases:
  - M-test
---

>[!def|*] Weierstrass M-test (Series of Functions)
>Suppose $f_n(x)$ is a sequence of functions on $I \subseteq \mathbb{R}$ and assume $\exists$ a sequence of real numbers $M_n$ such that:
>1. $|f_n(x)| \le M_n \; \; \forall \: x \in I \; \land \; \forall \: n \in \mathbb{N}$.
>2. $\sum_{n = 0}^\infty M_n$ converges.
>
>Then: $$\sum_{n=0}^\infty f_n(x) \; \text{converges uniformly on I}$$
>(Proof is left as a quiz problem, which is probably not trivial)

>[!exm|1]
>Consider: $$f_n(x) = n^2e^{-nx} \; \; I = [1, \infty)$$Prove that $\sum_{n=0}^\infty f_n(x)$ converges uniformly on $I$.
>
>`\begin{proof}` 
>Now we want to find a bound for: $$|f_n(x)|=|n^2e^{-nx}| = n^2e^{-nx}$$which holds $\forall \: x \in I$. Now clearly: $$n^2e^{-nx} \le n^2 e^{-n}$$as at $x=1$, it will be at its highest (the graph is an exponential decay). Now choose $$M_n = n^2e^{-n}$$Now we verify if $\sum_{n=0}^\infty M_n$ converges. To do so, we use the [[Ratio Test]]: $$\left|\frac{M_{n+1}}{M_n} \right| = \frac{(n+1)^2e^{-(n+1)}}{n^2e^{-n}} = \left(  \frac{n+1}{n} \right)^2e^{-1} \rightarrow e^{-1} $$Clearly $e^-1 < 1$, hence we conclude $\sum_{n=0}^\infty M_n$ converges uniformly. 
>
>With this, we conclude: $$\sum_{n=0}^\infty f_n(x) \; \text{converges uniformly by the M-test}$$
> `\end{proof}`

