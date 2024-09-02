---
aliases:
  - Invertible Linear Map
---

>[!definition|*] Invertible
>A linear map $T \in L(v,W)$ is called invertible if $\exists \; S \in L(W,V): ST = I_V$  and $TS = I_W$. The linear map $S$ is called the inverse of $T$ and is denoted $T^{-1}$.

>[!lemma|*]- The inverse of a linear map is unique.
>`\begin{proof}` Suppose on the contrary that for $T \in L(V,W), \exists \; S_1 \; \land \; S_2:$ they are both inverses of $T$: $S_1 \ne S_2$. Then: $$S_1 = S_1I = S_1(TS_2) = (S_1T)S_2 = IS_2 = S_2$$Thus the inverses are equal, which is a contradiction to our initial assumption that they were not. We conclude then that the inverses are unique. 
> `\end{proof}`

>[!theorem]- Invertibility $\iff$ [[Injective|Injectivity]] and [[Surjective|Surjectivity]]
>`\begin{proof}`  Since this is $\iff$ statement, we show both ways:
>
>$\implies$: Suppose $T \in L(V,W) \; \land \; T^{-1} \in L(W,V)$. We show injectivity: $$Tv_1 = Tv_2 \implies T^{-1}Tv_1 = T^{-1}Tv_2 \implies v_1= v_2$$
>Thus injectivity holds. To show surjectivity, we must show $\forall w \in W, \exists \; v \in V: T(v) = w$. To do so, let $v = T^{-1}w$ where $v \in V \; \land \; w \in W$: $$T(v)=T(T^{-1}w) = (TT^{-1})w = Iw = w$$
>Thus surjectivity holds.
>
>$\impliedby$: Suppose $T \in L(V,W)$: $T$ is injective and surjective. Because $T$ is [[Bijective]], define $S(w)$ to be the unique element of $V$: $T(S(w)) = w$. We need to show that $S$ is indeed the inverse and that $S$ is linear. We begin by showing that $S$ is the inverse map of $T$:$$(S\circ T)v = (S(T(v)) = S(w) \;\:\text{by injectivity of}\;\:T = v \;\:\text{by definition of}\;\:S$$
>Then $(S \circ T)v = v \implies ST = I$. Showing $TS = I$ will be left as an exercise. Now we show that $S$ is linear: $$w_1+w_2 = TS(w_1+w_2) = TSw_1 + TSw_2 = T(Sw_1 + Sw_2)$$Thus $S(w_1) + S(w_2)$ is the unique element of $V$ that $T$ maps to $w_1 + w_2$.
>Similarly for scalar multiplication: $$\lambda w= TS(\lambda w) = T(\lambda Sw) = \lambda TSw$$
>Thus $\lambda S(w)$ is the unique element of $V$ that $T$ maps to $\lambda w$. We conclude that $S \in L(W,V)$. 
>`\end{proof}`

>[!theorem]- Let $V,W$ be [[Finite-Dimensional Vector Space|Finite-Dimensional]]: $\text{dim}(V) = \text{dim}(W)$. Then: $T \; \text{is invertible} \iff T \; \text{is injective} \iff T \; \text{is surjective}$
>`\begin{proof}` We show $a \implies b \implies c \implies a$.
>
>$a \implies b$: Suppose $T$ is invertible, then by the theorem 1, it is a bijection and thus is injective.
>
>$b \implies c$: Suppose $T$ is injective, then $\text{dim}(\text{ker}(T)) = 0$. By the [[Fundamental Theorem of Linear Maps]], we have: $$\text{dim}(V) = \text{dim}(\text{range}(T)) = \text{dim}(W)$$Thus $\forall \; v \in V$, $T(v)$ maps to all of $W$, thus it is surjective.
>
>$c \implies a$: Suppose $T$ is surjective, it is clear that $\text{range}(T) = W$. By the [[Fundamental Theorem of Linear Maps]], we have: $$\text{dim}(V) = \text{dim}(W) + \text{dim}(\text{null}(T)) \implies \text{dim}(\text{null}(T)) = 0$$
>Thus $T$ is also injective. Since $T$ is both surjective and injective, it is invertible by theorem 1.
> `\end{proof}`

>[!theorem|3]- Suppose $\text{dim}(V) = \text{dim}(W)$ where they are both [[Finite-Dimensional Vector Space|Finite-Dimensional]], then $ST = I \iff TS = I$.
>`\begin{proof}` We show both implications hold true:
>
>$\implies$: Suppose $ST = I$, to show $TS = I$, we need to show that $S$ is the inverse of $T$. By the previous theorem, since $\text{dim}(V) = \text{dim}(W)$, we only need to show that $T$ is injective or surjective for $T$ to be invertible. We will show $T$ is injective. 
>To do so, we recall Theorem 1 in [[Null Space]] and we suppose that, for the sake of contradiction, that $\text{null}(T) \ne \{0\}: \exists \: v \in \text{null}(T): v \ne 0$, then: $$v = Iv = ST(v) = S(Tv) = S(0_w) = 0_v$$Which holds as a linear transformation always maps $0$ to $0$. Thus $v = 0$ which contradicts the fact that it is non-zero. We conclude $\text{null}(T) = \{0\}$ and that $T$ is injective, hence it is invertible. Since $ST = I$, $S = T^{-1}$, thus $TS = I$ by definition.
>
>$\impliedby$: We follow the same steps as the forward implication. Suppose $TS = I$, then we show that $\forall w \in W : w \in \text{null}(S) \implies w =0$. To do so: $$w = Iw = TS(w) = T(S(w)) = T(0) = 0$$Thus $w = 0$ which implies $\text{null}(S) = \{0\}$, thus $S$ is injective and is invertible. Since $TS = I$, $T = S^{-1}$ and we must have that $ST = I$ by definition.
> `\end{proof}` 

We follow our discussion the section labelled [[Isomorphism in Linear Algebra]].

##### Exercises
>[!exercise|1]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $\text{dim}(V) >1$. Prove that the set of noninvertible [[Linear Maps]] from $V$ to itself is not a subspace of $\mathcal L(V)$.
>>[!claim|*]- Proof by Construction
>>`\begin{proof}` Let $\mathcal N(V)$ denote the set of noninvertible linear maps from $V$ to itself. Let $T \in \mathcal N(V)$, since $T$ is not invertible and $T: V \rightarrow V$ and since $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], then by Theorem 2, $T$ is not injective or surjective. 
>>
>Let $v_1, \dots, v_n$ be a basis for $V$.
>>Now consider: $$T_1 : T_1(v_1) = 0 \; \land \; T_1(v_i) = v_i \; \forall \: i = 2,\dots,n$$$$T_2 : T_2(v_1) = v_1 \; \land \; T_2(v_i) = 0 \; \forall \: i = 2,\dots,n$$Clearly $T_1 + T_2$ produces the unique invertible basis mapping $B$. Which maps a basis vector on $V$ back to itself. But $T_1$ is not injective as $T_1(v_1) = 0$ and $T_2$ is not injective as $T_2(v_i) = 0 \; \forall \: i \ne 1$. But $T_1 + T_2 \not\in \mathcal N(V)$, thus $\mathcal N(V)$ is not closed under addition and thus is not a vector subspace of $L(V,W)$.
>> `\end{proof}`

>[!exercise|2] Quiz Question
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $S,T,U \in \mathcal{L}(V)$ and $STU = I$. Show that $T$ is invertible and that $T^{-1} = US$. 
>>[!claim|*]- Proof
>>`\begin{proof}` Since $S,T,U \in \mathcal{L}(V)$ and $V$ is finite-dimensional, showing that any of them are either injective or surjective will mean that they are invertible by Theorem 2. First we show that $U$ is invertible by showing $\text{null}(U) = \{0\}$. To do so, suppose $v \in \text{null}(U)$: $$v = Iv = STU(v) = S(T(Uv)) = S(T(0)) = S(0) = 0$$Thus $v =0$ and $\text{null}(U) = 0$. We conclude that $U$ is invertible. Since $STU = I$, we conclude $U^{-1} = ST$. Since we are in $\mathcal{L}(V)$: $$I = UU^{-1} = UST$$Now let $v \in \text{null}(T)$, then: $$v = Iv = UST(v) = US(Tv) = US(0) = U(0) = 0$$Thus $\text{null}(T) = 0$ and $T$ is injective and hence invertible. Since $UST = I$, we must have that $T^{-1} = US$, which is as desired.
>> `\end{proof}`



