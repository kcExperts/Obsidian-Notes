>[!def|*] Harmonic Series
>The harmonic series is given by $\sum_{k=1}^\infty \frac{1}{k}$. 

One would think that the series would converge as the terms get smaller and smaller, but that is not the case.

>[!theorem|*] Divergence of the Harmonic Series
>We note that the harmonic series **diverges**.
>It does so very slowly (taking $10^{42}$ terms before $S_n > 100$).

>[!claim]- Proof for Divergence
>Consider the [[Integral Test]]. Doing the procedure gives us: $$\lim_{a \rightarrow \infty} \int_1^a  \frac{1}{k} dk = \lim_{a \rightarrow \infty} ln(a)$$which clearly diverges. Thus, we conclude that the original sum diverges.

>[!claim]- Proof for Divergence
>Consider the following partial sums: 
>- $S_1 = 1$
>- $S_2 = 1 + \frac{1}{2}$
>- $S_4 = 1+ \frac{1}{2} + \frac{1}{3} + \frac{1}{4}$
>- $\dots$
>
>We notice that for $S_4$, $\frac{1}{3} + \frac{1}{4} > \frac{1}{2}$. Thus $S_4 > 1 +\frac{2}{2}$. Repeating this procedure for $S_5$ to $S_8$ and so on so forth, we notice that the terms are greater than $\frac{1}{2}$. By induction, we have that $S_{2^k} \ge 1 + \frac{k}{2}$. The sequence $\sum_{k=1}^\infty 1+\frac{k}{2}$ diverges, thus $S_n$ diverges.


