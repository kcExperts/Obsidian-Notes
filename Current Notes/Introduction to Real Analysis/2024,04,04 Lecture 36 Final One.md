
>[!rmk|*] Exam Problem
>We know two parts: 
>1. Show that $\forall \: n, \exists \: E_n(x)$ so that: $$e = \sum_{k=0}^n \frac{1}{k!}+E_n(1)$$
>2. Show that $e$ is irrational (do by contradiction).
>
>Note that knowing: $$e = \sum_{k=0}^\infty \frac{1}{k!}$$ is not entirely helpful at all (Paraphrasing Tyler).

>[!theorem|*] Picard Lindelöf Existence and Uniqueness Theorem
>Let $A \subseteq \mathbb{R}^2$ be [[Open and Closed Sets|Open]] and $F: A \rightarrow \mathbb{R}$ be a [[Continuous Function]] on $A$ and $\forall \: t$ assume $F(t,y)$ is [[Lipschitz]] in $y$. Consider the Initial Value Problem (IVP): $$y'(t) = F(t,y(t)) \; \;\text{with}\; y(t_0) = y_0\; \; \text{where} \; (t_0,y_0) \in A$$Then $\exists \: \alpha>0$ so that the IVP has a solution $\forall \: t \in [t_0 - \alpha, t_0 + \alpha]$. Furthermore, the solution is unique.

>[!claim|*]- Proof
>`\begin{proof}`
>We can write the IVP as: $$y(t) = y_0 + \int_{t_0}^{t} F(s,y(s))\: ds \; \; \; \; \;(\star)$$It is easier to think about solving the above equation then the actual ODE. The proof has $4$ parts:
>1. Define a sequence of functions $y_n$.
>2. Show $y_n \rightarrow y$ uniformly on $[t_0- \alpha, t_0 + \alpha]$.
>3. Show $y$ is continuous (differentiable) and solves $(\star)$. 
>4. Show $y$ is the unique solution.
>
>The idea is that $A$ is open $\implies \exists \: \epsilon >0 : B_\epsilon (t_0,y_0) \subseteq A$. Then we want to show that there is some rectangle ($\exists \: a,b > 0$): $$\mathcal R^* = \{(t,y) \in \mathbb{R}^2: t_0 - a \le t \le t_0+ a, y_0-b \le y \le y_0+b\}$$The set $R^*$ is [[Compact]]. Thus by the [[Extreme Value Theorem]], $\exists \: k$: $$k = \text{max}\{|F(t,y)|:(t,y) \in R^*\}$$
>Let $\alpha = \text{min} \{a, \frac{b}{k}\}$, then define: $$\mathcal R = \{(t,y): t_0-a \le t \le t_0+a, y_0-b \le y \le y_0+b\} \subseteq \mathcal R^*$$Consider this the “geometric picture”.
>
>**Part 1**:
>Let: $$y_0(t) = y_0 \; \land \; y_n(t) = y_0 + \int_{t_0}^t F(s,y_{n-1}(s)) \: ds$$Now we must first show that we haven’t defined a bunch of nonsense (I.e. show $y_n(t) \in \mathcal{R}$). Let us check $y_1(t)$: $$|y_1(t) - y_0(t)| \; \text{focus on} \; t> t_0 = | \int_{t_0}^t F(s,y_0(s)) \:ds| \le \int_{t_0}^t |F(s,y_0(s))| \: ds \le \int_{t_0}^t k\: ds = k(t-t_0)$$So $y_1(t)$ is in the wedge created by $k|t_0-t|$. Inductively, if $y_n(t) \in \mathcal R$ for all $t \in [t_0, t_0 + \alpha]$. Then: $$|y_{n+1}(t) - y_0| \le |\int_{t_0}^t F(s,y_n(s)) \: ds| \le \int_{t_0}^t k \: ds = k(t-t_0)$$So $(t,y_{n+1}(t)) \in \mathcal R$ for all $T \in [t_0, t_0 + \alpha]$. Thus part $1$ is complete.
>
>**Part 2**:
>$$y_n(t) = y_0 + (y_1(t)-y_0) + \dots + (y_n(t) - y_{n-1}(t))$$For notation sake, let: $$\triangle y_n = y_n(t) - y_{n-1}(t)$$Then: $$y_n(t) = y_0 + \sum_{k=1}^n \triangle y_k(t)$$We want to show that this series converges. To do so, we will use the [[Weierstrass M-test]] with: $$M_n = \frac{k L^n(t-t_0)^n}{Ln!}$$Where $L$ is the [[Lipschitz]] constant. Let us show this works by classical induction. First, the base case: $$| \triangle y_1(t)| = |y_1(t) - y_0| \le k(t - t_0) \; \text{by the previous part}$$
>If $|\triangle y_n(t)| \le M_n$, then: $$|\triangle y_{n+1}(t)| = |y_{n+1}(t) - y_n(t)| = |y_0 + \int_{t_0}^t F(s,y_n(s)) \: ds - y_0- \int_{t_0}^t F(s,y_{n-1}(s))\: ds|$$By the [[Triangle Inequality]], we have: $$\le \int_{t_0}^t |F(s,y_n(s)) - F(s,y_{n-1}(s))| \: ds \le \int_{t_0}^t L|y_n(s) - y_{n-1}(s)| \: ds \le L \int_{t_0}^t \frac{kL^n}{Ln!}(s-t_0)^n \: ds$$Which is a trivial integral: $$= \frac{kL^{n+1}(t-t_0)^{n+1}}{L(n+1)!}$$Which is what we wanted. Now (with some handwaving), the series: $$\sum_{k=1}^\infty M_k \; \text{converges}$$Thus by the [[Weierstrass M-test]], $M_n(t)$ converges uniformly on $[t_0, t_0 + \alpha]$.
>
>**Part 3**:
>$y$ is continuous since $y_n(t)$ is continuous for each $n$. From this, we get that: $$y(t) = \lim_{n \rightarrow \infty} y_n(t) = \lim_{n \rightarrow \infty} (y_0 + \int_{t_0}^t F(s,y_{n-1}(s)) \: ds) = y_0 + \int_{t_0}^t F(s,y(s)) \: ds$$Thus we have showed existence of a solution.









