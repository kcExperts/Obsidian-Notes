
>[!rmk|*]- Uniform Convergence it not enough for limits and derivatives
>Consider: $$f_n(x) = \frac{x}{1+n^2x^2}$$As we take $n \rightarrow \infty$, it looks like a straight line (graph it on Desmos!). Now, using calculus, we can show that: $$\frac{df_n}{dx} = \frac{1-n^2x^2}{1+n^2x^2}$$And that it has critical points at $x = \pm \frac{1}{n}$. (Verify max and min are $\pm \frac{1}{2n}$). With that fact, it is clear that: $$\text{sup}\{|f_n(x)| : x \in \mathbb{R}\} = \frac{1}{2n}$$and we could show $f_n \rightarrow f = 0$ uniformly. On the other hand, we have: $$\frac{df_n}{dx}(0) = 1 \; \; \; \forall n$$We can also show that: $$\frac{df_n}{dx}(x) \rightarrow 0 \; \; \; \forall x \ne 0$$The point of everything we just did is to see: $$\lim_{n \rightarrow \infty} \frac{df_n}{dx}(x) = \begin{cases} 1 &x =0\\ 0 & x \ne 0 \end{cases}$$But: $$\frac{d}{dx} \lim_{n \rightarrow \infty} f_n(x) = \frac{d}{dx}f(x) = 0$$Which are not exactly equal. Then we need more than uniform convergence to interchange limits and derivatives.

>[!def|*] Continuous of Order $k$
>Let $f: A \rightarrow \mathbb{R}$, we say $f$ is $C^k$ if: $$\frac{d^kf}{dx} \; \text{exists and is continuous}$$Write $f \in C^k(A; \mathbb{R})$ (where $A$ is the domain and $\mathbb{R}$ is the range).

>[!theorem|1] Preservation of Differentiation 
>Let $A = [a,b]$ and $f_n$ be a sequence of $C^1$ functions. If $\:\exists \; g : A \rightarrow \mathbb{R}$ so that $\frac{df_n}{dx} \rightarrow g$ converges uniformly and $\lim_{n \rightarrow \infty} f_n(c)$ exists for some $c \in [a,b]$, then $\exists \: f: A \rightarrow \mathbb{R}$ so that $f_n \rightarrow f$ converges uniformly and: $$\lim_{n \rightarrow \infty} \frac{df_n}{dx} = \frac{df}{dx} = g$$
>Note: This requirement $\lim_{n \rightarrow \infty} f_n(c)$ is a little weird. One might think we could get away without this. But we can’t (find a sequence of functions as a counterexample).
>>[!claim|*]- Proof
>>`\begin{proof}`  
>>Let: $$f(x) = \lim_{n \rightarrow \infty} f_n(a) + \int_a^x g(t) \; dt$$We will show that this function is well-defined and that it satisfies the theorem. Hence we do the following;
>> 1. $f(x)$ exists.
>> 2. $f_n \rightarrow f$ converges uniformly.
>> 3. $\frac{df}{dx} = g(x)$. 
>> 
>> **Part 1**:
>> Since $f_n \in C^1(A; \mathbb{R})$, we must have that $\frac{df_n}{dx}$ is continuous and since $\frac{df_n}{dx} \rightarrow g$ converges uniformly, $g$ is continuous. $\therefore$ $\int_a^x g(t) \; dt$ exists $\forall \: x \in A$. By the [[Fundamental Theorem of Calculus]]: $$\int_a^c\frac{df_n}{dx}(x) \; dx = f_n(c) - f_n(a)$$We get: $$\lim_{n \rightarrow \infty} f_n(a) = \lim_{n \rightarrow \infty} \left(  - \int_a^c \frac{df_n}{dx}(x) \; dx + f_n(c) \right) $$Distributing the limit: $$\lim_{n \rightarrow \infty} \left(  - \int_a^c \frac{df_n}{dx} \; dx \right)  + \lim_{n \rightarrow \infty} f_n(c)$$Where the first limit is $-\int_a^c g(x) \; dx$ and the second part exists by assumption.
>> **Part 2**:
>> Let: $$A = \lim_{n \rightarrow \infty} f_n(a)$$
>> Now we need to show that it is uniformly convergent. Now, since $A$ exists, $\forall \: \epsilon > 0, \exists \: N_1 \in \mathbb{N} : |A-f_n| < \epsilon \; \; \forall \: n \ge N_1$. Also, $\exists \: N_2 \in \mathbb{N} : |f_n^{'}(x)-g(x)| < \frac{\epsilon}{2(b-a)} \; \; \forall n \ge N_2 \; \; \forall x \in I$. Define: $$N = \text{max}\{N_1, N_2\}$$Then $\forall \: n \ge N$, $$|f_n(x) - f(x)| = |f_n(a) + \int_a^x f_n'(s)\;ds - [A+\int_a^x g(s)\;ds|$$We will now use the [[Triangle Inequality]] to get: $$\le |f_n(a) - A|+|\int_a^x (f_n'(s)-g(s)) \; ds|$$We can move the absolute value inside the integral to get: $$< \frac{\epsilon}{2}+\int_a^x|f_n'(s) - g(s)|\;ds \le \frac{\epsilon}{2} + \int_a^b\frac{\epsilon}{2(b-a)} \; ds = \epsilon$$We note that we switch the bounds from $x$ to $b$ as $x \in [a,b]$ and since the integral of the absolute value is always positive. Taking the biggest value on the interval will guarantee that it is a maximum.
>> 
>> **Part 3**:
>> We have $f’(x) =g(x)$ by the [[Fundamental Theorem of Calculus]]. (To do this, take the derivative of f(x) that we defined as the first equation).  
>> `\end{proof}`

>[!corollary|1] Special Case
>If $f_n(x)$ is a sequence of $C^1$ functions on $I = [a,b]$ and if $\; \lim_{n \rightarrow \infty} f_n(x) = f(x)$ uniformly on $I$ and $\; \lim_{n \rightarrow \infty} f_n’(x) = g(x)$ uniformly on $I$, then: $$f'(x) = g(x) \; \text{on I}$$

>[!rmk|*] Necessary Conditions
>Consider: $$f_n(x) = x+n \implies f_n'(x) = 1$$Clearly $f_n’(x) \rightarrow 1$ but $f_n(x)$ does not converge. We clearly need $f_n(x)$ to converge uniformly on $I$.

>[!exm|1] Conditions to apply the Theorem
>Consider: $$f_{n_1}(x) = \frac{\text{sin}(nx)}{\sqrt n} \; \land \; f_{n_2}(x) = \frac{\text{sin}(nx)}{n^2}$$on $I = [0,1]$. Clearly: $$f_{n_1}'(x) = \sqrt n \text{cos}(nx) \; \land \; f_{n_2}'(x) = \frac{\text{cos}(nx)}{n}$$Now $f_{n_1}(x) \rightarrow f_1(x)$ uniformly where $f_1(x) = 0$. However, it is clear that $f_{n_1}'(x)$ diverges. Thus Theorem $1$ does not apply.
>Similarly, $f_{n_2}(x) \rightarrow f_2(x)$ uniformly where $f_2(x) = 0$. This time, it is clear that $f_{n_2}’(x) \rightarrow g(x)$ where $g(x) = 0$. Thus Theorem $1$ applies.

