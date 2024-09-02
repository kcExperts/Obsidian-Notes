
>[!def|*] Orthogonal Complement
>If $U$ is a [[Vector Subspace|Subspace]] of $V$, then the orthogonal complement of $U$, denoted $U^{\perp}$, is the set of all vectors in $V$ that are [[Orthogonal]] to every vector in $U$: $$U^\perp = \{v \in V : \forall \: u \in U, \langle u,v \rangle = 0\}$$

>[!rmk|*] Properties of the Orthogonal Complement
>1. $U \subseteq V \implies U^\perp$ is a [[Vector Subspace|Subspace]] of $V$.
>2. $\{0\}^\perp = V$
>3. $V^\perp = \{0\}$
>4. $U \subseteq V \implies U \cap U^\perp \subseteq \{0\}$
>5. $G \; \land \; H \subseteq V \; \land \; G \subseteq H \implies H^\perp \subseteq G^\perp$
>
>>[!claim|*]- Proof
>>`\begin{proof}`  We show all properties hold:
>>
>>**Part 1**: 
>>Suppose $U \subseteq V$, we show $U^\perp$ is a subspace of $V$. Clearly $0_v \in U^\perp$ as $0_v$ is [[Orthogonal]] to all vectors in $U$. Now suppose $v_1, v_2 \in U^\perp$ and let $u \in U$, then: $$v_1 + v_2 = \langle u,v_1 +v_2 \rangle = \langle u,v_1 \rangle + \langle u,v_2 \rangle = 0+0 = 0$$Hence $v_1 + v_2 \in U^\perp$. Now suppose $\alpha \in \mathbb{F}$, then: $$\alpha v = \langle u, \alpha v \rangle = \overline \alpha \cdot 0 = 0$$Hence $\alpha u \in U^\perp$. Thus $U^\perp$ is a [[Vector Subspace|Subspace]] of $V$.
>>
>>**Part 2**: 
>>Consider $\{0\}^\perp$. By definition of the [[Inner Product]], $\langle 0,v \rangle = 0 \; \forall v \in V$, hence $\{0\}^\perp = V$ as desired.
>>
>>**Part 3**:
>>Consider $V^\perp$. Let $w \in V^\perp$ and $v \in V$. Then $\langle w,v \rangle = 0 \iff v = 0$. Thus $v =0$ and $V^\perp = \{0\}$.
>>
>>**Part 4**: 
>>Let $U \subseteq V$, suppose $v \in U \cap U^\perp$. Clearly the only vector that can be in $U$ and is orthogonal to every vector in $U$ is $0$ by definition. Hence $v = 0$ and $U \cap U^\perp = \{0\}$.
>>
>>**Part 5**:
>>Suppose $G \subseteq H$. Now consider $H^\perp$. By definition: $$H^\perp = \{v \in V: \forall h \in H, \langle h,v \rangle = 0\}$$Since $G \subseteq H$, we must have $\forall g \in G \implies g \in H$. Hence if $\langle g,v \rangle = 0 \implies \langle h,v \rangle = 0$. Thus $G^\perp \subseteq H^\perp$ as desired.
>> `\end{proof}`

>[!theorem|1]
>Suppose $U$ is a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Subspace|Subspace]] of $V$, then: $$V = U \oplus U^\perp$$
>>[!claim|*]- Proof
>>`\begin{proof}` Suppose $v \in V$, and let $e_1, \dots , e_n$ be an [[Orthonormal Basis]] of $U$. We want to write $v$ as the sum of a vector in $U$ and a vector [[Orthogonal]] to $U$. Consider (similar to what we did in [[Bessel’s Inequality]]): $$v =\langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n + v -  \langle v,e_1 \rangle e_1 - \dots -  \langle v,e_n \rangle e_n$$Let the linear combination to the left of $v$ be $u$ and let the right side linear combination be $w$. (which includes the $v$ term). If $k \in \{1, \dots,n\}$, then: $$\langle w,e_k \rangle = \langle v,e_k \rangle - \langle v,e_k \rangle = 0$$Thus $w$ is orthogonal to every vector in $\text{span}(e_1, \dots, e_n)$ which shows that $w \in U^\perp$. Hence we have written $v = u + w$. Thus $V = U + U^\perp$. 
>>Recall from the properties of the orthogonal complement that $U \cap U^\perp = \{0\}$. Then by definition of a [[Direct Sum]], we have $V = U \oplus U^\perp$. 
>> `\end{proof}`

>[!corollary|1]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $U$ is a subspace of $V$. Then: $$\text{dim}(U^\perp) = \text{dim}(V) - \text{dim}(U)$$

>[!corollary|2]
>Suppose $U$ is a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Subspace|Subspace]] of $V$. Then: $$U = (U^\perp)^\perp$$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>![[Pasted image 20240310115055.png]]
>> `\end{proof}`

>[!corollary|3] Finding a $w \in U^\perp$
>Suppose we wanted to find $w \in U^\perp$. Then we apply: $$w = v- \left(\sum_{j=1}^m \langle v,e_j \rangle e_j  \right) $$Where $v \in V$ will produce $w \in U^\perp$.

>[!theorem|2]
>Suppose $U$ is a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Subspace|Subspace]] of $V$. Then: $$U^\perp = \{0\} \iff U = V$$
>>[!claim|*]- Proof
>>`\begin{proof}` We show implication both ways:
>>
>>$\implies$: Suppose $U^\perp = \{0\}$. Since $U$ is finite-dimensional, by Corollary $1$, we have that: $$(U^\perp)^\perp = \{0\}^\perp \implies U = V$$Which holds by the properties of the orthogonal complement.
>>
>>$\impliedby$: Suppose $U = V$, taking the orthogonal complement of both sides yields: $$U^\perp = V^\perp = \{0\}$$Which holds by the properties of the orthogonal complement.
>> `\end{proof}`

>[!example|1]-
>Suppose $V = \mathbb{R}^3$ and $U = \{(2,3,5)\}$, then $$U^\perp = \{(x,y,z) \in \mathbb{R}^3 : 2x+3y+5z = 0\}$$In other words, $U^\perp$ is the plane $2x+3y+5z=0$. This clearly makes sense (as you can verify by considering the [[Euclidean Inner Product]]).

>[!example|2]-
>If $V = \mathbb{R}^3$ and $U= \{(x,y,z) \in \mathbb{R}^3 : 2x+3y+5z = 0\}$, then: $$U^\perp = \{(2t,3t,5t) \in \mathbb{R}^3 : t \in \mathbb{R}\}$$Hence it is the normal to the plane.

