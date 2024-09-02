---
aliases:
  - Open
  - Closed
  - Metric Topology
---
The definition of an open set presented in the [[Topology]] section is inflexible. We need a new definition:

>[!def|*] Open Sets and Metric Topology
>Let $(\mathbb{R} ^d, \rho)$ be a [[Metric Space]]. There are multiple definitions for an open set: 
>1. A set $A \subseteq \mathbb{R}^d$ to be open if $\forall \vec x \in A, \exists \; r > 0 : B_r(\vec x) \subseteq A$. This is called the Metric Topology.
>2. A set $A \subseteq \mathbb{R}^d$ is open $\iff$ $A = \text{int}(A)$  where $\text{int}(A)$ are [[Interior Points]].
>
>>[!claim|*]- Proof that $1$ is a Topology
>>`\begin{proof}`
>>**Property 1**: $\mathbb{R}^d$ is open, since $\forall x \in \mathbb{R}^d$ and every $r > 0$, $b_r(x) \subseteq \mathbb{R}^d$.
>>$\emptyset$ is open. To show this, suppose for contradiction that it is not, then $\exists x \in \emptyset$ so that $B_r(x)$ is not a subset of $\emptyset$, but this contradicts $\emptyset$ being empty. 
>>
>>**Property 2**: Without loss of generality, prove for two open sets $U,V$ that $U \cap V$ is open. To do so, if $U\cap V = \emptyset$, then it is open by **Property 1**. If not, then $\exists \; x \in U \cap V$, $\text{i.e}$, $x \in U$ and $x \in V$. 
>>Since $U$ is open, $\exists \; r_u > 0: B_{r_u}(x) \subseteq U$ and since $V$ is open, $\exists \; r_v >0: B_{r_v}(x) \subseteq V$. Let $r = min\{r_u, r_v\} \implies B_r(x) \subseteq U \; \land \; B_r(x) \subseteq V$. Thus $B_r(x) \subseteq U \cap V \; \land \; U \cap V$ is open.
>>
>>**Property 3**: Let $A = \cup_\alpha U_\alpha$, take $x \in A \implies x \in U_\alpha$ for some $\alpha$. Since $U_\alpha$ is open, $\exists \; r >0: B_r(x) \subseteq U_\alpha$.
>> `\end{proof}` 

>[!def|*] Closed Set
>There are multiple definitions for a closed set. They are shown below:
>Let $(X,T)$ be a metric topology, then:
> 1. $A \subseteq X \; \text{is} \; \text{closed} \iff A^c \; \text{is} \; \text{open}$
> 2. $A \subseteq X \; \text{is} \; \text{closed} \iff A' \subseteq A$ where $A’$ is the set of [[Cluster Points]] of $A$.
> 3. $A \subseteq X\; \text{is} \; \text{closed}$ $\iff$ $\text{bd}(A) \subseteq A$ where $\text{bd}(A)$ is the set of [[Boundary Points]] of $A$.
> 4. $A \subseteq X \; \text{is closed} \iff \forall \: x_n \in A, \lim_{n \rightarrow \infty} x_n \in A$ where $x_n$ are [[Sequences]] whose terms are all contained in $A$. Note that the limits can be [[Cluster Points]], but they can also be [[Isolated Points]].
> 5. $A \subseteq X \; \text{is closed} \iff A = \overline A$. Where $\overline A$ is the [[Closure]] of $A$.
> 
>>[!claim|*]- Proof that $1 \iff 2 \iff 3$
>>Follows directly from the definition of [[Closure]].
>
>>[!claim|*]- Proof for **4** by Contradiction
>>`\begin{proof}` We show implication both ways:
>>$\implies$: Suppose, for contradiction, that $\exists \; x_n \in A: \lim_{n \rightarrow \infty} x_n \not\in A$. For notation, let $x= \lim_{n \rightarrow \infty} x_n$. Then $x \in A^c$. Since $A$ is closed, $A^c$ is open by definition. By openness, $\exists \; r > 0: B_r(x) \subseteq A^c$. Since $x_n \rightarrow x$, $\exists \; N \in \mathbb{N} : x_n \in B_r(x) \; \forall n \in \mathbb{N}$ ($\text{i.e}$ $x_n \in A^c$). This contradicts the fact that $x_n \subseteq A$. 
>>
>>$\impliedby$: Suppose, for contradiction, that every [[Converging Sequences|Converging Sequence]] in $A$ converges to a limit in $A$, but $A$ is not closed. 
>>Then $A^c$ is not open by definition. Thus $\exists \; y \in A^c: \forall r >0, \hat B_r(y) \cap A \ne \emptyset$. By Theorem 1 ([[Cluster Points]]), $y$ is a cluster point of $A$. Furthermore, $\exists \: x_n \subseteq A$ converging to $y$ with $x_n \ne y \; \forall n$. But this contradicts the assumption that every converging subsequence has a limit in $A$. 
>> `\end{proof}`

>[!rmk|*]- On the Topic of definition $4$ for Closed Sets 
>You may have noticed that this follows the general idea of being closed. Consider closure under addition of a [[Vector Space]]. We note that definition $4$ has an eerie resemblance to the definition of closure for vector spaces.

>[!rmk|*]- On the Topic of Open and Closed Sets
>Closed and Open are not opposites. Sets can be open, closed, both or neither. 

From now on, we assume all sets we work in are Metric Topologies. We also introduce some basic theorems (recall [[The r Ball]]):
#### Theorems and Propositions
>[!theorem]
>Let $A \subseteq \mathbb{R}^d$ be finite $\implies A$ is closed $\; \land \; A$ is not open.
>>[!claim|*]- Proof
>>`\begin{proof}` We show that both are true:
>>
>>**Closed**: To show closure, let $\vec y \in A^c$. Define: $$r = \frac{min(\rho(x,y))}{2} \; \; \forall \: \vec x \in A$$Thus we let our ball around $\vec y$ be half of the minimum distance between any $\vec y$ and $\vec x$. Thus $\vec x \not\in B_r (\vec y)$ and we conclude that: $$\forall \;\vec y \in A^c, \exists \; r > 0 : B_r(\vec y) \subseteq A^c$$We conclude that $A^c$ is open which implies that $A$ is closed, as desired.
>>
>>**Not Open**: $\forall \vec x \in A$ choose any $r >0$, then $B_r(\vec x)$ is infinite. Since $A \subseteq \mathbb{R}^d$ is finite, we must have that $\exists \; u \not\in A: u \in B_r(\vec x)$. This means that $B_r(\vec x) \not\subseteq A$, thus $A$ is not open, as desired.
>> `\end{proof}`

>[!theorem|2]
>$B_r(\vec x)$ is open $\; \land \;$ $B_r(\vec x)$ is not closed.
>>[!claim|*]- Proof
>>`\begin{proof}` We show both properties hold:
>>
>>**Open**: To show that it is open, we need to show that: $$\forall \; \vec y \in B_r(\vec x), \exists \: a> 0: B_a(\vec y) \subseteq B_r(\vec x)$$Since $\vec y \in B_r(\vec x)$, we have that $\rho (\vec x,\vec y) < r$. Now, $\exists \; a: \rho (\vec x,\vec y) + a = r$. Define $B_a (\vec y)$. We need to show that $B_a(\vec y) \subseteq B_r(\vec x)$. Let now $\vec z \in B_a(\vec y)$ be arbitrary. By the [[Triangle Inequality]]: $$\rho(\vec x,\vec z) \le \rho (\vec x,\vec y) + \rho (\vec y,\vec z)$$Since $\vec z \in B_a(\vec y)$, then $\rho (\vec y,\vec z) < a$ by definition, thus: $$\rho (\vec x,\vec z) < \rho(\vec x,\vec y) + a = r$$Since $\rho(\vec x,\vec z) < r$, then $\vec z \in B_r(\vec y)$. Since $\vec z$ was arbitrary, we have $B_a(\vec y) \subseteq B_r(\vec x)$. From this, we conclude, by definition, that $B_a(\vec y) \subseteq B_r(\vec x)$ is open which means that  $B_r(\vec x)$ is open, as desired.
>>
>>**Not Closed**: To show that it is not closed, we need to show that: $$\exists \: \vec h \in B_r(\vec x)^c, \forall s > 0: B_s(\vec h) \not\subseteq B_r(\vec x)^c$$Choose $\vec h \in B_r(\vec x)^c : \rho (\vec x ,\vec h) = r$. Define $B_s(\vec h)$ to be a ball with $s > 0$ around $\vec h$. 
>>
>>Let now $\vec y \in B_s(\vec h)$, then $\rho (\vec y, \vec h) < s$. Now recall that $B_s(\vec h)$ is a ball in $\mathbb{R}^d$ centered at $\vec h$. Then the ball extends in all directions, which includes the direction that approaches $\vec x$. Now choose: $$\vec u \in B_s(\vec h): \rho(\vec u, \vec x) < \rho(\vec x, \vec h)$$Which must exist $\forall \: s>0$ as $B_s(\vec h)$ is a ball in $\mathbb{R}^d$. It follows immediately that: $$\rho(\vec u, \vec x) < \rho(\vec x, \vec h) = r \implies \rho(\vec u, \vec x) < r$$But then $\vec u \not\in B_r(\vec x)^c$. Thus $B_s(\vec h) \not\subseteq B_r(\vec x)^c$ which means $B_r(\vec x)^c$ is not open, as desired.
>> `\end{proof}`

>[!proposition|1]
>We propose the following: 
>1. An arbitrary intersection of closed sets is closed
>2. A finite union of closed sets is closed
>
>>[!claim|*]- Proof
>>`\begin{proof}` We prove only the first.
>>
>>**Part 1**: Let $A_1, A_2 , \dots , A_n$ be closed sets. Then $A^c_1, A^c_2, \dots , A^c_n$ is open. We know that the union of open sets is open, thus: $$A_1^c \cup A_2^c \cup \dots \cup A_n^c \; \; \text{is \ open}$$By Demorgans Law: $$(A_1 \cap A_2 \cap \dots \cap A_n)^c \; \; \text{is \ open}$$Thus the intersection of closed sets is closed.
>> `\end{proof}`

#### Examples
>[!exm|1] 
>Consider: $$A = \{(x_1,x_2)\in \mathbb{R}^2 : x_2 = 0, 0 < x_1 < 1\} $$
>Determine if it is open, closed, clopen or neither.
>>[!claim|*]- Solution
>>The set is clearly not open. If this was in $\mathbb{R}$, this would be open. But in $\mathbb{R}^2$, a ball would include elements not in $A$. Let us show this rigorously.
>>
>>**Not Open**: Let $\vec x \in A \implies \forall r > 0, B_r(\vec x)$ contains points with $x_2 > 0$. More specifically, $(x_1, \frac{r}{2}) \in B_r(\vec x)$. Thus it is not open.
>>
>>**Not Closed**: We need to show $A^c$ is not open. To do so, let $\bar x = (0,0)$, then for any $r > 0$, let $\widetilde x_1 = min(\frac{1}{2}, \frac{r}{2})$, then $(\widetilde x_1,0) \in B_r(\vec 0) \cap A$. Thus $A^c$ is not open.

>[!exm|2] Less Rigorous
>Consider: $$B = \{(x_1, x_2) \in \mathbb{R}^2: x_2 = x_1^2\}$$Determine if it is open, closed, clopen or neither.
>>[!claim|*]- Solution
>>**Not Open**: Clearly any ball with center on the graph of radius $r$ contains other points not in $B$.
>>**Closed**: It is closed as for any ball not on $B$, we can choose $r$ such that only points in $B^c$ reside in our ball.

>[!exm|3]
>Show that: $$A = \{x \in \mathbb{Q}^c : -2 \le x \le 2\}$$
>Is not closed. (Find a limit that converges in $\mathbb{Q}$)
>>[!claim|*]- Solution
>>Take the general sequence: $$x_n = \frac{i}{n}$$where $i \in \mathbb{R} \backslash \mathbb{Q} \; \land \; -2 \le x \le 2$. Then $x_n \rightarrow 0$. Clearly $0 \not\in A$ thus by definition $4$ of closed sets, $A$ is not closed.
