The following is such an important theorem that we give it a dramatic name:

>[!theorem|*] Fundamental Theorem of Linear Maps
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in L(V,W)$. Then the $\text{range}(T)$ is finite-dimensional and: $$\text{dim}(V) = \text{dim}(\text{ker}(T)) + \text{dim}(\text{range}(T))$$
>>[!claim|*]- Proof
>>`\begin{proof}` Let $v_1, \dots, v_n$ be a [[Basis]] for $\text{ker}(T)$. Then we have that $\text{dim}(\text{ker}(T)) = n$. We know that $\text{ker}(T)$ is a subspace of $V$. Thus we can expand the basis of $\text{ker}(T)$ into a basis for $V$. Let $u_1, \dots u_m$ be the vectors in $V$ added to $v_1, \dots, v_n$ such that$v_1, \dots, v_n, u_1, \dots u_m$ forms a basis for $V$. Thus: $$\text{dim}(V) = n + m$$Now we need to show that $\text{dim}(\text{range}(T)) = m$. We shall do so by showing that $Tu_1, \dots , Tu_n$ form a basis for the $\text{range}(T)$. Let $x \in V$, then: $$x = \lambda_1 v_1 + \dots + \lambda_n v_n + \alpha_1 u_1 + \dots + \alpha_n u_n$$Applying $T$ gets us: $$T(x) = \lambda_1 Tv_1 + \dots + \lambda_n Tv_n + \alpha_1 Tu_1 + \dots + \alpha_n Tu_n$$Since $v_1, \dots, v_n$ form a basis for the $\text{ker}(T)$. They must be $0$ when $T$ is applied: $$T(x) = \alpha_1 Tu_1 + \dots + \alpha_n Tu_n$$Since $x$ is arbitrary, our list $Tu_1, \dots, Tu_n$ must [[Span]] $\text{range}(T)$. This means that $\text{range}(T)$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. All that is left it to show that it is [[Linearly Independent]]. Suppose: $$0 = \alpha_1 Tu_1 + \dots + \alpha_n Tu_n \implies 0 =T(\alpha_1 u_1 + \dots + \alpha_n u_n)$$Which holds by linearity of $T$. Thus $(\alpha_1 u_1 + \dots + \alpha_n u_n \in \text{ker}(T)$. Then we have: $$\alpha_1 u_1 + \dots + \alpha_n u_n = \lambda_n v_1+ \dots+ \lambda _nv_n$$Since $v_1, \dots, v_n$ is a basis, it is linearly independent and so all $\lambda \; \land \; \alpha$ are $0$. Hence $Tu_1, \dots, Tu_n$ is linearly independent.
>>Since $Tu_1, \dots, Tu_n$ spans $\text{range}(T)$ and is linearly independent, it must be a basis for $\text{range}(T)$. Thus, by definition of the [[Dimension of a Vector Space]], we have the $\text{dim}(\text{range}(T)) = m$ as desired.
>> `\end{proof}` 

With this powerful result, some corollaries follow:

>[!corollary]- $\text{dim}(V) > \text{dim}(W) \implies$ $T \in \mathcal{L}(V,W)$ is not injective
>`\begin{proof}`  Suppose $\text{dim}(V) > \text{dim}(W)$, then: $$\text{dim}(V) = \text{dim}(\text{ker}(T)) + \text{dim}(\text{range}(T))$$$$\text{dim}(\text{ker}(T)) = \text{dim}(V) - \text{dim}(\text{range}(T))$$$$\text{dim}(\text{ker}(T)) \ge \text{dim}(V)- \text{dim}(W)$$Since $\text{dim}(V) > \text{dim}(W)$, we have $\text{dim}(\text{ker}(T)) > 0$. Thus, by Theorem 1 shown in [[Null Space|Kernel]], $T$ is not injective.
>`\end{proof}`

>[!corollary]- $\text{dim}(V) < \text{dim}(W) \implies T \in \mathcal{L}(V,W)$ is not surjective.
>`\begin{proof}`   Suppose $\text{dim}(V) < \text{dim}(W)$, then: $$\text{dim}(V) = \text{dim}(\text{ker}(T)) + \text{dim}(\text{range}(T))$$ $$\text{dim}(\text{range}(T)) = \text{dim}(V) - \text{dim}(\text{ker}(T))$$$$\text{dim}(\text{range}(T)) \le \text{dim}(V) < \text{dim}(W)$$Since $\text{dim}(\text{range}(T)) \ne \text{dim}(W)$, by Theorem 1 shown in [[Range]], we conclude $T$ is not surjective, as desired.
> `\end{proof}`

#### Exercises
>[!exercise|1]
>Prove that there does not exist $T \in \mathcal{L}(\mathbb{R}^5) : \text{range}(T) = \text{null}(T)$
>>[!claim|*]- Proof
>>`\begin{proof}` Since $T \in \mathcal{L}(\mathbb{R}^5)$, we know $\text{dim}(\mathbb{R}^5)= 5$ and is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Thus we can apply the fundamental theorem of linear maps to get the following system of equations: $$5 = \text{range}(T) + \text{null}(T) \; \land \; \text{range}(T) = \text{null}(T)$$Solving the system tells us that $\text{null}(T) = \text{range}(T) = 2.5$, but the dimension of our vector spaces cannot be a fraction, thus we conclude it is impossible to have $T \in \mathcal{L}(\mathbb{R}^5): \text{range}(T) = \text{null}(T)$. 
>> `\end{proof}`

>[!exercise|2]
>Show that $\{T \in L(\mathbb{R}^5, \mathbb{R}^4)\}: \text{dim(null)}(T) > 2\}$ is not a subspace of $L(\mathbb{R}^5, \mathbb{R}^4)$
>>[!claim|*]- Proof
>> `\begin{proof}`   Suppose, for contradiction, that it is a subspace. Consider:
>> - $T_1(x_1,x_2,x_3,x_4,x_5) = (x_1, 0, 0, 0)$
>> - $T_2(x_1,x_2,x_3,x_4,x_5) = (0, x_2, 0, 0)$
>> - $T_3(x_1,x_2,x_3,x_4,x_5) = (0, 0, x_3, 0)$
>> - $T_4(x_1,x_2,x_3,x_4,x_5) = (0, 0, 0, x_4)$
>>
>>Clearly, $T_1, T_2, T_3, T_4 \in \{T \in L(\mathbb{R}^5, \mathbb{R}^4)\}: \text{dim(null)}(T) > 2\}$. Since it is a subspace of $\mathcal{L}(\mathbb{R}^5,\mathbb{R}^4)$, we must have that it is closed under addition: $$(T_1+T_2+T_3+T_4)(x_1,x_2,x_3,x_4,x_5) = (x_1,x_2,x_3,x_4)$$Clearly $(x_1,x_2,x_3,x_4)$ generates $\mathbb{R}^4$ thus $\text{dim}(\text{range}(T_1+T_2+T_3+T_4)) = 4 > 2$. We have a contradiction as $4>2$, thus it is not closed under addition and thus it is not a vector subspace.
>>`\end{proof}`

>[!exercise|3]
>Prove that there does not exist a linear map from $\mathbb{F}^5$ to $\mathbb{F}^2$ whose Null Space equals $\{(x_1,x_2,x_3,x_4,x_5) \in \mathbb{F}^5 : x_1 = 3x_2 \; \land \; x_3 = x_4 = x_5\}$
>>[!claim|*]- Proof
>>`\begin{proof}` We begin by noting that the null space is composed of all vectors of the form $(3x_2,x_2,x_3,x_3,x_3) \in \text{null}(T)$. From this, we can clearly see that two variables are at play and that $\text{dim}(\text{null}(T)) = 2$. 
>>By the [[Fundamental Theorem of Linear Maps]], we have: $$\text{dim}(\mathbb{F}^5) = \text{dim}(\text{range}(T)) + \text{dim}(\text{null}(T))$$
>>From this, we conclude $\text{dim}(\text{range}(T)) = 3$. But recall that the $\text{range}(T))$ must be a subspace of $\mathbb{F}^2$. Thus $\text{dim}(\mathbb{F}^2) \ge \text{range}(T) \implies 2 \ge 3$ which is not true. Thus a linear map with the property described above cannot exist.  
>> `\end{proof}`

>[!exercise|4]
>Suppose $V \; \land \; W$ are [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Prove that there exists an [[Injective]] [[Linear Maps|Linear Map]] from $V$ to $W$ $\iff \text{dim}(V) \le \text{dim}(W)$. 
>>[!claim|*]- Proof
>>`\begin{proof}` We show inclusion both ways:
>>
>>$\implies$: Suppose $T \in \mathcal{L}(V,W): T$ is injective. Recall Corollary 1 shown above. The contrapositive of the statement gives: $$T \in \mathcal{L}(V,W) \; \text{is} \; \text{injective} \implies \text{dim}(V) \le \text{dim}(W)$$Which is exactly what we wanted to show (we can use the Corollary as $V,W$ are finite-dimensional).
>>
>>$\impliedby$: Suppose $\text{dim}(V) \le \text{dim}(W)$. We will do a proof by construction. Let $v_1, \dots, v_n$ be a [[Basis]] for $V$ and let $w_1, \dots, w_m$ be a basis for $W$: $n \le m$. Define $T \in \mathcal{L}(V,W): T(\lambda_1 v_1 + \dots + \lambda_n v_n) = \lambda_1 w_1 + \dots + \lambda_n w_n$. Since $w_1, \dots, w_m$ is a basis for $W$, removing $m-n$ vectors makes the list $w_1 ,\dots, w_n$ [[Linearly Independent]]. Thus: $$\lambda_1 w_1 + \dots + \lambda_n w_n = 0 \implies \lambda_1 = \dots = \lambda_n = 0$$This means that: $$T(\lambda_1 v_1 + \dots + \lambda_n v_n) = 0 \implies \lambda_1 = \dots = \lambda_n = 0$$Thus there exists no other way to generate $0_w$ and thus the only way to get $0_w$ is to set all coefficients to $0$, which leaves us with $T(0_v) = 0_w$. Thus $0_v$ is the only vector in the $\text{null}(T)$. By Theorem 1 in [[Null Space]], $T$ is injective.
>> `\end{proof}`

>[!exercise|5]
>Suppose $W$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal{L}(V,W)$. Prove that $T$ is injective $\iff \exists \; S \in \mathcal{L}(W,V): ST = I_v$.
>>[!claim|*]- Proof 
>>`\begin{proof}` We show implication both ways. Let $u \in V$:
>>
>>$\implies$: Suppose $T$ is injective. Now define $S$ which maps the unique element in $\text{range}(T)$ to the $u$ that produced it: $Tu = r \in \text{range}(T)$. We know that it is unique as $T$ is injective. Thus: $$S(r_1 + r_2) = u_1 + u_2 = S(r_1) + S(r_2)$$Which holds by injectivity of $T$. Furthermore: $$S(\lambda r) = \lambda u = \lambda S(r)$$Which holds by injectivity of $T$. Thus $S \in \mathcal{L}(W,V)$. By definition of $S$: $$S(r) = u \implies S(T(u)) = u \implies ST(u) = u$$Thus by definition, $ST = I_v$. 
>>
>>$\impliedby$: Suppose $\exists \; S \in \mathcal{L}(W,V): ST = I_v$. We show that $T$ is injective. To do so, let $u \in V \; \land \; w \in W$. Thus: $$T(u_1) = T(u_2) \implies ST(u_1) = ST(u_2) \implies I_v u_1 = I_v u_2 \implies u_1 = u_2$$Thus $T$ is injective.
>>  `\end{proof}`

>[!exercise|6]
>Suppose $P \in \mathcal{L}(V) \; \land \; P^2 = P$. Prove that $V = \text{null}(P) \oplus \text{range}(P)$.
>*Hint: Add and subtract Pv from v*
>>[!claim|*]- Proof
>>`\begin{proof}` It is not known whether $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], thus we cannot use the fundamental theorem of linear maps. 
>>
>>Let us first show that any $v \in V$ can be written using $\text{null}(P) \; \land \; \text{range}(P)$. To do so, consider: $$v = v+Pv-Pv = v+P^2v-Pv=v+P(Pv-v)$$Now, it is clear that: $$P(Pv-v) = 0 \implies Pv-v \in \text{null}(P)$$We also have that $Pv \in \text{range}(P)$. Thus every vector in $v$ can be written using $\text{null}(P) \; \land \; \text{range}(P)$: $$V=\text{null}(P) + \text{range}(P)$$We must now show that the sum is a [[Direct Sum]]. To do so, let $v \in \text{null}(P) + \text{range}(P)$. It is clear that $0 \in \text{null}(P) \cap \text{range}(P)$. Now suppose $v \ne 0$. Then we can write $v = Pz$ for some $z \in V$. Thus: $$v = Pz = P^2z = P(Pz) = Pv$$But $v \ne 0$ means that $Pv \ne 0$ thus $Pv \notin \text{null}(P)$. With this, we conclude that $\text{null}(P) \cap \text{range}(P) = \{0\}$. Then by definition of a direct sum, we have: $$V = \text{null}(P) \oplus \text{range}(P)$$
>> `\end{proof}`
