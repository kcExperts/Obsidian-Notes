The following definition holds for any [[Topology|Topological Space]].
>[!def|*] Sequential Compactness
>A set $A$ is sequentially compact if every [[Sequences|Sequence]] contained in $A$ has a [[Subsequences|Subsequence]] that converges to a limit in $A$.

>[!example|*]- Determine whether the following are Sequentially Compact
>1. $A = (0,1)$
>	- Consider $x_n = \frac{1}{n}$ and all of its subsequences. They all converges to $0$ hence not Sequentially Compact.
>2. $B = \{\frac{1}{k}: k \in \mathbb{N}_+\} \cup \{0\}$
>	- It is sequentially compact as this set has $1$ cluster point, that being $0$.
>3. $C = \mathbb{N}$. 
>	- Take $x_n = n$, then $x_n \rightarrow \infty$ and all subsequences also go to infinity. Hence it is not sequentially compact.

>[!theorem|1] Closed and Bounded sets are Sequentially Compact
>Let $A \subseteq \mathbb{R}^d$. Then: $$A \: \text{is Sequentially Compact} \iff A \: \text{is Closed and Bounded}$$
>>[!claim|*]- Proof
>>`\begin{proof}`  We show implications both ways. Let us start with the reverse implication.
>>
>>$\impliedby$: Let $x_n \subseteq A$, $x_n$ is bounded, then by the [[Bolzano-Weierstrass Theorem]], $x_n$ has a convergent subsequence $x_{n_k}$. Since $x_{n_k} \subseteq A$ and $A$ is closed, then $\lim_{k \rightarrow \infty} x_{n_k} \in A$. 
>>
>>$\implies$: (Contradiction) Suppose $A$ is sequentially compact but that $A$ is not bounded. Then $\forall \: n \in \mathbb{N}, \exists \: x_n \in A: \rho (0,x_n) > n$. This sequence is unbounded, and has no convergent subsequences, which contradicts the definition of Sequential Compactness (as no subsequence of $x_n$ converges). Thus $A$ must be bounded.
>>Now suppose $A$ is sequentially compact but that $A$ is not closed. Then $\exists \: x \in A’$ with $x \in A^c$. Since $x$ is a [[Cluster Points|Limit Point]] of $A$, $\exists \: x_n \subseteq A$ with $x_n \rightarrow x \not\in A$. Hence all [[Subsequences]] of $x_n$ converge to $x$ by definition of [[Converging Sequences]]. But this contradicts the definition of sequential compactness (as the subsequences converge to a limit $x$ that is not contained in $A$).
>>`\end{proof}`

