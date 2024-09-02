
>[!theorem|1]
>Any [[Power Series]] is $C^\infty (A; \mathbb{R})$ where $A$ is the interval of convergence.
>
>Note: This is trivial to prove.

>[!rmk|*]-
>Notice if: $$f(x) = \sum_{k=0}^\infty a_k(x-c)^k = a_0 + a_1(x-c)+ \dots$$Then $f(c) = a_0$. Now: $$\frac{df}{dx} (x) = \sum_{k=1}^\infty ka_k(x-c)^{k-1} = 1a_1 + 2a_2(x-c) + \dots$$Then $f’(c) = 1 \cdot a_1$. Inductively, we can find that: $$f^k(c) = k!a_k \implies a_k = \frac{f^k(c)}{k!}$$

>[!def|*] Taylor Polynomial
>Let $A \subseteq \mathbb{R}$ and $f \in C^\infty (A; \mathbb{R})$ and $c \in A$. The Taylor Polynomial of $f$ centered at $c$ of order $n \in \mathbb{N}$ is a function: $$S_n(x;c) = \sum_{k=0}^n \frac{f^k(c)}{k!}(x-c)^k$$Where the $c$ in $S_n(x;c)$ is there just so you know where it is centered at. The Taylor series of $f$ centered at $c$ is given by: $$\lim_{n \rightarrow \infty} S_n(x;c)$$