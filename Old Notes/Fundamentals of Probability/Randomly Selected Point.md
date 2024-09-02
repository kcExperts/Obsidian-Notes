Consider a closed, open or both open and closed interval. If you were to choose a subinterval, what are the chances that a randomly chosen point lies in that subinterval? 

>[!def|*] Randomly Selected from an Interval
>A point is said to be randomly selected from an interval $(a,b)$ if any two subintervals of $(a,b)$ that have the same length are equally likely to include the point. The probability associated with the event that the subinterval $(\alpha, \beta)$ contains the point is defined to be: $$\frac{(\beta - \alpha)}{(b-a)}$$

>[!exm|1] A set that is not an event
>Let an experiment consist of selecting a point at random from the interval $[-1,2]$. We will construct a set that is not an [[Sample Space|Event]] (it is impossible to associate a probability with the set).
>
>Define an [[Equivalence Relation]] on $[0,1]$: $x ∼ y$ if $x -y \in \mathbb Q$ (It is trivial to prove that this is an equivalence relation). Define $Q = \{r_1, r_2, \dots: r_i \in [-1,1]\}$. Clearly, any combination of $x ∼ y$ will lie in $Q$. Hence $x-y \in Q$. As it is an equivalence relation, it partitions $[0,1]$ into **disjoint** [[Equivalence Classes]] $A_i$. Notice if $x \in A_i \; \land \; y \in A_j : i \ne j \implies x-y \not\in Q$ and is an irrational number. Since the set of rational numbers are countable, then the set $Q$ is countable and thus every equivalence relation is countable. However, $\cup_i A_i = [0,1]$ is uncountable, thus there are uncountably many equivalence classes.
>
>Let $E$ be the set consisting of exactly one point from each equivalence class $A_i$ which must exist by the [[Axiom of Choice]]. Let us show $E$ is not an event:
>
>`\begin{proof}`By Contradiction
>Suppose $E$ is an event, then let $p$ be the probability associated with $E$. $\forall \: n \in \mathbb{N}_+$, define: $E_n = \{r_n + x: x \in E\}$. Clearly $E_n$ is just a [[Translate]] (or Coset) of $E$, furthermore $E_n \subseteq [-1,2]$ (as any number from $[0,1]$ added to $[-1,1]$ will produce numbers in $[-1,2]$). Since $E_n$ is a translate, then: $P(E_n)=P(E) = p$. Notice:
> 1. $E_i \cap E_j = \emptyset$
> 2. $[0,1] \subset \cup_{n=1}^\infty E_n$. 
> 
> Then: $$\frac{1}{3} = P([0,1]) \le P \left( \bigcup_{n=1}^\infty E_n \right) \le 1$$Which holds by $2$. Since every $E_n$ is mutually exclusive (by $1$), we have: $$\frac{1}{3} \le \sum_{n=1}^\infty P(E_n) = \sum_{n=1}^\infty p \le 1$$Here $p$ is just a constant whose infinite sum lies between $1/3$ and $1$. Clearly, no such $p$ exists that can satisfy this relation (as the sum will either evaluate to $0$ or $\infty$ for any choice of $p$). Thus the above inequality does not hold and we have a contradiction. 
> 
> We conclude that $E$ is not an event and that we cannot associate a probability with the set.
> `\end{proof}`










