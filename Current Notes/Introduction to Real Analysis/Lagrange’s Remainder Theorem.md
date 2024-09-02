
>[!theorem|*] Lagrange’s Remainder Theorem
>Let $\mathcal I \subseteq A$, fix $x,c \in \mathcal I$ and $n \in \mathbb{N}$. Then $\exists \: z$ between $x$ and $c$ so that: $$E_n(x;c) = \frac{f^{n+1}(z)}{(n+1)!}(x-c)^{n+1}$$

We shall prove this by introducing a lemma:

>[!lemma|1] Generalization of the Mean Value Theorem
>Let $f,g$ be continuous functions on $\mathcal I = [a,b]$ and differentiable on $(a,b)$. Then $\exists \: c \in (a,b): (f(b) - f(a))g’(c) = (g(b)-(g(a))f’(c)$.

>[!claim|*]- Proof of Lemma 1
>`\begin{proof}`  
>Let $h(x) = (f(b) - f(a))g(x) - (g(b) - g(a))f(x)$. Note: $$\begin{array}{ccc}  h(a) = (f(b) - f(a))g(a) - (g(b)-g(a))f(a) = f(b)g(a) - f(a)g(b) \\ h(b) = (f(b) - f(a))g(b) - (g(b)-g(a))f(b) = f(b)g(a)-f(a)g(b) \end{array}$$Thus $h(a) = h(b)$. By Rolle’s Theorem, $\exists \: c \in (a,b)$ so that $h'(c) = 0$. Then: $$0 = (f(b)-f(a))g'(c) - (g(b)-g(a))f'(c)$$Rearranging gives the desired result.
>`\end{proof}`

>[!claim|*]- Proof of Lagrange’s Remainder Theorem
>Note that this proof relies on some ideas that we haven’t seen.
>`\begin{proof}`  
>Define $E_n(x;c) = f(x) - S_n(x;c)$ and note that $E_n(c;c) = f(c) - S_n(c;c) = 0$. We also have that: $$\frac{\partial^k}{\partial x^k}(x;c) \big|_{x=c} = f^k(c) - \frac{\partial^k}{\partial x^k}S_n(x;c)\big|_{x=c}$$which holds $\forall \: k \in \{0,1, \dots, n\}$. Let us assume $(x>c)$. Then applying Lemma $1$ to $E_n(x;c)$ and $(x-c)^{n+1}$, we have that $\exists \: z_0 \in (c,x)$ so that: $$(E_n(x;c) - E_n(c;c)) \big( (n+1)(z_0 - c)^n \big) = \big( (x-c)^{n+1} - (c-c)^{n+1} \big)E_n'(z_0;c)$$Then (after some cancellations are rearranging): $$\frac{E_n(x;c)}{(x-c)^{n+1}} = \frac{E_n'(z_0;c)}{(n+1)(z_0-c)^n}$$Applying (again) Lemma $1$ to $E’_n(z;c)$ and $(z-c)^n$ on the interval $(c,z_0)$. Then:
>There exists $z_1 \in (c,z_0)$ so that: $$\frac{E'_n(z_0;c)}{(z_0-c)^n} = \frac{E_n''(z_1;c)}{n(z_1-c)^{n-1}}$$Doing this $n+1$ times nets us: $$\frac{E_n(x;c)}{(x-c)^{n+1}}= \frac{E_n^{n+1} (z_n;c)}{(n+1)!}$$
>Notice: $$E_n^{n+1}(x;c) = f^{n+1}(x) - \frac{d^{n+1}}{dx^{n+1}}S_n(x) = f^{n+1}(x)$$Which holds since $\frac{d^{n+1}}{dx^{n+1}}S_n(x) = 0$ (Series only has $n$ terms). Then: $$E_n(x;c) = \frac{f^{n+1}(z_n)}{(n+1)!}(x-c)^{n+1}$$Where $z_n$ depends on $c,x$ and $m$.
>`\end{proof}`

>[!exm|1]- Show $e^x$ is real analytic on $\mathbb{R}$.
>**Solution**:
>Let $c \in \mathbb{R}$. Then the Taylor series of $c$ is: $$\sum_{k=0}^\infty \frac{e^c}{k!}(x-c)^k$$Now we need only show that this has a positive [[Radius of Convergence]]. Clearly: $$R = \frac{1}{\limsup_{n \rightarrow \infty} \left|\frac{e^c}{k!} \right|^\frac{1}{n}  } = \infty \; \; \text{(exercise for the reader)}$$
>Let $x \in \mathbb{R}$, then $x \in (c-R,c+R)$ and: $$|E_n(x;c)| = \frac{e^z|x-c|^{n+1}}{(n+1)!}$$For some $z$ between $c$ and $x$. Let: $$M = \text{sup}\left\{ e^z : z \; \text{is between c and x} \right\}$$Then $M$ does not depend on $n$. What do we get out of this? We get: $$|E_n(x;c)| = \frac{e^z|x-c|^{n+1}}{(n+1)!} \le \frac{M|x-c|^{n+1}}{(n+1)!} \rightarrow 0$$Hence by the [[Squeeze Theorem]], $|E_n(x;c)| \rightarrow 0$. 
>We conclude that $e^z$ is real analytic.

>[!exm|2]
>Consider: $$f(x) =  \begin{cases}  0& x \le 0\\ e^\frac{-1}{x} & x > 0 \end{cases}$$Whose graph resembles:
>![[Pasted image 20240403143347.png]]
>
>We claim $f(x)$ is $C^\infty ( \mathbb{R})$ but that it is not Real Analytic.

>[!claim|*]- Proof of Example 2
>`\begin{proof}`
>We need to show that the Taylor Series of $f(x)$ centered at $0$ is not equal to $f(x)$. Now:$$f'(x) = \frac{1}{x^2}e^{-\frac{1}{x}}$$Inductively, we can show that: $$f^k(x) = P_k(\frac{1}{x})e^{-\frac{1}{x}}$$Where $P_k(\frac{1}{x})$ is a polynomial in $\frac{1}{x}$ and $\therefore$ continuous for $x > 0$. In order to calculate the Taylor Polynomial, we first note that $f(0) = 0$. We need to take the limit from both directions to find $f'(0)$ (if they do not match up the derivative does not exist):$$\text{Right}: \; \; \lim_{h \rightarrow 0^+} \frac{f(h)-f(0)}{h} = \lim_{h \rightarrow 0^+} \frac{e^{-\frac{1}{h}}}{h} \; \; \text{let} \; x = \frac{1}{h} \implies \lim_{x \rightarrow \infty} xe^{-x} = 0$$Which holds by hospital’s rule. Now: $$\text{Left}: \; \; \text{I am not going to even bother writing it, it's} \; 0$$If $f^k(0) = 0$, then the left side is **clearly** $0$. Now for the right side: $$\lim_{h \rightarrow 0^+} \frac{f^k(h)-f^k(0)}{h} = \lim_{h \rightarrow 0^+} \frac{P_k(\frac{1}{h})e^{-\frac{1}{h}}}{h} \implies \lim_{x \rightarrow \infty} P_k(x)xe^{-x} = 0 \; \; \text{by letting} \; x = \frac{1}{h}$$The Taylor series of $f(x)$ at $0$ is given by: $$\sum_{k=0}^\infty \frac{f^k(0)}{k!}x^k=0 \ne f(x) \; \; \text{when} \; x>0$$Which holds since every derivative at $0$ is $0$. 
>As an exercise, you can calculate the radius of convergence to be $+\infty$.
>`\end{proof}`

The moral of the story: Not every $C^\infty$ function is real analytic. 