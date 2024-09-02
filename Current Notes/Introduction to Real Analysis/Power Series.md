
>[!def|*] Power Series
>An infinite series of the form: $$\sum_{n=0}^\infty a_n(x-c)^n$$Where $x,c \in \mathbb{R}$ and $a_n$ is a sequence of numbers is called a Power Series.
>- We think of $c$ to be the “center” of the power series.

>[!exm|1]-
>Consider: $$\sum_{n=1}^\infty \frac{x^n}{n}$$Clearly $c = 0$ and thus it is centered at the origin. Also: $a_n = \frac{1}{n}: n \in \mathbb{N}_+$. 
>
>Determine the values of $x$ for which the series converges pointwise and uniformly. 
>
>**Pointwise**:
>The form of the power series suggest that we will use a text. Specifically, we use the [[Ratio Test]]. Thus we look at: $$\lim_{n \rightarrow \infty} \left|\frac{x^{n+1}}{(n+1)} \cdot \frac{n}{x^n} \right| = \lim_{n \rightarrow \infty} \frac{n}{n+1}|x| = |x|$$Now if $|x| < 1$, then it is convergent by the [[Ratio Test]]. However, we must still investigate $|x| = 1$ as the ratio test is inconclusive here. Let us look at the cases:
>For $x = 1$: $$\sum_{n=1}^\infty \frac{1}{n} \rightarrow \infty \; \;\text{(It is the Harmonic Series)}$$For $x = -1$: $$\sum_{n=1}^\infty \frac{(-1)^n}{n} \; \text{is convergent} \; \; \;\text{(It is the Alternating Harmonic Series)}$$Thus: $$\text{Pointwise convergence for} \; x \in [-1,1)$$
>**Uniform**
>Now let us determine uniform convergence. To do so, we will use the [[Weierstrass M-test]]. Take $r \in [0,1)$. Then: $$\left| \frac{x^n}{n} \right| = \frac{|x^n|}{n} \le \frac{r^n}{n}$$Let us take $M_n = \frac{r^n}{n}$. Now we check convergence: $$\sum_{n=1}^\infty M_n = \sum_{n = 1}^\infty\frac{r^n}{n}$$Which we know converges (see the ratio test above) for $r \in [0,1)$. Thus by the M-Test, we have uniform convergence for $x \in [-r,r]$. 

>[!exm|2]-
>Consider: $$\sum_{n=o}^\infty n^2 \left(\frac{x^2}{2} \right)^n = \sum_{n=0}^\infty \frac{n^2}{2^n} x^{2n}$$
>Where it has terms: $$= 1 \cdot \left( \frac{x^2}{2} \right)  + 2^2 \cdot \left( \frac{x^2}{2} \right)^2 + 3^2 \cdot \left( \frac{x^2}{2} \right)^3 + \dots $$We note that we are “missing” the odd powers of $x$. We shall get back to this.
>**Pointwise**
>Again, we use the [[Ratio Test]]: $$\lim_{n \rightarrow \infty} \left|\frac{(n+1)^2 \left( \frac{x^2}{2} \right)^{n+1}  }{n^2 \left(  \frac{x^2}{2} \right)^n } \right| = \frac{x^2}{2}$$Clearly, we have pointwise convergence if $x \in (-\sqrt 2, \sqrt 2)$. Not we must examine the endpoints.
>For $x = \pm \sqrt 2$: $$\sum_{n \rightarrow 0}^\infty n^2 \left(  \frac{(\sqrt 2)^2}{2} \right)^n = \sum_{n=0}^\infty n^2$$Which clearly diverges. Thus $x \in (-\sqrt 2, \sqrt 2)$ means pointwise convergence.
>
>**Uniform**:
>Again, we use the [[Weierstrass M-test|M-test]]. We consider $r = [0,\sqrt 2)$. Now: $$\left| n^2 \left(  \frac{x^2}{2} \right) ^n \right| \le n^2 \left(  \frac{r^2}{2} \right) ^n = M_n \; \; \forall x \in [-r, r] $$Clearly (from the calculations we did just above), $\sum_{n=0}^\infty M_n$ converges and thus for $x \in [-r, r]$, we have uniform convergence. 


