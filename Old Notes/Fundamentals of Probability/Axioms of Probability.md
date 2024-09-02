In mathematics, statements need to be proved or a counterexample needs to be found. Like in (almost) all fields of mathematics, proofs in probability theory are done under the **Axiomatic Method**. In essence, all arguments are derived from statements so fundamental that they cannot be refuted.

>[!def|*] Probability Axioms
>Let $S$ be the [[Sample Space]] of a random phenomenon. Suppose that to each [[Sample Space|Event]] $A$ of $S$, a number denoted by $P(A)$ is associated with $A$. If $P$ satisfies the following axioms:
>1. $P(A) \ge 0$
>2. $P(S) = 1$
>3. If $\{A_1, A_2, A_3, \dots\}$ is a sequence of **countably infinite** mutually exclusive events $(A_iA_j = \emptyset \; \; \forall \: i \ne j)$, then: $$P \left(  \bigcup_{i=1}^\infty A_i \right) = \sum_{i = 1}^\infty P(A_i)$$
>
>Then $P$ is called a **Probability** and the number $P(A)$ is said to be the **Probability of A**.

>[!rmk|*]- Explanation
>In essence:
>1. Axiom $1$ states that the probability of the occurrence of an event is always nonnegative.
>2. Axiom $2$ guarantees that the probability of the occurrence of $S$ that is certain is $1$ (We could have chose any value here, say for example $100$ and interpret everything as percentages).
>3. Axiom $3$ states that for a sequence of mutually exclusive events, the probability of the occurrence of at least one of them is equal to the sum of their probabilities. (Stated otherwise: For every collection of mutually exclusive events, the probability of their union is the sum of the individual probabilities). 
>
>As an example for Axiom $3$. Consider the sample space $S$ of me being dead or me being alive denoted $S = \{D,A\}$. Clearly $A$ and $D$ are mutually exclusive, I can’t be dead and alive at the same time. If you are Schrodinger's cat, you have a $50\%$ chance of being alive or dead. Hence $P(A) = 0.5 \; \land \; P(D) = 0.5$. Hence: $$P(A \cup D) = P(S) = 1 = P(A) +P(B)$$Which is what we would expect. (See Theorem 2 on why this holds).

From the definitions, some obvious theorems follow:

>[!theorem|1]
>The probability of the empty set $\emptyset$ is $0$. That is, $P(\emptyset) = 0$.

>[!claim|*]- Proof
>Obvious statements are usually tricky to prove. The trick here is to use Axiom $3$. Furthermore, we have not shown that Axiom $3$ works for a finite union, only a countably infinite amount (Theorem 2 will prove this).
>`\begin{proof}` 
>We have: $$P(\emptyset) = P \left( \bigcup_{i=1}^\infty \emptyset_i \right) = \sum^\infty_{i=1} P(\emptyset_i) = P(\emptyset) + \sum_{i=2}^\infty P(\emptyset_i) \implies \sum_{i=2}^\infty P(\emptyset_i)  =0$$Hence we must have that $P(\emptyset) = 0$. 
> `\end{proof}`

>[!theorem|2]
>Let $\{A_1, \dots , A_n\}$ be a mutually exclusive set of events. Then: $$P \left(\bigcup_{i=1}^n A_i\right) = \sum_{i=1}^n P(A_i) $$Interpret this as the finite version of Axiom $3$.

>[!claim|*]- Proof
>We will use Theorem $1$ here.
>`\begin{proof}` 
>Let $\{A_1, \dots, A_n, \dots\}$ be a countable mutually exclusive set of events. Now suppose $\forall \: j > n$, we have $A_j = \emptyset$. Thus: $$P \left( \bigcup_{i=1}^n \right)=P \left( \bigcup_{i=1}^\infty \right) = \sum_{i=1}^\infty P(A_i) = \sum_{i=1}^n P(A_i) +\sum_{i=n+1}^\infty P(A_i)$$Notice $n+1 > n$. Then by Theorem $1$, we get: $$\sum_{i=1}^n P(A_i) +\sum_{i=n+1}^\infty P(A_i) =\sum_{i=1}^n P(A_i) + 0= \sum_{i=1}^nP(A_i)$$We conclude: $$P \left( \bigcup_{i=1}^n \right) = \sum_{i=1}^nP(A_i)$$Which is what we wanted
> `\end{proof}`
> 
> In particular, letting $n=2$ leaves us with: $$P(A_1 \cup A_2) = P(A_1)+P(A_2)$$

>[!corollary|1]- $0 \le P(A) \le 1$
>`\begin{proof}`
>Following from Theorem $2$, we note: $$1=P(S) = P(A \cup A^c) = P(A) + P(A^c)$$Hence removing $P(A^c)$ gives us the following inequality: $$P(A) \le 1$$Combining this with Axiom $1$ gets us: $$0 \le P(A) \le 1$$
>  `\end{proof}`

>[!exm|1]- Showing it is a probability
>Let the following be a [[Sample Space]]: $$S = \{w_1, \dots, w_n\}$$Let $p_1, \dots, p_n \in \mathbb{R}_+: \sum_{i=1}^n p_i = 1$. Let $P$ be defined on subsets of $S$ by $P(\{w_i\}) = p_i$ and: $$P(\{w_{1}, \dots, w_{l}\}) = p_{1} + \dots + p_{l}$$ Verify that $P$ defines a probability on the sample space $S$.
>
>`\begin{proof}` 
>We need to show that the [[Axioms of Probability]] hold. Thus we verify each one:
>
>**Axiom 1**: Verify $P(w_i) \ge 0$.
>We note $P(\{w_i\}) = p_i \in \mathbb{R}_+ \implies p_i \ge 0$ by definition. Hence the axiom is satisfied.
>
>**Axiom 2**: Verify $P(S) = 1$
>We have: $$P(S) = P(\{w_{1}, \dots, w_{n}\}) = p_{1} + \dots + p_{n} = \sum_{i=1}^n p_i = 1$$Hence this axiom also holds.
>
>**Axiom 3**:
>We have: $$\sum_{i=1}^n P(w_i) = \sum_{i=1}^n p_i = P(\{w_1, \dots, w_n\}) = P(S) = P(w_1 \cup \dots \cup w_n)$$Thus the final axiom holds.
>
>We conclude that $P$ satisfied the probability axioms.
> `\end{proof}`
