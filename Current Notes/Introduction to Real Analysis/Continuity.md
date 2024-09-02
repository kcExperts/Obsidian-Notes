Let us touch on some old enemies.
#### Motivation and the Calculus Continuity
>[!rmk|*] 
>Recall from long ago, the set: $$A = \{x \in \mathbb{Q}: 0 < x < 1\}\; \; \text{with} \; f(x) = x^3 - x$$We asked if this had a maximum and we determined that it did not have one as $A$ was not [[Bounds|Bounded]] and hence it was not continuous thus the [[Extreme Value Theorem]] did not apply. But how does one know if a function is continuous?

>[!rmk|*] Calculus definition of Continuity
>In calculus, we defined $f$ to be continuous if $$\lim_{x \rightarrow c} f(x) = f(c)$$
>But this only really works for your standard, boring, easy functions. The following three examples make us question things.

>[!example|1]- Dirichlet’s Function
>Consider the following: $$f(x) = \begin{cases} 1 & \text{if} \; x \in \mathbb{Q}\\ -1 & \text{if} \; x \not\in \mathbb{Q} \end{cases}$$This is called Dirichlet’s Function. Visually, this would look like a huge amount of points on $y=1$ and $y = 0$.
>One would think that this is continuous.

>[!example|2]- Modified Dirichlet’s Function
>Consider the (unofficially named) modified Dirichlet’s Function: $$g(x) = \begin{cases} x & \text{if} \; x \in \mathbb{Q} \\ 0 & \text{if} \; x \not\in \mathbb{Q} \end{cases} $$Which would look something like this:
>![[Pasted image 20240307164044.png]]
>Now ask yourself, is $g(x)$ continuous? What is $\lim_{x \rightarrow 0} g(x)$? 
>- We can correctly guess that $\lim_{x \rightarrow 0} g(x) = 0$.

>[!example|3]- Thomae’s Function
>Consider Thomae’s Function: $$h(x) = \begin{cases} 1 & \text{if} \; x = 0\\ \frac{1}{q} & \text{if} \; x \in \mathbb{Q} \\ 0 &  \text{if} \; x \not\in \mathbb{Q}\end{cases}$$
>Visually:
>![[Pasted image 20240307164730.png]]

The answer to whether these functions are continuous or not will be described once we get a good grasp on continuity.
#### Core Definition
>[!def|*] Functional Limits
>Let $A \subseteq \mathbb{R}^d$, $f: A \rightarrow \mathbb{R}^m$, $c \in A’$ and $L \in \mathbb{R}^m$. We say: $$\lim_{x \rightarrow c} f(x) = L$$If: $$\forall \; \epsilon > 0, \exists \; \delta > 0 : x \in \hat B_\delta (c) \cap A \implies f(x) \in B_\delta (L)$$
>
>We take the [[Punctured Ball]] as the actual point could be elsewhere (i.e. discontinuous). Were only asking if the limit exists, not if the function is continuous.
>>[!rmk|*]- Visual Representation
>>![[Pasted image 20240307165302.png]]
>>Where the $L- \epsilon, L +\epsilon$ is the ball $B_\epsilon L$ and the $L - \delta, L + \delta$ is the ball $B_\delta (c)$ where $c$ is the $x$ coordinate of our desired point $L$.

>[!def|*] Continuity at a Point
>Let $A \subseteq \mathbb{R}^d, f: A \rightarrow \mathbb{R}^m, c \in A$. We say $f$ is continuous at $c$ if: $$\lim_{x \rightarrow c} f(x) = f(c)$$ or equivalently: $\forall \: \epsilon > 0, \exists \: \delta > 0:$ if $x \in B_\delta (c) \implies f(x) \in B_\epsilon (f(c))$. 
>Note that $c$ is a [[Cluster Points|Cluster Point]].

#### Theorems and Examples
>[!theorem|1] 
>Let $A \subseteq \mathbb{R}^d$, $f: A \rightarrow \mathbb{R}^m, c \in A’, L \in \mathbb{R}^m$, then the following are equivalent:
>1. $\lim_{x \rightarrow c} f(x) = L$
>2. For every [[Sequences|Sequence]] $x_n \subseteq A$ with $x_n \ne c$ $\forall \: n$, means that $x_n \rightarrow c$.

>[!corollary|1]- Classic Calculus Interpretation
>If $x_n \subseteq A$ and $y_n \subseteq A$ are [[Sequences]] with $x_n \rightarrow c, y_n \rightarrow c$ and $x_n \ne C \; \forall \: n, y_n \ne C \; \forall \: n$ with $\lim_{n \rightarrow \infty} f(x_n) \ne \lim_{n \rightarrow \infty} f(y_n)$, then $\lim_{x \rightarrow c} f(x)$ does not exist.
>(This can be thought of the limit not existing if the limit from the left is not equal from the limit to the right)

>[!theorem|2] 
>Let $A \subseteq \mathbb{R}^d, f: A \rightarrow \mathbb{R}^m, c \in A$. $f$ is continuous at $c \iff$ for every [[Sequences|Sequence]] $x_n \in A$ with $x_n \rightarrow c$, we have $f(x_n) \rightarrow f(x)$ as $n \rightarrow \infty$. 
>>[!claim|*]- Proof
>>`\begin{proof}` We show implications both ways.
>>
>>$\implies$: Since $f: A \rightarrow \mathbb{R}^m$ is continuous at $c$, $\forall \: \epsilon > 0, \exists \: \delta > 0$ such that when $x \in B_\delta (c)$, we have $f(x) \in B_\epsilon (f(c))$. Let $x_n \in A$ converging to $c$. Then $\exists \: N: \forall n \ge N, x_n \in B_\delta (c)$. Since $x_n \in B_\delta (c)$, we have $f(x_n) \in B_\epsilon (f(c)) \forall \: n \ge N$. Thus $f(x_n) \rightarrow f(c)$.
>>
>>$\impliedby$: (Contrapositive) If $f$ is not continuous at $c$, then $\exists x_n \in A$ with $x_n \rightarrow c$ but $\lim_{n \rightarrow \infty} f(x_n) \ne f(c)$. Since $f$ is not continuous at $c$, $\exists \: \epsilon >0$ so that $\forall \: \delta > 0, \; \exists x \in B_\delta (c)$ with $f(x) \not\in B_\epsilon (f(c))$. 
>>Let $x_1 \in B_1(c)$ such that $f(x_1) \not\in B_\epsilon (f(c))$. For each $n$, let $x_n \in B_{\frac{1}{n}}(c)$ so that $f(x_n) \not\in B_\epsilon (f(c))$. Which we can do. Clearly $x_n \rightarrow c$ but $\lim_{n \rightarrow \infty} f(x_n) \ne f(c)$.
>> `\end{proof}`

#### New Approach
>[!rmk|*]- Approaching Modified Dirichlet’s Function at $x = 0$
>Recall: $$f(x) = \begin{cases} x & \text{if} \; x \in \mathbb{Q}\\ 0 & \text{if} \; x \not\in \mathbb{Q} \end{cases}$$We claim $\lim_{x \rightarrow 0} g(x) = 0$.
>`\begin{proof}`  To show this, let $\epsilon > 0$ be fixed. Let $\delta = \epsilon$. Then if $|0 - x| < \delta$ (which comes from $B_\delta (0)$. We get $$|g(x)-0| = \begin{cases} |x| & \text{if} \; x \in \mathbb{Q}\\ 0 & \text{if} \; x \not\in \mathbb{Q} \end{cases}$$Then $|g(x) - 0| \le |x| < \delta = \epsilon$. 
>`\end{proof}`

>[!rmk|*]- Approaching Dirichlet’s Function
>Recall: $$f(x) = \begin{cases} 1 & \text{if} \; x \in \mathbb{Q}\\ -1 & \text{if} \; x \not\in \mathbb{Q} \end{cases}$$We claim that it has no limit at $x = 0$.
>`\begin{proof}` Let $x_n = \frac{1}{n}$, clearly $x_n \rightarrow 0$ as $n \rightarrow \infty$. Since $f(x_n) = 1 \; \forall n$ We must have $f(x_n) \rightarrow n$. Now let $y_n = \frac{\sqrt 2}{n}$, then $y_n \rightarrow 0$ as $n \rightarrow \infty$. Since $f(y_n) = 0 \; \forall \: n$, we must have $f(y_n) \rightarrow 0$ as $n \rightarrow \infty$. 
>$\therefore$ $\lim_{x \rightarrow 0} f(x)$ does not exist.
>
>(In essence both of these subsequences have a limit $0$ but when the function is applied, we clearly see that they converge to different numbers, hence the limit does not exist)
>`\end{proof}`

>[!rmk|*]- On the topic of continuity of the three example functions
> - Dirichlet’s Function: Not continuous $\forall \: x \in \mathbb{R}$.
> - Modified Dirichlet’s Function: Continuous only at $x = 0$. 
> - Thomae’s Function: We can show that $\forall \: c \in \mathbb{R}, \lim_{x \rightarrow c} h(x) = 0$. Thus $h(x)$ is continuous $\forall \: c \in \mathbb{Q}^c$ but discontinuous $\forall \: c \in \mathbb{Q}$. (Where $h(x)$ is Thomae’s Function).
