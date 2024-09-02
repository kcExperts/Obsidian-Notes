
>[!def|*] Closure of a Set
>The closure of a set $A$, denoted $\overline A$ is defined as: $$\overline A = A \cup A^{'}$$Where we recall that $A^{'}$ is the set of [[Cluster Points]].

>[!proposition|1] Todo proof
>$$\bar A = A \cup \text{bd}(A)$$
>>[!claim|*]- Proof
>>`\begin{proof}` We show inclusion both ways.
>>
>>$\subseteq$: 
>>  `\end{proof}`

>[!proposition|1] The Closure of a set if closed.
>Let $A \subseteq \mathbb{R}^d$, then $\bar A$ is [[Open and Closed Sets|Closed]].


Where $\text{bd}(A)$ are the [[Boundary Points]] of $A$.

>[!rmk|*]
>We note that we have $\bar A = A \cup A’ \; \land \; \bar A = A \cup \text{bd}(A)$. But these definitions **DO NOT IMPLY** that $A’ = \text{bd}(A)$
>
>Consider $A = (0,1) \cup \{2\}$, then $A’ = [0,1] \; \land \; \text{bd}(A) = \{0,1,2\}$.

>[!lemma|1]
>Let $A \subseteq F \subseteq \mathbb{R}^d$ with $F$ being [[Open and Closed Sets|Closed]] $\implies$ $A^{'} \subseteq F$
>>[!claim|*]- Proof by Contradiction
>>`\begin{proof}` Suppose not, then $\exists \; x \in A^{'} \cap F^c$. Since $F$ is closed, $F^c$ is open and $\therefore \exists \: r > 0$ such that $B_r(x) \subseteq F^c \subseteq A^c$. Then: $$B_r(x) \cap A = \emptyset$$But this directly contradicts the definition of a cluster point. 
>>Moral of the story, if you take a bigger set of a closed set, then the bigger set will contain the cluster points of the smaller closed set.
>> `\end{proof}`

>[!theorem|1]
>Let $A \subseteq \mathbb{R}^d$, then $\bar A$ is the smallest [[Open and Closed Sets|Closed]] set containing $A$. In other words:
>$\bar A$ is the intersection of all closed subsets containing $A$. That is $A = \cap_i F_i$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Let $\{F_i\}$ be the set of all closed sets containing $A$. We will show:
>>1. $\bar A \subseteq \cap_i F_i$ (taking intersection of all $F_i$) 
>>2. $\cap_i F_i \subseteq \bar A$
>>
>>**Part 1**: By Lemma 1: $\bar A \subseteq F_i \; \forall \: i \therefore \bar A \subseteq \cap_i F_i$ 
>>
>>**Part 2**: Since $\bar A$ is closed and $A \subseteq \bar A$. We have $\bar A \in \{F_i\}$, then $\cap_i F_i \subseteq \bar A$. We note the last part holds as, $A \cap B \subseteq A \; \land \; A \cap B \subseteq B$.
>>`\end{proof}`

>[!example|*] TODODODODOD
>Find the Cluster Points, Isolated Points, Interior Points and the Boundary Points for the following:
>1. $A = \{\frac{1}{k}: k \in \mathbb{N}_+\} \subseteq \mathbb{R}$
>2. $B = \{(x_1,x_2) \in \mathbb{R}^2 : 1 < x_1 < 2 \lor x_2 = -1\}$
>3. $C = \cup_{k=1}^\infty (\frac{1}{k+1}, \frac{1}{k})$
>
>>[!claim|*]- Solutions
>>**For A**:
>>Cluster Points: $A'= \{0\}$
>>Isolated Points $= A$
>>Interior Points: $\text{int}(A) = \emptyset$
>>Boundary Points: $\text{bd}(A) = A \cup \{0\}$
>>With this, we can determine if the set is open and if it is closed.
>>$A$ is **not open** as $A$ is not equal to its interior.
>>$A$ is **not closed** as it does not contain all of its cluster point or boundary point. We note $\{0\} \not\in A$.
>>
>>Rest is exercise (see discord)

