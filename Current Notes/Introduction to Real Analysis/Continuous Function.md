
>[!def|*] Continuous
>Let $A \subseteq \mathbb{R}^d$, $f: A \rightarrow \mathbb{R}$. We say $f$ is continuous on $A$ if $\forall \: c \in A$ and $\forall \: \epsilon > 0, \exists \: \delta > 0$ such that $x \in B_\delta (c) \implies f(x) \in B_\epsilon (f(c))$

>[!exm|1]- Showing a function is Continuous
>Consider: $$A = (0, \infty)$$
>Let $f: A \rightarrow \mathbb{R}$ be given by $f(x) = \frac{1}{x}$. Show that the function is continuous.
>
>`\begin{proof}`
>Let $c \in (0, \infty)$ and let $\epsilon > 0.$ We must find $\delta >0$ so that: $$|x-c| < \delta \implies |f(x) - f(c)| < \epsilon$$
>(Without explaining where $\delta$ comes from): Choose: $$\delta = \text{min}\left\{ \frac{c}{2}, \frac{\epsilon c^2}{2} \right\} $$Then if $|x-c| < \delta$, we have: $$ \frac{-c}{2}\le -\delta < x-c < \delta \le \frac{c}{2}$$Which holds by definition of $\delta$. Thus: $$\frac{c}{2} < x < \frac{3c}{2}$$Now: $$|f(x)-f(c)| = \left| \frac{1}{x} - \frac{1}{c} \right| =  \left| \frac{x-c}{xc}  \right| = \frac{|x-c|}{xc} < \frac{2|x-c|}{c^2}$$ which holds since $\frac{c}{2}< x$. Then: $$< \frac{2\delta}{c^2} \le \frac{2\epsilon c^2}{2c^2} = \epsilon$$
>Which holds by definition of $\delta = \text{min}\{\frac{c}{2}, \frac{\epsilon c^2}{2}\}$. Hence $f(x)$ is continuous. 
>  `\end{proof}`
