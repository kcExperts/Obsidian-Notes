
>[!lemma|1]- 
>The following three power series have the same [[Radius of Convergence]] $R$.
>1. $\sum_{k=0}^\infty a_k(x-c)^k$
>2. $\sum_{k=1}^\infty k a_k (x-c)^{k-1} \; \; \;$ (Which looks like the derivative)
>3. $\sum_{k=0}^\infty \frac{a_k}{k+1} (x-c)^{k+1} \; \; \;$ (Which looks like the integral)

>[!claim|*]- Proof of Lemma 1
>`\begin{proof}`  
>Let $R_1 = \frac{1}{\limsup_{n \rightarrow \infty} \sqrt[n]{|a_n|}}$ so that $R_1$ is the radius of convergence for $(1)$. Let us now show that $R_1 = R_2 = R_3$. Where $R_2$ is the radius of convergence for $(2)$ and $R_3$ is the radius of convergence for $(3)$.
>
>**(2)**: 
>Note that: $$\sum_{k=1}^\infty k a_k(x-c)^{k-1} = \sum_{k=0}^\infty (k+1)a_{k+1}(x-c)^k$$Anyhow, the coefficient for the $k^{th}$ powered term of series $(2)$ is $(k+1)a_{k+1}$. Now we need to find: $$\limsup_{k \rightarrow \infty} \sqrt[k]{|{(k+1)a_{k+1}}|} = \limsup_{k \rightarrow \infty} \sqrt[k] {(|k+1|)} \cdot \sqrt[k]{|a_{k+1}|}$$Where $\limsup_{k \rightarrow \infty} \sqrt[k]{|(k+1)|} = 1$ by a lemma in lecture 32. We only need to find $\limsup_k \rightarrow \infty \sqrt[k]{|a_{k+1}|}$. Note that if $|a_{k+1}| \ne 0$, then: $$|a_{k+1}|^\frac{1}{k} = e^{(\ln(|a_{k+1}|^\frac{1}{k}))} = \exp(\ln(|a_{k+1}|^{\frac{k+1}{k} \cdot \frac{k}{k+1}})) = \exp(\frac{k+1}{k} \ln (|a_{k+1}|^\frac{1}{k+1}))$$
>Since $\exp(x)$ is continuous $\forall \:x \in R$, and $\ln(x)$ is continuous $\forall \: x > 0$, we get: $$\limsup_{k \rightarrow \infty} |a_{k+1}|^\frac{1}{k} = \exp(\limsup_{k \rightarrow \infty}(\frac{k+1}{k} \ln(|a_{k+1}|^\frac{1}{k})) = \exp(1 \cdot \ln(\frac{1}{R_1})$$
>And therefore: $$R_2 = \frac{1}{\limsup_{k \rightarrow \infty} |a_{k+1}|^\frac{1}{k}(k+1)^\frac{1}{k}} = R_1$$
>**(3)**
>Similar to **(2)**
>
>Note: There is a slight problem if $a_k = 0$ but that can be solved by different means.
>`\end{proof}`

>[!def|*] Integration and Differentiation
>Suppose $\sum_{k=0}^\infty a_k (x-c)^k$ has [[Radius of Convergence]] $R > 0$. Then:
>1. $\frac{d}{dx} \sum_{k=0}^\infty a_k (x-c)^k = \sum_{k=1}^\infty ka_k (c-x)^{k-1}$
>2. $\int_c^x \sum_{k=0}^\infty a_k (x-c)^k \; dx = \sum_{k=0}^\infty \frac{a_k}{k+1} (x-c)^{k+1}$

>[!claim|*]- Proof of the above Definition
>`\begin{proof}`
>We will prove them out of order. The easiest to show is $(2)$.
>
>$(2)$:
>Let: $$S_n(x) = \sum_{k=0}^\infty a_k(x-c)^k$$And let $x \in (c-R,c+R)$. $\exists \: r \in (0,R): x \in [c-r,c+r]$. Then: $$S_n \rightarrow \sum_{k=0}^\infty a_k(x-c)^k \; \text{uniformly on} \; [c-r,c+r]$$Then: $$\int_c^x \sum_{k=0}^\infty a_k(t-c)^k \; dt = \int_c^x \lim_{n \rightarrow \infty} S_n(t) \: dt = \lim_{n \rightarrow \infty} \int_c^x \sum_{k=0}^n a_k(t-c)^k \; dt$$
>Which we can then integrate term by term since it is a polynomial, hence: $$= \lim_{n \rightarrow \infty} \sum_{k=0}^n \frac{a_k}{k+1}(x-c)^{k+1} = \sum_{k=0}^\infty \frac{a_k}{k+1}(x-c)^{k+1}$$
>Which is what we wanted.
>
>**(1)**:
>Define: $$g(x) = \sum_{k=1}^\infty k a_k (x-c)^{k-1}$$Notice that: $$\frac{d}{dx} S_n(x) = \sum_{k=1}^n k a_k(x-c)^{k-1}$$And $\therefore$ $\frac{d}{dx} S_n(x)$ converges uniformly to $g(x)$ on $[c-r, c+r]$. (Notice that we are building up to using Theorem 1 in Lecture 31). 
>Notice that $S_n(0) = 0 \; \forall n$, so: $$\lim_{n \rightarrow \infty} S_n(c) = 0$$and thus by Theorem 1 in Lecture 31, we have: $$\frac{d}{dx} \sum_{k=0}^\infty a_k(x-c)^k = g(x)$$And we are done!
>`\end{proof}`

>[!rmk|1]- Theorem 1 of Lecture 31 
>Let $A = [a,b]$ and $f_n$ be a sequence of $C^1$ functions. If $\exists \; g : A \rightarrow \mathbb{R}$ so that $\frac{df_n}{dx} \rightarrow g$ converges uniformly and $\lim_{n \rightarrow \infty} f_n(c)$ exists for some $c \in [a,b]$, then $\exists \: f: A \rightarrow \mathbb{R}$ so that $f_n \rightarrow f$ converges uniformly and: $$\lim_{n \rightarrow \infty} \frac{df_n}{dx} = \frac{df}{dx} = g$$

>[!exm|1]
>Recall that for $x \in (-1,1)$: $$\frac{1}{1-x} = \sum_{k=0}^\infty x^k$$Now: $$\frac{d}{dx} \left( \frac{1}{1-x} \right) = \frac{1}{(1-x)^2} = \sum_{k=1}^\infty k x^{k-1} = 1+2x+3x^2 + \dots$$

>[!exm|2]
>Take the previous example and replace $x$ with $-x^2$: $$\frac{1}{1+x^2} = \sum_{k=0}^\infty (-1)^kx^{2k}$$Whose integral we (trivially) know: $$\int_0^x \frac{1}{1+t^2} \; dt = \arctan(x) = \sum_{k=0}^\infty \frac{(-1)^k}{2k+1}x^{2k+1} = x - \frac{x^3}{3} + \dots$$


