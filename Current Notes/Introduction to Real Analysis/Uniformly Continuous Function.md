
>[!def|*] Uniformly Continuous
>Let $A \subseteq \mathbb{R}^d$, $f: A \rightarrow \mathbb{R}$. We say $f$ is uniformly continuous on $A$ if $\forall \: \epsilon > 0$, $\exists \: \delta > 0$ such that $x \in B_\delta (c) \implies f(x) \in B_\epsilon(f(c)) \; \; \forall c \in A$.

If you look closely between the definition above and the definition of a [[Continuous Function]], you will notice that their difference is the location of the “$\forall \: c \in A$”. Thus in the definition for uniformly continuous functions, $\delta$ is independent of $c$.

>[!exm|1]- Showing Uniform Continuity
>Let $A = [a, \infty]$ for some $a > 0$ and $f(x) = \frac{1}{x}$. Show that $f(x)$ is uniformly continuous.
>
>`\begin{proof}` 
>**Rough Work**: Need $|f(x)-f(c)| < \epsilon$ for some $\delta$. So let’s: $$|f(x) - f(c)| =\left| \frac{1}{x} - \frac{1}{c} \right| = \frac{|x-c|}{xc}$$Now we know for any $c \in A$ we choose, that $a \le c$. Hence $\forall \: x \in A$, we have, $xc \ge a^2$. Thus $\frac{1}{cx} \le \frac{1}{a^2}$. Then: $$|f(x)-f(c)| \le \frac{|x-c|}{a^2}$$Then we should choose $|x-c| < \delta = a^2 \epsilon$.
>
>**Actual Proof**:
>Let $\epsilon > 0$ and $c \in A$. Now take $\delta = a^2 \epsilon$. Then $\forall \: x \in A$ with $|x-c| < \delta$, we have: $$|f(x) - f(c)| = \frac{|x-c|}{xc} \le \frac{|x-c|}{a^2} = \epsilon$$Thus $f$ is uniformly continuous. (Note that $\delta = a^2 \epsilon$ does NOT INCLUDE $c$, this is what differentiates it from just continuous. In Example $1$, $\delta$ had $c$ in its definition, hence we only showed that it was continuous).
> `\end{proof}`

>[!theorem|1]
>Let $A \subseteq \mathbb{R}^d, f: A \rightarrow \mathbb{R}$. Then $f$ fails to be uniformly continuous $\iff$ $\exists \: \epsilon >0$ and $x_n, y_n, \subseteq A$ so that $\rho(x_n,y_n) \rightarrow 0$ but $|f(x_n)-f(y_n)| \ge \epsilon \; \; \forall n \in \mathbb{N}$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>But what does it mean for it not to be uniformly continuous? Consider: $$\lnot (\forall \: \epsilon> 0 \; \; \exists \: \delta > 0: p(x,y) < \delta \implies |f(x) - f(y)| < \epsilon)$$Then let us begin negation: $$\exists \: \epsilon > 0 : \forall \: \delta > 0 \; \; \lnot(\rho (x,y) \implies |f(x)-f(y)| < \epsilon \; \; \forall x,y \in A)$$Finally: $$\exists \: \epsilon > 0: \forall \: \delta > 0 \; \; \exists \:x,y \in A \;\text{with} \;\rho(x,y) < \delta \; \land \; |f(x)-f(y)| \ge \epsilon$$
>>That is what it means for it not to be uniformly continuous. Let this definition be labelled as $\star$. Onto the actual proof now:
>>
>>$\implies$: Since $f$ is not uniformly continuous, $\star$ holds. Let $\epsilon_0$ be the $\epsilon \: > 0 \in \star$. For each $n \in \mathbb{N}_+$, let $x_n, y_n$ be such that $\rho(x_n, y_n) < \frac{1}{n}$ and $|f(x_n)- f(y_n)| \ge \epsilon$. (Which again holds by $\star$).
>>
>>Doing this defines sequences $x_n$ and $y_n$ so that $\rho(x_n, y_n) \rightarrow 0$ as $n \rightarrow \infty$ but $|f(x_n) - f(y_n)| \ge \epsilon_0$ for all $n \in \mathbb{N}_+$.
>>
>>$\impliedby$: Since $\exists \: x_n, y_n \subseteq A$ so that $\rho(x_n,y_n) \rightarrow 0$ with $|f(x_n) - f(y_n)| \ge \epsilon$ for some $\epsilon > 0$ basically implies $\star$. 
>> `\end{proof}`

>[!example|2]- Showing that a function is not Uniformly Continuous
>Let $A = (0, \infty)$ and take $f(x) = \frac{1}{x}$. Show that $f(x)$ is not uniformly continuous on $A$.
>
>`\begin{proof}`
>Since $x_n = \frac{1}{n}$ and $y_n = \frac{1}{n+1}$ satisfy $|\frac{1}{n} - \frac{1}{n+1}| \rightarrow 0$. Then: $$\left| f \left( \frac{1}{n} \right) - f \left( \frac{1}{n+1} \right) \right|  = \left| \frac{1}{\frac{1}{n}} - \frac{1}{\frac{1}{n+1}} \right| = 1  $$Doing this defines sequences $x_n$ and $y_n$ so that $\rho(x_n, y_n) \rightarrow 0$ as $n \rightarrow \infty$ but $|f(x_n) - f(y_n)| \ge \epsilon_0$ for all $n \in \mathbb{N}_+$.
>  `\end{proof}`

>[!theorem|2]
>Let $A \subseteq \mathbb{R}^d$ be compact. If $f: A \rightarrow \mathbb{R}$ is continuous on $A$, then it is uniformly continuous on $A$.

