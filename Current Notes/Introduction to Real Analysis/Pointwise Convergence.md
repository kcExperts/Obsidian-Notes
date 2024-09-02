
>[!rmk|*]- Sequences of Functions
>A sequence of functions, denoted $f_n(x)$ is essentially what you expect it to be.

#### Motivation
>[!exm|1]
>Consider $f_n(x) = x^n \; \; \forall n \in \mathbb{N}_+: x \in [0,1]$. What is: $$\lim_{n \rightarrow \infty} f_n(x)$$What does that even mean?
>

With this, we raise a few questions (assuming you are familiar with calculus):
1. Is the limit continuous?
2. If $1$ is true, then is the limit differentiable?
3. And if $2$ is true is: $$\lim_{n \rightarrow \infty} \frac{\text{d}f_n}{\text{dx}} =? \frac{\text{d}f}{\text{dx}}$$
4. Also does: $$\lim_{n \rightarrow\infty} \int f_n(x) dx =? \int \lim_{n \rightarrow \infty} f_n(x) dx$$
As always, the best way to answer these questions is to start with a definition.

#### Body

>[!def|*] Pointwise Convergence
>Let $A \subseteq \mathbb{R}$ and $f_n$ be a sequence of functions on $A$. 
>1. The sequence converges pointwise if the sequence $f_n(x)$ converges for each $x \in A$.
>2. The series of functions: $$\sum^\infty_{n=1} f_n \; \text{converges pointwise if} \; \sum_{n=0}^\infty f_n(x) \; \text{converges} \; \forall x \in A$$

>[!def|*] Limiting Function
>We define $f: A \rightarrow \mathbb{R}$ by: $$f(x) = \lim_{n \rightarrow \infty} f_n(x)$$to be the limiting function $f$.

>[!proposition|1] What it means to converge Pointwise
>$f_n$ converges pointwise to $f$ $\iff$ $\forall \: \epsilon > 0$ and each $x \in A$, $\exists \: N \in \mathbb{N}$ so that $|f_n(x) - f(x)| < \epsilon \; \; \forall \: n \ge N$.
>
>Note: $N$ might (probably will) depend on $n$ and $x$.

>[!rmk|*]- Reapproaching Example 1 
>Consider $f_n(x) = x^n$ for $n \in \mathbb{N}_+$ and $x \in [0,1]$. Visually:
>![[Pasted image 20240318155207.png]]
>Where red is $x$, blue is $x^2$ and green is $x^3$. You can notice as we will increase the exponent term, the value between $0$ and $1$ get closer to the $x$-axis. Now show that $f_n \rightarrow f$ pointwise where: $$f(x) = \begin{cases} 0 & 0 \le x < 1\\ 1 & x = 1\end{cases}$$
>**Roughwork**:
>If $x \in (0,1)$, then $f_n(x) = x^n$ and: $$|f_n(x) - f(x)| = |x^n| = x^n$$We need $x^n < \epsilon$. In other words: $n log(x) < log(\epsilon)$. Hence: $$n > \frac{log(\epsilon)}{log(x)}$$Then all we need to so is take $N = n$ (defined right above us). With that: $$|f_n(x) - f(x)| = |x^n| = x^n \le x^N < x^{\frac{log(\epsilon)}{log(x)}} = x^{log_x(\epsilon)} = \epsilon$$
>
>With this, you can see that $\epsilon$ depends on $x$.
>
>If $x = 0$, then $f_n(x) = 0^n = 0$ thus $|f_n(x) - f(x)| = 0 < \epsilon$.
>If $x = 1$, then $|f_n(x) - f(x)| = |1^n - 1| = 0 < \epsilon$. 

>[!exm|1]- Showing Pointwise Convergence
>Let: $$f_n(x) = \sum_{k = 0}^n \frac{x^2}{(1+x^2)^k}$$for $x \in \mathbb{R}$ and $n \in \mathbb{N}_+$. We claim that $f_n(x)$ converges pointwise to: $$f(x) = \begin{cases} 0 & x=0\\ 1+x^2 & x \ne 0 \end{cases}$$
>**Roughwork**: 
>For $x = 0$, $f_n(0) \rightarrow 0 \; \land \; f(x) = 0 \implies |f_n(x) - f(x)| = 0 < \epsilon$. 
>Now suppose $x \ne 0$, notice: $$f_n(x) = x^2 \sum_{k=1}^n \left(  \frac{1}{1+x^2} \right) ^k$$Clearly $r = \left(  \frac{1}{1+x^2} \right)  < 1$. Then we have a [[Geometric Series]]. It is equal to: $$\frac{1}{1-r} = \left( \frac{1}{1-\frac{1}{1+x^2}} \right) = \left(  \frac{1+x^2}{x^2} \right)$$Thus: $$\lim_{n \rightarrow \infty} x^2 \sum_{k=0}^n \frac{1}{(1+x^2)^k} =\bcancel{x^2} \left(  \frac{1+x^2}{\bcancel{x^2}}\right)  = 1+x^2$$

>[!exm|2]- More Complex
>Consider: $$f_n(x) = \begin{cases} 2nx & 0 \le x \le \frac{1}{2n} \\ 2-2nx & \frac{1}{2n}<x<\frac{1}{n} \\ 0 & \frac{1}{n} < x \le 1\end{cases}$$
>Which in essence looks like
>![[Pasted image 20240320143331.png]]
>Ignore the triangle that ends at $x = 2$. Our interval is only $[0,1]$.
>
>But now suppose I add: $$f_n(x) = \begin{cases} (2nx)n & 0 \le x \le \frac{1}{2n} \\ (2-2nx)n & \frac{1}{2n}<x<\frac{1}{n} \\ 0 & \frac{1}{n} < x \le 1\end{cases}$$Which actually looks like the Dirac-delta function if $n = \infty$.
>![[Pasted image 20240320143947.png]]
>
>We claim both $f_n(x) \rightarrow 0$ pointwise as $n \rightarrow \infty$.
>
>`\begin{proof}` 
>If $x = 0$, then $f_n(x) = 0 \; \forall n \in \mathbb{N}$. Thus: $\lim_{n \rightarrow \infty} f_n(0) = 0$.
>Now let $x > 0 \; \land \; \epsilon > 0$. We need to find $N$ so that: $$|f_n(x) - f(x)| < \epsilon \; \; \forall n \ge N$$By the [[Archimedean Property]], $\exists N \in \mathbb{N} : \frac{1}{N} < x$ so that $f_N(x) = 0$. Thus, for all $n \ge N$, we have $|f_n(x) - 0| = 0 < \epsilon$. Therefore $f_n(x) \rightarrow 0$ pointwise on $[0,1]$. 
> `\end{proof}`
