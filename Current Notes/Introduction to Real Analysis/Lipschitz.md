See [[Smooth and Lipschitz Domains]]

>[!def|*] Lipschitz
>Let $A \subseteq R$ be an interval and $f: A \rightarrow \mathbb{R}$. $f$ is Lipschitz on $A$ if $\exists \: L > 0$ so that: $$|f(x) - f(y) \le L|x-y| \; \; \forall \:x,y \in A$$

>[!theorem|1]
>Suppose that $f: \mathbb{R} \rightarrow \mathbb{R}$ is Lipschitz, then $f$ is a [[Uniformly Continuous Function]] on $\mathbb{R}$.

>[!claim|*]- Proof of Theorem 1
>`\begin{proof}`
>Since $f$ is Lipschitz, we have: $$|f(x) - f(c)| \le L|x-c|$$Let $\delta = \epsilon/L$. Since $\epsilon > 0$, $\delta > 0$. Now suppose $|x-c| < \delta$. Thus: $$|f(x)-f(c)| = L|x-c| < L \frac{\epsilon}{L} = \epsilon$$Hence $\forall \: \epsilon > 0, \exists \: \delta >0 : x \in B_\delta (c) \implies f(x0 \in B_\epsilon (f(c)) \; \forall \: c \in A$.
>`\end{proof}`

>[!theorem|2]
>Suppose that $f :\mathbb{R} \rightarrow \mathbb{R}$ is Lipschitz. Let $x_0 \in \mathbb{R}$ and define $x_{n+1} = f(x_n)$ for each $n \in \mathbb{N}$. Then:
>1. If $L<1$, then $x_n$ converges.
>2. If $\lim_{n \rightarrow \infty} x_n = x$, then $f(x) = x$.

>[!exm|1]- Showing Lipschitz
>We show that $f(x) = x^2$ is Lipschitz on $[-1,1]$. 
>
>`\begin{proof}`
>For any $x,y \in [-1,1]$, $\exists \: z$ between $x \; \land \; y$. For simplicity, assume $x < y$. Then: $$\frac{f(y)-f(x)}{y-x} = f'(z)$$Which holds by the mean value theorem. Now let: $$L = \text{sup}\{|f'(z)|: z \in [0,1]\}$$Then: $$\left| \frac{f(x)-f(y)}{x-y} \right|  \le L \; \; \text{for any}\; x,y \in [0,1] $$Thus: $$|f(x)-f(y)| \le 2|x-y|$$Since $f’(z) = 2z$. 
>>`\end{proof}`

>[!exm|2]- Showing Not Lipschitz
>We claim that $f(x) = \sqrt x$ is not Lipschitz on $[0,1]$. 
>
>`\begin{proof}` By Contradiction
>Assume $\sqrt x$ is Lipschitz on $[0,1]$, then: $$|\sqrt x - \sqrt y| \le L |x-y| \; \; \text{for some} \; L > 0$$(The problem will come when $x = 0$). Let $x = 0$, then: $$|\sqrt y| \le L|y| \; \; \forall \: y \in [0,1]$$Clearly $y = 0 \; \land \; y =1$ causes no problem. In particular, if $y \in (0,1]$, then: $$\frac{\sqrt y}{y} \le L \implies \frac{1}{\sqrt y} \le L$$If $L \ge 1$, let $y = \frac{1}{4L^2} \in (0,1]$ and then we get: $$\frac{1}{\sqrt{\frac{1}{4L^2}}} = 2L \not\le L$$This contradicts $L>0$. Now if $L < 1$, take $y = 1$.  Then $1 \le L < 1$ which is a contradiction as well.
>
>Then it is not Lipschitz continuous. 
>`\end{proof}`

>[!theorem|3] Rademacher
>Let $u$ be a Lipschitz function in $A \subseteq \mathbb{R}^n$. Then $u$ is differentiable at every point of $A$, except at set points of Lebesque measure zero. 

