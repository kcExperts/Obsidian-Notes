
[[Sample Space]]
>[!theorem|1.1]
>The probability of the empty set $\emptyset$ is $0$. That is, $P(\emptyset) = 0$.

>[!theorem|1.2]
>Let $\{A_1, \dots , A_n\}$ be a mutually exclusive set of events. Then: $$P \left(\bigcup_{i=1}^n A_i\right) = \sum_{i=1}^n P(A_i) $$Interpret this as the finite version of Axiom $3$.

[[Unbiased]]
>[!theorem|1.3]
>Let $S$ be the sample space of an experiment. If $S$ has $N$ points that are all equally likely to occur, then for any event $A$ of $S$: $$P(A) = \frac{N(A)}{N}$$
>Where $N(A)$ is the number of points of $A$.

[[Basic Theorems in Probability]]
>[!theorem|1.4]
>For any event $A, P(A^c) = 1-P(A)$.
>
>I.e. The probability of the nonoccurrence of $A$ is equal to $1$ minus the probability of its occurrence.

>[!theorem|1.5]
>If $A \subseteq B$, then: $$P(B-A) = P(BA^c) = P(B)-P(A)$$

>[!corollary|1.5]
>If $A \subseteq B$, then $P(A) \le P(B)$.

>[!theorem|1.6]
>$$P(A \cup B) = P(A) + P(B) -P(AB)$$
>This is the $n=2$ case of the [[Inclusion-Exclusion Principle]].

>[!theorem|1.7]
>$$P(A) = P(AB) + P(AB^c)$$

[[Continuity of Probability Functions]]
>[!theorem|1.8] Continuity of the Probability Function
>For any increasing or decreasing sequence of events, $\{E_n, n \ge 1\}$, we have: $$\lim_{n \rightarrow \infty} P(E_n) = P(\lim_{n \rightarrow \infty} E_n)$$

[[Counting Principle]]
>[!theorem|2.1] Counting Principle
>If the set $E$ contains $n$ elements and the set $F$ contains $m$ elements, there are $nm$ ways in which we can choose, first, an element of $E$ and then an element of $F$. 

>[!theorem|2.2] Generalized Counting Principle
>Let $E_1, E_2, \dots, E_k$ be sets with $n_1, n_2, \dots, n_k$ elements, respectively. Then there are $n_1 \times n_2 \times n_3 \times \dots \times n_k$ ways in which we can, first, choose an element of $E_1$, then an element of $E_2$, then an element of $E_3$, $\dots$, and finally an element of $E_k$. 

[[Power Set]]
>[!theorem|2.3]
>A set with $n$ elements has $2^n$ subsets.

[[Permutations]]
>[!theorem|2.4]
>The number of distinguishable permutations of $n$ objects of $k$ different types, where $n_1$ are alike, $n_2$ are alike, $\dots$, $n_k$ are alike and $n = n_1+n_2 + \dotsi + n_k$ is: $$\frac{n!}{n_1! \times n_2! \times \dots \times n_k !}$$