
>[!def|*]
>Consider the power series: $$\sum_{n=0}^\infty a_n(x-c)^n$$and define: $$R = \frac{1}{\limsup_{n \rightarrow \infty} \sqrt[n]{|a_n}|}$$Where $R$ is called the **Radius of Convergence**. Note a few cases:
> - We define $R =\frac{1}{0}$ to mean $R = \infty$.
> - We define $R = \frac{1}{\infty}$ to mean $R = 0$.
> 
>Then we have:
>1. $R = 0$: The power series converges only for $x = c$.
>2. $0 < R < \infty$: The power series converges pointwise for $x \in (c-R, c+R)$, it diverges for $x \in (-\infty,c-R) \cup (c+R, \infty)$ and it converges uniformly on $[c-r,c+r]$ $\forall r \in [0,R)$. 
>3. $R = \infty$: The power series converges pointwise on $\mathbb{R}$, and uniformly on any interval of finite length.

>[!theorem|1]
>A power series $\sum_{n=0}^\infty a_k(x-c)^k$ with radius of convergence $R > 0$ is continuous on $(c-R,c+R)$. 

>[!claim|*]- Proof of Theorem 1
>`\begin{proof}` 
>Let $x \in (c-R,c+R)$, $\exists \: r \in (0,R)$ so that $x \in [c-r,c+r]$. Define: $$S_n(x) = \sum_{n=0}^na_k(x-c)^k$$If you think of it, $S_n(x)$ is a polynomial, and we know (it is easy to prove) that polynomials are continuous. Thus $S_n(x)$ is continuous on all of $\mathbb{R}$, but more particularly, it is continuous on $[c-r,c+r]$. 
>Since $S_n(x)$ converges uniformly to $\sum_{k=0}^\infty a_k(x-c)^k$ on $[c-r,c+r]$, then $\sum_{k=0}^\infty a_k(x-c)^k$ is continuous on $[c-r,c+r]$ and in particular, it is continuous at $x$.
>`\end{proof}`

>[!exm|1]-
>Again, we consider: $$\sum_{n=1}^\infty \frac{x^n}{n}$$Then: $$\frac{1}{R} = \limsup_{n \rightarrow \infty} \sqrt[n]{|a_n|} = \limsup_{n \rightarrow\infty} \left(  \frac{1}{n} \right) ^\frac{1}{n}$$This is an annoying limit. To solve it, let us introduce a a little “aside”.
>
>**Lemma**:
>We have that: $$\lim_{n \rightarrow \infty} n^\frac{1}{n} = 1$$`\begin{proof}`  
>Define $x_n = n^\frac{1}{n}-1$. Clearly (check yourself) that $x_n \ge 0$. Thus: $$(x_n+1)^n = n$$By the [[Binomial Expansion Theorem]], we have: $$(x_n+1)^n = \sum_{k=0}^n \left( \begin{array}{ccc}  n\\k  \end{array} \right) x_n^k -1^{n-k}$$Hence: $$(x_n+1)^n \ge \left( \begin{array}{ccc}  n\\2  \end{array} \right) x_n^2 = \frac{n(n-1)}{2}x_n^2$$Rearranging: $$0 \le x_n^2 \le \frac{2}{n-1}$$By the [[Squeeze Theorem]], $\lim_{n \rightarrow \infty} x_n = 0$. We conclude $\lim_{n \rightarrow \infty} n^\frac{1}{n} = 1$. 
>`\end{proof}`
>
>With the lemma, we conclude: $$\limsup_{n \rightarrow \infty} \left( \frac{1}{n} \right)^\frac{1}{n} = 1 $$