---
aliases:
  - Orthonormal Linear Combination
---
I suppose at this point you might be asking yourself, why bother with any of this? Without spoiling the surprise, [[Minimizing Distance to a Subspace]] gives a surprising use for the things we will learn.

>[!def|*] Orthonormal
>A list of vectors is called orthonormal if each vector in the list has [[Norm]] $1$ and is [[Orthogonal]] to all other vectors in the list, that is: $$e_1, \dots , e_n \; \text{orthonormal} \iff ||e_i|| = 1 \; \forall \: i \in [1,n]\; \land \; \langle e_k,e_j \rangle =\begin{cases} 1 & j=k\\ 0 & j \ne k \end{cases}$$
>
>The [[Standard Basis]] of $\mathbb{F}^n$ forms an orthonormal list. 
>

>[!def|*] Orthonormal Linear Combinations
>Suppose $e_1, \dots, e_n$ is an orthonormal list in $V$. Then: $$|| \lambda_1 e_1 + \dots + \lambda_ne_n||^2 = |\lambda_1|^2+\dots + |\lambda_n|^2$$$\forall \; \lambda_1, \dots, \lambda_n \in \mathbb{F}$.
>>[!claim|*]- Proof
>>`\begin{proof}`  Suppose we have $|| \lambda_1 e_1 + \dots + \lambda_n e_n||^2$. Applying the [[Pythagorean Theorem]] repeatedly, we have: $$|| \lambda_1 e_1 + \dots + \lambda_ne_n||^2 = ||\lambda_1 e_1|| ^2 + \dots + ||\lambda_ne_n||^2$$Since $e_1, \dots , e_n$ has [[Norm]] $1$, then it follows that: $$||\lambda_1 e_1|| ^2 + \dots + ||\lambda_ne_n||^2 = ||\lambda_1||^2 + \dots + ||\lambda_n||^2$$Which by properties of the norm becomes: $$|\lambda_1|^2 + \dots+ |\lambda_n|^2$$As desired.
>> `\end{proof}`

>[!proposition|1]- Orthonormal Lists are Linearly Independent
>`\begin{proof}` Let $e_1, \dots , e_n$ be an orthonormal list in $V$. Consider: $$\lambda_1 e_1 + \dots + \lambda_n e_n = 0$$with $\lambda_i \in \mathbb{F}$. By the orthonormal linear combination, we have: $$||\lambda_1 e_1 + \dots + \lambda_n e_n|| ^2 = ||0||^2 \implies |\lambda_1|^2 + \dots + |\lambda_n|^2 =0$$Hence we must have $\lambda_1 = \dots = \lambda_n = 0$. We conclude $e_1, \dots , e_n$ is [[Linearly Independent]].
> `\end{proof}`

>[!exm|*]- Periodic Phenomena
>The list: $$\frac{1}{\sqrt{2\pi}}, \frac{cos\:x}{\sqrt \pi},\dots ,\frac{cos\:nx}{\sqrt \pi}, \frac{sin\:x}{\sqrt \pi}, \dots, \frac{sin \: nx}{\sqrt \pi}$$is orthonormal in $C[-\pi,\pi]$ (where $C$ is the [[Vector Space]] of all continuous real-valued functions on $[-\pi, \pi]$) with [[Inner Product]] is defined as: $$\langle f,g \rangle = \int_{-\pi}^\pi fg$$This list is often used for modeling periodic phenomena such as tides.

We now explore the important inequality known as [[Bessel’s Inequality]].
