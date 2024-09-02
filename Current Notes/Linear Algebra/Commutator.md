---
aliases:
  - Anticommutator
---

>[!def|*] Commutator
>Let $V$ be an $\mathbb{F}$ [[Vector Space]]. Let $T,S \in \mathcal L (V)$. The commutator of $S \; \land \; T$ is the map: $$[T,S] = TS- ST$$
>We say $S \; \land \; T$ commute if $[T,S]= 0$.

>[!def|*] Anticommutator
>For $S,T \in \mathcal L (V)$, the map: $$\{S,T\} = ST + TS$$is called the anticommutator of $S \; \land \; T$. Do note that it is NOT a set.
>We say $S \; \land \; T$ commute if $\{S,T\} = 0$. Note that $\{S,T\} = \{T,S\}$.

>[!rmk|*] Properties of Commutators
>Let $V$ be an $\mathbb{F}$ vector space. Let $a,b,c,d \in \mathbb{F} \; \land \; S,T, R \in \mathcal L (V)$, then:
>1. $[\cdot, \cdot]$ is bilinear. That is: $$\begin{array}{ccc} [aT_1+bT_2,S] = a[T1,S]+b[T_2,S]  \\ [T,cS_1+dS_2] = c[T,S_1] + d[T,S_2] \end{array}$$
>2. $[T,S] = -[T,S]$ (Anti-symmetric)
>3. $[T,T] = 0$.
>4. $[T,Id_v]$ =0
>5. $[T,S] = 0 \implies [p(T),q(S)] = 0$ $\; \; \forall p,q \in \mathcal P(\mathbb{F})$.
>6. $[R,[S,T]] + [S,[T,R]] + [T, [R,S]] = 0$ (Jacobi’s Identity)
>7. If $\text{dim}(V) < \infty \implies$ we can fix a basis for $V$: $$\begin{array}{ccc}  \widehat{[T,S]} = [\hat T, \hat S]\\ [A,B]^v = [A^v, B^v] \; \forall A,B \in \mathbb{F}^{\text{dim}(V)^2} \end{array}$$

>[!corollary|1]
>Let $T,S \in \mathcal L (V)$, then: $$[T,S] = 0 \iff [\hat T, \hat S] =0$$

>[!corollary|2]
>Let $T$ be an [[Isomorphism in Linear Algebra]], then: $$T \; \text{is isomorphic} \implies [T,T^{-1}] = 0$$



