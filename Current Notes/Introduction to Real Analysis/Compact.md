
>[!rmk|1]- Motivation
>Compactness gives us the ability to turn infinite collections of open sets into finite collections of open sets that do essentially the same thing. Compact spaces can be very large but in a sense act like a finite space. This allows us to do many proofs in compact spaces.

The definitions and Theorems in [[Sequential Compactness]] should be in your mind as in a [[Open and Closed Sets|Metric Topology]], compact means sequentially compact and vice-versa.

>[!def|*] Compact
>A set $A$ is (topologically) compact if every open cover in $A$ has a finite [[Covers|Subcover]]. 

>[!rmk|2]- Explanation
>Essentially, $A \subseteq X$ is compact if, given any open [[Covers|Cover]] that set, we can extract a finite open subcover. That is, to check compactness of $A$, you have to take an arbitrary collection $\mathcal U_i$ of open sets that cover $A$ and prove that you can find finitely many $i_n : n \in \mathbb{N}$ so that $A \subseteq \cup _{k=1}^n \mathcal U_{i_k}$.

>[!exm|1]- Showing that a set is not Compact
>Consider the familiar set: $$A = \left\{\frac{1}{k}: k \in \mathbb{N}_+\right\} $$Now we know the set is not [[Open and Closed Sets|Closed]], hence it will not be topologically compact by Theorem 1 in [[Sequential Compactness]] (which holds as we are in a [[Open and Closed Sets|Metric Topology]]. However, let us prove that it is not compact a different way.
>
>`\begin{proof}` 
>To show a set is not compact, we need to show that we $\exists \; \mathcal U$ such that it has no finite subcover. The idea here will be to construct a open cover from $\mathcal U_i$ in such a way that removing one of them would result in a $\cup_ \alpha \mathcal U_ \alpha$ not covering $A$.
>
>To do so, we build the following: Let $\mathcal U = {\cup_ \alpha \mathcal U_ \alpha}$ where: $$\mathcal U_1 = \left\{  \left(  \frac{1}{2} , 2 \right) \right\} \; \land \; \; \forall \: n \ge 2, \; \mathcal U_n =  \left\{  \left(  \frac{1}{n+1} , \frac{1}{n-1} \right) \right\}$$Now we can notice that $\: \mathcal U$ defined this way means that every $\mathcal U_i$ contains exactly $1$ point of $A$. We also have that $\mathcal U$ is infinite. Hence if we try and remove $U_i$, then $\frac{1}{i} \not\in A$ and hence $A \not\subseteq \mathcal U$. Thus no finite subcover exists and we conclude that $A$ is not compact.
> `\end{proof}`

>[!exm|2]- Simple Example
>Consider the rather simple set: $$A = \{1,2,3\}$$This is clearly compact. You can see this by either noting that $A$ is [[Open and Closed Sets|Closed]] and [[Bounds|Bounded]] or by seeing that is has a finite subcover. 
>

Following from Example 2, it should be no surprise that the following holds:

>[!proposition|1]
>Every finite set is compact.




