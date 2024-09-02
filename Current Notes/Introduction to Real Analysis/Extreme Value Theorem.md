Let us now revisit an old friend.

>[!def|*] Extreme Value Theorem
>Let $A \subseteq \mathbb{R}^d$ be such that it is a compact set. Let $f: A \rightarrow \mathbb{R}^m$ be a continuous function, then:
>1. The image of my function $A$ under $f$: $$\mathcal I = \{f(a) \in \mathbb{R}^m : a \in A\}$$is a [[Compact]] subset of $\mathbb{R}^m$.
>2. If $m = 1 \implies \exists \: x, y \in A: f(x) \le f(a) \le f(y) \;\; \forall a \in A$
>
>>[!claim|*]- Proof
>>`\begin{proof}`
>>**Part 1**: Let $y_n \in \mathcal I$. By the definition of $\mathcal I$, $\exists \: x_n \in A : f(x_n) = y_n$. We will use the $x_n$ to be the corresponding sequence. So $x_n$ is a sequence in $A$. We know $A$ is sequentially, thus $\exists$ a subsequence $x_{n_k}$ that converges to a limit $c \in A$. Then since $f$ is continuous: $$\lim_{k \rightarrow \infty} f(x_{n_k}) = f(c) \in \mathcal I$$
>>$\therefore \mathcal I$ is compact
>>
>>**Part 2**: Since $\mathcal I \subseteq \mathbb{R}$ is compact by part $1$, it is closed and bounded, therefore $\exists \: u \in \mathbb{R}$ so that $u = \text{sup}(\mathcal I)$. Then $u$ is an upper bound of $\mathcal I$ and $\forall \: \epsilon > 0, \: \exists z \in \mathcal I : u-\epsilon < z \le u$. I.e. $\exists z \in \mathcal I : u- \epsilon < z < u + \epsilon$. Hence $|u-z| < \epsilon$. This is what it means to have an open ball in $\mathbb{R}$. Hence $z \in B_\epsilon (u)$. $\therefore u$ is a boundary point of $\mathcal I$. Since $U$ is closed $\iff$ $I = I \cup bd(I)$ which holds since $\mathcal I = \overline{\mathcal I}$ is $\mathcal I$ is closed (which it is).
>>$\therefore$ $u \in \mathcal I$ and $u = \text{max}(\mathcal I)$. Since: $$\mathcal I = \{f(a) \in \mathbb{R} : a \in A\}$$there must exist $y \in A$ so that $f(y) = u = \text{max}(\mathcal I)$. 
>>The case for the infimum follows.
>>  `\end{proof}`

>[!exm|*]
>- Let $A = \{1,2,3\}$. This is clearly compact.
>- Any function from $A$ to $\mathbb{R}^m$ is continuous (but why)? So any function has a max and min. So any function has a max and min. (See definition of continuity to see why $A$ is continuous)
>- $B = (-1,1)$, this is not a compact set. Find a continuous function $f: B \rightarrow \mathbb{R}$ with no max or min. $f(x) = x$ is an example.


