
>[!rmk|*]- Motivation
>$$\sum_{j=0}^\infty \frac{1}{2^j}=1 + \frac{1}{2} + \frac{1}{4} + \dots = 2$$Then we can call the sum S: $$S = 1 + \frac{1}{2}(1+\frac{1}{2}+\dots)$$
We notice the term inside the parenthesis is $S$: $$S = 1+ \frac{1}{2}S$$Which clearly gives $S$ = 2.
>
However, now we consider: $$\sum_{j=0}^\infty (-1)^j = 1-1+1-1+1-\dots$$Doing our same strategy, we get different possible values of $S$:
> - $S = \frac{1}{2}$
> - $S = 0$
> - $S = 1$
But then what breaks between the two series? 

>[!exm|*]- Playing with the Numbers
Consider: $$A =\sum_{j=0}^\infty \frac{(-1)^{j+1}}{j} = 1 - \frac{1}{2} + \frac{1}{3} - \dots =ln(2)$$We can rearrange the terms in the following way: $$L = 1+\frac{1}{3}-\frac{1}{2} + \frac{1}{5} + \dots$$Note that this sequence of numbers contains the same numbers as the sum A. But we can easily show that $L > 1 \implies L > ln(2)$. 
>
Interestingly, the sum $A$ can be “rearranged” (like $L$) to give any $x \in \mathbb{R}$.

>[!def|*] Sequence of Real Numbers
>For a sequence $a_k$ of real numbers:
>- $\sum_{k=1}^\infty a_k$ is the infinite series associated with $a_k$.
>- $S_n = \sum_{k=1}^\infty a_k$ is the $n^{th}$ partial sum.
>- $S_n$ is the sequence of partial sums.

>[!theorem|*] Convergence
>The series $\sum_{k=1}^\infty a_k$ converges if the sequence of partial sums $S_n$ converges. If $S_n$ diverges, then the series $\sum_{k=1}^\infty a_k$ diverges.

>[!exm]-
>Consider $\sum_{k=0}^\infty (-1)^{k+1} = 1-1+1-1+1-\dots$. We see: $$S_n = (1,0,1,0,\dots)$$Which clearly diverges.

>[!exm]- 
>Consider $\sum_{k=1}^\infty\frac{1}{k(k+1)}$. We can use partial fraction decomposition to get $\sum_{k=1}^\infty \frac{1}{k}-\frac{1}{k+1}$. Thus we have: $$S_n = \sum_{k=1}^\infty \frac{1}{k}-\frac{1}{k+1} = (1-\frac{1}{2})+(\frac{1}{2}-\frac{1}{3}) + \dots + \frac{1}{n} - \frac{1}{n+1} = 1-\frac{1}{n+1}$$We clearly see that $S_n \rightarrow 1$ as $n \rightarrow \infty$, thus $\sum_{k=1}^\infty\frac{1}{k(k+1)} = 1$.

























