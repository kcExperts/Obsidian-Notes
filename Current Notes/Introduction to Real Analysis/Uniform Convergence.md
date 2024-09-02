
>[!rmk|*] A quick Recap
>Uniform Convergence:
>1. Preserves Continuity;
>2. Preserves Boundedness;
>3. Allows for the interchanging of limits and integrals.

But what about the derivative? We need to define what it means to be [[Continuous of Order k]].
#### Motivation
Consider the last example shown in [[Pointwise Convergence]]. Now examine its integral case:

>[!rmk|*] The Integral
>Consider: $$f_n(x) = \begin{cases} (2nx)n & 0 \le x \le \frac{1}{2n} \\ (2-2nx)n & \frac{1}{2n}<x<\frac{1}{n} \\ 0 & \frac{1}{n} < x \le 1\end{cases}$$Then: $$\int_0^1 f(x) \; dx = 0$$As the triangles will shrink is base but increase proportionally in height. But now, what about the integral of $f_n(x)$? It is: $$\int_0^1 f_n(x) \; dx = \frac{1}{2}$$Then we get to an interesting conclusion: $$\frac{1}{2} = \lim_{n \rightarrow \infty} \int_0^1 f_n(x) \; dx \ne \int_0^1 \lim_{n \rightarrow \infty} f_n(x) \; dx = 0$$

We arrive to some takeaways:

>[!rmk|*] Takeaways
>1. Just because $f_n(x)$ is continuous doe every $n$ doesn’t mean $f(x)$ is continuous.
>2. The limit of the integrals doesn’t need to be the integral of the limit.

But what criteria makes it so that we can interchange the limit and the integral?
#### Main Idea and Theorems

>[!def|*] Uniform Convergence
>Let $A \subseteq \mathbb{R}$ be an interval and $f_n$ be a sequence of functions on $A$. Then:
>$f_n$ converges uniformly if $\forall \epsilon > 0, \exists N \in \mathbb{N}: |f_n(x) - f(x)| < \epsilon \; \; \forall x \in A$ and for all $n \ge N$. 
>
>Note that the quantifier $\forall x \in A$ appears at the end here. Also:
>1. $N$ does not depend on $x$.
>2. Uniform convergence $\implies$ pointwise convergence. 
>3. $|f_n(x) - f(x)| < \epsilon \; \; \forall x \in A \iff \text{sup}\{|f_n(x) - f(x)| : x \in A\} < \epsilon$.
>
>The third point here is of extreme importance in proofs as it is usually easier to work with.
>>[!rmk|*]- Visual Interpretation
>>![[Pasted image 20240320145318.png]]
>>The idea here is that the sequence of functions $f_n$ will get arbitrarily close to another function $f$ as we take some $n \ge N$. 

>[!exm|1]
>Recall our $f_n(x) = x^n$ for $x \in [0, \frac{1}{2}]$. 
>>[!rmk|*]- Visual Interpretation
>>![[Pasted image 20240320145541.png]]
>>Note: This image is the interval $[0,1]$.
>
>We claim that $f_n$ converges uniformly to $f(x) = 0$ on $[0, \frac{1}{2}$].
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Let $\epsilon >0$. Since $f_n(x)$ is increasing in $x$, we have: $$f_n(x) \le \left(  \frac{1}{2} \right)^n \; \; \forall\: x \in [0,\frac{1}{2}] $$Then: $$\text{sup}\{|f_n(x) - f(x)| : x \in [0, \frac{1}{2}\} = \left(  \frac{1}{2} \right) ^n$$So for all: $$n \ge N > \frac{log(\epsilon)}{-log(2)}$$We have: $$\text{sup}\{|f_n(x) - 0| : x \in [0, \frac{1}{2}\} = \left(  \frac{1}{2} \right) ^n$$
>> `\end{proof}`

>[!theorem|1] Continuity is conserved
>Let $A \subseteq \mathbb{R}$ be an interval and $f_n$ be a sequence of continuous functions. If $\exists f: A \rightarrow \mathbb{R}$ so that $f_n$ converges to $f$ uniformly, then $f$ is continuous.  
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Let $\epsilon > 0$. Let us note some things:
>>1. Since $f_n \rightarrow f$ uniformly, $\exists N$ so that $|f_n(x)-f(x)| < \frac{\epsilon}{3} \; \forall x \in A \; \land \; n \ge N$. 
>>2. Since $f_N$ is continuous, $\exists \delta > 0$ so that $|(f_N(x) - f_N(x_0)| < \frac{\epsilon}{3}$ whenever $|x - x_0| < \delta$. 
>>
>>So for $|x- x_0| < \delta$, we have: $$|f(x) - f(x_0)| = |f(x) - f_N(x) + f_N(x) - f_N(x_0)+f_N(x_0) -f(x_0)|$$By the [[Triangle Inequality]]: $$\le |f(x) - f_N(x)| + |f_N(x) - f_N(x_0)| + |f_N(x_0) - f(x_0)|$$Now we note: $$\begin{array}{ccc} |f(x) - f_N(x)| < \frac{\epsilon}{3} \; \text{by 1} \\ |f_N(x_0) - f(x_0)| < \frac{\epsilon}{3} \; \text{by 1} \\ |f_N(x) - f_N(x_0)| < \frac{\epsilon}{3} \text{ by 2}\end{array}$$Thus $|f(x) - f(x_0)| < \epsilon$.
>> `\end{proof}`

>[!theorem|2] Boundedness is conserved
>Let $A \subseteq \mathbb{R}$ be an interval and $f_n$ be a sequence of [[Bounds|Bounded]] functions on $A$. If $\exists f: A \rightarrow \mathbb{R}$ such that $f_n \rightarrow f$ uniformly on $A$, then $f$ is bounded.
>>[!claim|*]- Proof
>>(Visually, see the epsilon tube image above (ignore the $f_1$ that leaves))
>>`\begin{proof}` 
>>Let $\epsilon > 0$, then since $\exists N \in \mathbb{N}$ so that $|f_n(x) - f(x)| < \epsilon$ for all $n \ge N$. We know $|f_N(x) - f(x)| < \epsilon$. Since $f_N$ is bounded, $\exists u,L \in \mathbb{R} : u \ge f_N(x) \ge L$ for all $x \in A$. Then: $$\begin{array}{ccc} -\epsilon < f_N(x) - f(x) < \epsilon  \\ L-\epsilon < (x) < \epsilon +u\end{array}$$Thus $f(x)$ is bounded.
>> `\end{proof}`
#### On the Topic of Integration
>[!lemma|1] Swapping the order of the Integrals and the Absolute Values
>Let $A = [a,b]$ (closed interval) and $f: A \rightarrow \mathbb{R}$ s.t $\int_a^b f(x)\; dx$ exists. Then: $$\left| \int_a^b f(x) \; dx \right| \le \int_a^b |f(x)| \;dx $$
>>[!claim|*]- Proof
>> `\begin{proof}` 
>>  Define: $$f_+(x) = \begin{cases} f(x) & f(x) > 0\\ 0 &f(x) \le 0  \end{cases}$$And: $$f_-(x) = \begin{cases} 0 & f(x) \ge 0\\ -f(x) & f(x) < 0 \end{cases}$$Then both of these functions will be greater than $0$. This allows us to nicely express the absolute values of the function. Thus, we note:
>>- $f(x) = f_+(x) - f_-(x)$
>>- $|f(x)| = f_+(x) + f_(x)$
>>
>>With this in mind, we can do the following: $$\left| \int_a^b f(x) dx \right| = \left| \int_a^b f_+(x)-f_-(x) dx \right|  $$Giving: $$\left| \int_a^b f_+(x) dx - \int_a^b f_-(x) dx \right|  $$Which, by the [[Triangle Inequality]], nets us: $$\le \left|  \int_a^b f_+(x) dx \right| + \left| \int_a^b f_-(x) dx \right| $$(The negative value was cancelled by the absolute value) We note that $\int_a^b f_+(x) \ge 0 \; \land \; \int_a^b f_-(x) dx \ge 0$, hence: $$\left| \int_a^b f(x) dx \right| \le \int_a^b f_+(x) dx + \int_a^b f_-(x) dx$$Which gives us: $$\left| \int_a^b f(x) dx \right| \le \int_a^b|f(x)| \;dx$$
>>`\end{proof}`

>[!theorem|3] Interchanging limits and Integrals
>Let $A = [a,b]$ and $f_n$ be a sequence of functions on $A$ so that $\int_a^b f_n(x)\;dx$ is defined $\forall n$. If $\exists \; f:A \rightarrow \mathbb{R}$ such that $f_n \rightarrow f$ uniformly, then: $$\lim_{n \rightarrow \infty} \int_a^b f_n(x) \; dx = \int_a^b f(x) \; dx$$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Let $\epsilon >0$, we are trying to show that: $$\exists \:n \in \mathbb{N}: \left| \int_a^b f_n(x) \; dx - \int_a^b f(x) \; dx \right| < \epsilon \; \; \; \forall \: n \ge N  $$Since $f_n \rightarrow f$ converges uniformly. Then $\exists \: N$ so that: $$|f_n(x) - f(x)| < \frac{\epsilon}{2(b-a)} \; \; \; \forall \: n \ge N \; \land \; \forall \: x \in A$$Then: $$\left| \int_a^b f_n(x) - f(x) \; dx \right| \le \int_a^b |f_n(x) - f(x)| \; dx$$Which holds by Lemma $1$. Now for $n \ge N$, we have: $$\int_a^b|f_n(x) - f(x)| \; dx \le \int_a^b \frac{\epsilon}{2(b-a)} \; dx = \frac{\epsilon (\bcancel{b-a})}{2(\bcancel{b-a})} < \epsilon$$Which is what we wanted to show.
>>`\end{proof}`

#### Exercises
>[!exercise|1]
>Let :$$S_n(x) = \frac{nx}{(nx+1)} \; \text{for} \; n \ge 1 \; \land \; x \in [0,1]$$
>1. Compute the pointwise limit $\lim_{n \rightarrow \infty} S_n(x)$ on $[0,1]$ and determine if there is uniform convergence on the interval.
>2. Compute: $$\lim_{n \rightarrow \infty} \int_0^1 S_n(x) \;dx \; \land \; \int_0^1 \lim_{n \rightarrow \infty} S_n(x) \; dx$$
>
>>[!claim|*]- Solution
>>**Part 1**:
>>Notice that: $$S_n(x) = \frac{nx}{n(x+\frac{1}{n})} = \frac{x}{x+\frac{1}{n}}$$Then: $$\lim_{n \rightarrow \infty} S_n(x) = \frac{x}{x} = 1$$However this only works for $x \in (0,1]$. Let us verify for $x=0$: $$\lim_{n \rightarrow \infty} S_n(0) = \lim_{n \rightarrow \infty}\frac{0n}{(0n+1)} = 0$$Hence $S_n(x)$ converges pointwise but not uniformly. 
>>
>>**Part 2**:
>>![[Pasted image 20240322193652.png]]
