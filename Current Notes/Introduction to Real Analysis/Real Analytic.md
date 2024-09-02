
>[!def|*] Real Analytic
>Let $A \subseteq \mathbb{R}$ and $f \in C^\infty (A; \mathbb{R})$ and $c \in A$. Then $f: A \rightarrow \mathbb{R}$ is Real Analytic of $c$ if:
>1. The Taylor Series has a [[Radius of Convergence]] $R > 0$.
>2. The function is equal to its Taylor series on an interval $\mathcal I$ of positive length containing $c$. In particular, $\lim_{n \rightarrow \infty} S_n = f$ pointwise on $\mathcal I$. 
>
>Alternatively, we say $f$ is Real Analytic of $c$ if:
>1. $E_n \rightarrow 0$ pointwise on $\mathcal I$.

>[!def|*] Error Function $E_n$
>The error function $E_n(x;c)$ is defined as: $$E_n(x;c) = f(x) - S_n(x;c)$$

See [[Lagrange’s Remainder Theorem]] for examples on showing whether a function is real analytic or not.