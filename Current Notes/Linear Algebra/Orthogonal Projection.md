
>[!def|*] Orthogonal Projection
>Suppose $U$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Subspace|Subspace]] of $V$. The orthogonal projection of $V$ onto $U$ is the operator $P_U \in \mathcal L(V)$ defined as:
> - For each $v \in V$, write $v = u+w$, where $u \in U$ and $w \in U^\perp$. Then let $P_U(v) = u$. 
> 
> (Which exists as a consequence of Theorem 1 in [[Orthogonal Complement]])

>[!proposition|1]- $P_U$ is a Linear Map
>`\begin{proof}` We show $P_U$ satisfies additivity and homogeneity:
>For the proof, let $x_1,x_2 \in U \; \land \; \lambda \in \mathbb{F}$.
>
>**Additivity**: Let $v_1, v_2 \in V$. Then: $$P_U(v_1+v_2) = x_1+x_2 = P_Ux_1 + P_Ux_2$$
>Hence $P_U$ satisfies additivity.
>
>**Homogeneity**: Let $v \in V$. Then: $$P_U\lambda v = \lambda x = \lambda P_Ux$$Hence $P_U$ satisfies homogeneity. 
>
>We conclude that $P_U$ is linear.
> `\end{proof}`

>[!rmk|*] Properties of the Orthogonal Projection
>Suppose $U$ is a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Subspace|Subspace]] of $V$. Then:
>1. $P_U \in \mathcal L(V)$;
>2. $P_U(u) = u \; \; \forall \: u \in U$;
>3. $P_U (w) = 0 \; \; \forall \: w \in U^\perp$;
>4. $\text{range}(P_U) = U$;
>5. $\text{null}(P_U) = U^\perp$;
>6. $v - P_I(v) \in U^\perp \; \; \forall \: v \in V$;
>7. $P_U^2 = P_U$;
>8. $||P_U (v)|| \le ||v|| \; \; \forall \: v \in V$;
>9. If $e_1, \dots , e_n$ is an [[Orthonormal Basis]] of $U$ and $v \in V$, then: $P_U(v) = \langle v,e_1 \rangle e_1 + \dots + \langle v,e_m \rangle e_m$. 
>
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>**Part 1**:
>>We show $P_U$ is a linear map. To do so, let $v_1, v_2 \in V$. Then: $$v_1 = u_1 + w_1 \; \land \; v_2 = u_2 + w_2 \implies v_1 + v_2 = u_1 + u_2 + w_1 +w_2$$Hence: $$P_U(v_1+v_2) = u_1+u_2 = P_U(v_1) + P_U(v_2)$$Thus $P_U$ satisfies additivity. Now let $\alpha \in \mathbb{F}$. It is clear that: $$\alpha v = \alpha u + \alpha w = \alpha (u+w)$$Hence: $$P_U(\alpha v) = \alpha u = \alpha P_U(v)$$Thus $P_U$ satisfies homogeneity.
>>
>>**Part 2**:
>>Suppose $v \in U$. Then $v = u + w \implies v = u + 0 \implies v = u$. Hence: $$P_U(v) =P_U (u) = u$$
>>**Part 3**: 
>>Suppose $v \in U^\perp$. Then $v = u+w \implies v = 0 + w \implies v =w$. But $P_U$ maps $v$ to the $u \in U$ that it corresponds to, hence: $$P_U(v) = P_U(w) = 0$$
>>**Part 4**:
>>If we want to show that $\text{range}(P_U) = U$, it suffices to show that $P_U$ is an [[Surjective]] function. Thus we show $\forall u \in U, \exists v \in V : P_U(v) = u$. Clearly, setting $v \in U$ produces $v = u$ and thus $P_U(u) = u$ by part $2$. Thus $P_U$ is surjective and thus $\text{range}(P_U) = U$.
>>
>>**Part 5**:  
>>We need to show that $\text{null}(P_U) = U^\perp$. Suppose $w \in U^\perp$ is arbitrary, then: $$v \in \text{null}(P_U) \iff v = 0+w \iff v =w \in U^\perp \iff v \in U^\perp$$Since this is an $\iff$, we automatically have $\text{null}(P_U) = U^\perp$. 
>>
>>**Part 6**:
>>We show: $v - P_U(v) \in U^\perp \; \; \forall \: v \in V$. Recall that $v = u+w \implies v-u = w$. However, $w \in U^\perp$ thus $v-u \in U^\perp$. By definition of $P_U$, we have that $P_U(v) = u$. Thus: $$v-u \in U^\perp \implies v - P_U(v) \in U^\perp$$
>>**Part 7**:
>>We show: $P_U^2 = P_U$. Now $P_U^2 (v)= P_U \circ P_U (v)$. With this, it is clear that: $$P_U^2 (v)= P_U \circ P_U (v) = P_U(P_U(v)) = P_U(u) = u$$which holds by part $2$. 
>>
>>**Part 8**:
>>We show: $||P_U (v)|| \le ||v|| \; \; \forall \: v \in V$. To do so, we highlight the fact that $v = u+w$. Thus $||v||^2 = ||u+w||^2 = ||u||^2 + ||w||^2$ which holds by the [[Pythagorean Theorem]]. Hence: $||v||^2 \ge ||u||^2 \implies ||v|| \ge ||u||$ which holds as the [[Norm]] is never negative. Clearly: $$||P_U(v)|| = ||u|| \le ||v||$$
>>**Part 9**: Let $e_1, \dots , e_n$ be an orthonormal basis of $U$. Consider (similar to what we did in [[Bessel’s Inequality]] and for Theorem 1 in [[Orthogonal Complement]]): $$v =\langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n + v -  \langle v,e_1 \rangle e_1 - \dots -  \langle v,e_n \rangle e_n$$Let the linear combination to the left of $v$ be $u$ and let the right side linear combination be $w$. (which includes the $v$ term). We know that $w$ is orthogonal to $u$. Hence: $v = u+w$. From this, we clearly have: $$P_U(v) = u = \langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n$$as desired.
>> `\end{proof}`

>[!rmk|*] Alternate formula for $v$
>If $e_1, \dots , e_n$ is an [[Orthonormal Basis]] for a subspace $U$. Then: $$P_U(v) = \sum_{j=1}^m \langle v,e_j \rangle e_j$$
If you wish to find another formula for $P_U(v)$, see [[Riesz Representation Theorem]].

>[!rmk|*] Intuition
>Consider the following image:
>![[Pasted image 20240310121648.png]]
>Then $P_U (v)$ is the closest point in $U$ to $v$. Think about it, using $V = U \oplus U^\perp$, one can clearly build $2$ orthogonal vectors that add up to $v \in V$. It is clear that we would end up with a configuration identical to the image above. $P_U(v) = u$ gives nothing but the vector that is orthogonal to $U^\perp$ such that it crosses $v$.
>
>From this, it might seem clear that $P_U$ might be useful in [[Minimizing Distance to a Subspace]].

With this, we can develop a new proof and definition for the [[Riesz Representation Theorem]]. 

##### Exercises
>[!exercise|1]
>Let $V$ and $W$ be $\mathbb{F}$ [[Vector Space|Vector Spaces]]. Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Let $T \in \mathcal{L}(V,W)$. Denote $K = \text{null}(T) \; \land \; R = \text{range}(T)$. Show that: $$T = TP_{k^\perp} = P_RT$$
>>[!claim|*]- Solution
>>`\begin{proof}` We will show $T = TP_{K^\perp}$ and $T = P_RT$.
>>
>>**Part 1**: We show $T = TP_{K^\perp}$. To do so, we recall by Theorem 1 in [[Orthogonal Complement]] ($V$ is finite-dimensional) that: $$V = K \oplus K^\perp$$Define $v \in V \; \land \; x \in K \; \land \; w \in K^\perp$. Thus $P_{K^\perp}(v) = w \; \land \; Tx = 0$. Hence: $$Tv = T(x+w) = Tx + Tw = 0 + Tw = Tw = TP_{K^\perp}(v)$$Thus $T = TP_{K^\perp}$ as desired.
>>
>>**Part 2**: We will show $T = P_RT$. Now note $\forall \: v \in V$, we have $Tv \in R$. Now: $$W = R\oplus R^\perp$$Let $w \in W \; \land \; a \in R \; \land \; b \in R^\perp$. Clearly $Tv = a$ and $P_R(w) = a$. Hence $P_R$ must be the identity operator. Hence $P_R Tv = Tv \implies $P_R T =T$ as desired.
>>  `\end{proof}`

>[!exercise|2]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $U \subseteq V$. Show that $P_{U^\perp} = Id - P_U$.
>>[!claim|*]- Proof
>>`\begin{proof}` As usual, we have (since $V$ is finite-dimensional): $$V = U\oplus U^\perp$$Let $v \in V, x \in U \; \land \; w \in U^\perp$. Hence: $$Id(v) = v = x+w = P_U(v) + P_{U^\perp}(v) \implies Id = P_U + P_{U^\perp}$$Rearranging gives $P_{U^\perp} = Id - P_U$ as desired.
>>  `\end{proof}`




