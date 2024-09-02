---
aliases:
  - Linear Map
---

>[!def|*] Linear Map
>A linear map from a [[Vector Space|V.S]] $V$ to $W$ is a function $T:V \rightarrow W$: $\forall \lambda \in \mathbb{F} \;\land \; \forall u,v \in V$:
>1. **Additivity**: $T(u+v) = Tu + Tv$
>2. **Homogeneity**: $T(\lambda v) = \lambda Tv$
>
>We denote the set of a linear maps from $V$ to $W$ as $\mathcal{L}(V,W)$.

>[!theorem|*]- $\mathcal{L}(V,W)$ is a Vector Space
>`\begin{proof}` Remember that if we can show that $\mathcal{L}(V,W)$ is a [[Vector Subspace]] of some vector space, then it itself will be a [[Vector Space]]. All that is left to do is find a suitable vector space. On that note, consider the vector space: $V^W$ which is the set of all functions from $V$ to $W$. We show that $\mathcal{L}(V,W)$ is a subspace of $V^W$: 
>
>**Zero**: The zero element of $V^W$ is the mapping $O: V \rightarrow W: O(v) = 0_w \; \forall v \in V$.
>We show that this map is linear: $$O(v+u) = 0 =0+0 = O(v) + O(u) \; \land \; O(\lambda v) = 0 = \lambda 0 = \lambda O(v)$$Thus $O \in \mathcal{L}(V,W)$ as desired.
>
>**Closure +**: Let $S,T \in \mathcal{L}(V,W)$, thus: $$(S+T)(v) = S(v) + T(v) \in \mathcal{L}(V,W)$$
>**Closure** $\cdot$ : Let $T \in \mathcal{L}(V,W) \; \land \; \lambda \in \mathbb{F}$, thus: $$\lambda T(v) = T(\lambda v) \in \mathcal{L}(V,W)$$We have shown that all properties hold, thus $\mathcal{L}(V,W)$ is a vector subspace and by definition, is a vector space. 
>  `\end{proof}`

>[!theorem|*] Linear Map Lemma
>Suppose $v_1, \dots, v_n$ is a [[Basis]] for $V \; \land \; w_1, \dots, w_n$ is a basis for $W \implies$ $\exists$ a unique $T: V \rightarrow W: Tv_j = w_j \; \forall \; j = 1, \dots, n$.
>>[!claim|*]- Proof
>>`\begin{proof}` We need to show that such a map exists and that is it unique. We first show existence:
>>
>>First define $v,u \in V:$ $v =\lambda_1 v_1 + \dots + \lambda_n v_n \; \land \;$u = $\alpha_1 v_1 + \dots + \alpha_n v_n$. 
>>Now: $$T(v+u) = T((\lambda_1 + \alpha_1)v_1 + \dots +(\lambda_n+v_n)v_n)$$$$= (\lambda_1 + \alpha_1)w_1 + \dots +(\lambda_n+v_n)w_n = \lambda_1w_1 + \alpha_1 w_1 + \dots + \lambda_n w_n + \alpha_n w_n$$
>>$$= \lambda_1w_1 + \dots + \lambda_nw_n + \alpha_1w_1 + \dots + \alpha_n w_n = T(v) + T(u)$$
>>Now we show homogeneity: $$T(\alpha v) = \alpha \lambda_1 w_1 + \dots \alpha \lambda_n w_n = \alpha(\lambda_1w_1 + \dots + \lambda_nw_n) = \alpha T(v) $$Thus we have shown that $T$ is a linear map. Now we show it is unique.
>>
>>Suppose, for the sake of contradiction, that $T$ is not unique, that is, $\exists \; T_1, T_2: T_1 v_j = w_j \; \land \; T_2 v_j = w_j \; \forall \; j = 1, \dots, n$. Clearly: $$T_1v_j = w_j = T_2v_j$$Note that both $T_1 \; \land \; T_2$ take in $v_j$ and map to $w_j$ for arbitrary $j$. Thus both mappings map the same domain vector to the same range vector. Alternatively, we have:$$T_1v_j = T_2v_j \implies T_1v_j v_j^{-1} = T_2 v_j v_j^{-1} \implies T_1 = T_2$$Thus $T_1 = T_2$ as desired.
>> `\end{proof}`

>[!def|*] Operations on $\mathcal{L}(V,W)$
>Let $S,T \in L(V,W)$ $\land$ $\lambda \in \mathbb{F}$.  Define $+$ and $\cdot$ on $L(V,W)$ as the following:
> - $+$ : $(S+T)(v) = Sv + Tv$
>- $\cdot$ : $(\lambda T)(v) = \lambda (Tv)$

>[!def|*] Product of Linear Maps
>Let $T \in \mathcal{L}(U,V) \; \land \; S \in \mathcal{L}(V,W)$. The product $ST \in \mathcal{L}(U,W)$ is defined $\forall u \in U$: $$(ST)(u) = (S\circ T)(u) = S(Tu)$$Following from [[Function Composition]] and linear maps, we have:
>- Associativity: $(T_1 T_2) T_3 = T_1 (T_2 T_3)$
>- Identity: $T I_v = I_w T = T$
>- Distributivity:  $(S1+S2)T = S_1 T + S_2 T \; \land \; S(T_1+T_2) = ST_1 + ST_2$

>[!lemma|*]- If $T \in \mathcal{L}(V,W) \implies T(0) = 0$
>`\begin{proof}` $$T(0) = T(0+0) = T(0) + T(0)$$$$T(0)+ (-T)(0)=T(0)+T(0) +(-T)(0) \implies 0 = T(0)$$
> `\end{proof}`

#### Exercises
>[!exercise]
>Prove that if $\text{dim}(V) = 1 \; \land \; T \in \mathcal{L}(V) \implies \exists \; \lambda \in \mathbb{F}: Tv = \lambda v \; \: \forall \; v \in V$
>>[!claim|*]- Proof
>>`\begin{proof}` Since $\text{dim}(V) = 1$, we let $v$ be a basis for $V$. Since $T: V \rightarrow V$, we have, for arbitrary $T \; \land \; w \in V$, that $T(v) = w$. However, $w = \lambda v$. Thus: $$T(v) = w \implies T(v) = \lambda v$$As desired. 
>> `\end{proof}`
>

>[!exercise]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal{L}(V)$. Prove that $$T = \lambda I \iff ST = TS \; \:\forall \; S \in \mathcal{L}(V)$$
>>[!claim|*]- Proof
>>`\begin{proof}` We show implication both ways:
>>
>>$\implies$: Suppose $T = \lambda I$. Then: $$ST(v) = S(T(v)) = S(\lambda Iv) = \lambda S(Iv) = \lambda I S(v) = TS(v)$$Which holds as we are in $\mathcal{L}(V)$ (thus $I$ works on either side).
>>
>>$\impliedby$: Suppose $ST = TS \; \:\forall \; S \in \mathcal{L}(V)$. Now define $T = \lambda I$. Then: $$ST(v) = SI(\lambda v) = I\lambda S(v) = TS$$Thus our original property holds. 
>> `\end{proof}`

>[!exercise]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Prove that any linear map on a subspace of $V$ can be extended to a linear map on $V$. In other words: $$U \subset V \; \land \; S \in \mathcal{L}(U,W) \implies \exists \; T \in \mathcal{L}(V,W) : Tu =Su \;\: \forall \: u \in U$$
>>[!claim|*]- Proof
>>`\begin{proof}` Let $u_1, \dots, u_n$ form a [[Basis]] for $U$. Since $U \subset V$, we can extend the basis of $U$ into a basis of $V$. Let $k_1, \dots k_m$ be the added vectors so that $u_1, \dots, u_n, k_1 , \dots, k_n$ form a basis for $V$. Let $K = \text{span}(k_1, \dots, k_n)$. It is clear that $V = U \oplus K$. 
>>
>>Now define $S \in \mathcal{L}(U,W) \; \land \; R \in \mathcal{L}(K,W) \; \land \; T \in \mathcal{L}(V,W): Tu = Su + Rk$. We can choose $Rk = 0 \; \: \forall \: k \in K$. Thus $\exists \; T \in \mathcal{L}(V,W)$: $Tu = Su$ holds.   
>> `\end{proof}`

>[!exercise]
>Suppose $T \in \mathcal{L}(V,W) \; \land \;$ $v_1, \dots, v_n$ is a list of vectors in $V$ $\; \land \;$ $Tv_1, \dots, Tv_n$ is a [[Linearly Independent]] list in $W$. Prove that $v_1, \dots, v_n$ is linearly independent.
>>[!claim|*]- Proof
>>`\begin{proof}` Consider: $$\lambda_1 v_1 + \dots + \lambda_n v_n = 0$$Applying $T$ to both sides nets: $$T(\lambda_1 v_1 + \dots + \lambda_n v_n) = T(0)$$By linearity of $T$, we have: $$\lambda_1Tv_1 + \dots + \lambda_n Tv_n = 0$$But $Tv_1, \dots, Tv_n$ is a linearly independent list of vectors in $V$. Thus $\lambda_1 = \dots = \lambda_n = 0$ is the only solution. Going back to our initial statement with this fact proves that $v_1, \dots, v_n$ is linearly independent, as desired.
>> `\end{proof}`

>[!exercise]
>Suppose $\exists \; T \in \mathcal{L}(V)$ where $\text{null}(T) \; \land \; \text{range}(T)$ are both [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Show that $V$ is finite-dimensional.
>>[!claim|*]- Proof
>>`\begin{proof}` Since we do not know if $V$ is finite-dimensional, we cannot use the [[Fundamental Theorem of Linear Maps]]. Thus we find another way. 
>>
>>Let $u_1, \dots, u_m$ be a [[Basis]] for $\text{null}(T)$ and $Tw_1, \dots, Tw_n$ be a basis for $\text{range}(T)$. Now let $v \in V$. Then: $$Tv = \lambda_1 Tw_1 + \dots + \lambda_n Tw_n$$Then we must have: $$Tv - \lambda_1 Tw_1 - \dots - \lambda_n Tw_n = 0 \in \text{null}(T)$$Thus: $$v - \lambda_1 w_1 - \dots - \lambda_n w_n = \alpha_1u_1+ \dots+\alpha_mu_m$$Rearranging nets us: $$v = \lambda_1 w_1 + \dots + \lambda_n w_n + \alpha_1 u_1 + \dots + \alpha_m u_m$$Since this was for arbitrary $v \in V$, every vector is written as a linear combination of these bases. Thus $\lambda_1 w_1 + \dots + \lambda_n w_n + \alpha_1 u_1 + \dots + \alpha_m u_m$ forms a basis for $V$ meaning that $V$ is finite-dimensional.
>> `\end{proof}`

