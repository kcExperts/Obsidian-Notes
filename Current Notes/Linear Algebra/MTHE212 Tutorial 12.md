
>[!rmk|*] Things to Recall
>1. Let $V,W$ be [[Finite-Dimensional Vector Space|Finite-Dimensional]] $\mathbb{F}$-[[Inner Product]] spaces. For $T \in \mathcal{L}(V,W)$, we have $T^* \in \mathcal{L}(V,W)$ is defined as: $$\langle Tu,w \rangle = \langle v,T^*w \rangle$$Which holds $\forall \: v \in V \; \land \; \forall \: w \in W$. $T^*$ is called the [[Adjoint]] of $T$.
>2. $T \in \mathcal L (V)$ is self-adjoint if $T^* = T$.
>3. $T \in \mathcal L (V)$ is normal if $TT^* = T^*T$. 
>4. $\text{ker}(T^*) = \text{range}(T)^\perp$. 
>5. For arbitrary $T \in \mathcal{L}(V,W)$, if $T$ is normal, then: $$\begin{array}{ccc}   \text{ker}(T) = \text{ker}(T^*)\\\text{ker}(T)^\perp = \text{range}(T) \\  V = \text{ker}(T) \oplus \text{range}(T)\end{array}$$Note $V$ must be [[Finite-Dimensional Vector Space|Finite-Dimensional]].

>[!exercise|1]
>Let $P \in \mathcal L (V)$ be such that $P^2 = P$, show that the following are equivalent.
>1. $P$ is self-adjoint
>2. $P$ is normal.
>3. $\exists \: U \in V: P = P_U$. Where $U$ is a subspace of $V$.

>[!claim|*]- Solution
>`\begin{proof}` 
>$1 \implies 2$:
>Since $P$ is self-adjoint, then: $$PP^*-P^*P=0 \iff PP^*=P^*P$$Hence $P$ is normal. (Which holds as $PP-PP = 0 \implies PP^*-P^*P = 0$ since $P$ is self adjoint).
>
>$2 \implies 3$:
>We will use property $5$ of the remark to solve this. 
>Let $U = \text{range}(P)$. Then for any $u \in U, \exists \: v \in V: Pv = u$ (which holds by definition of the range). Hence: $$Pu = P(Pv) = P^2v = Pv = u$$Hence $Pu$ acts as the identity for all elements $u \in U$. This equality holds since $P^2 = P$. Since we know the range of $U$, then: $$U^\perp = \text{ker}(P)$$And we conclude $Pw = 0 \; \; \forall \: w \in U^\perp$.
>(One can also argue that since $v = u \oplus u^\perp$, then $Pv = P_Uv \; \; \forall \: v \in V$, thus netting us $Pu =P$).
>
>$3 \implies 1$:
>Let $v_1, v_2 \in V$ and write: $$v_j = u_j + w_j \; \; \text{for}\; u_j \in U, w_j \in U^\perp\;\; \text{for} \; j = 1,2$$
>Now we compute: $$\langle v,P^*_Uv_2 \rangle = \langle P_Uv,v_2 \rangle = \langle u_1,u_2+w_2 \rangle = \langle u_1,u_2 \rangle$$Where the last equality holds by linearity of the [[Inner Product]] and since $\langle u_1,w_2 \rangle = 0$. Now: $$\langle v_1,P_Uv_2 \rangle = \langle u_1+w_1,u_2 \rangle = \langle u_1,u_2 \rangle$$Hence: $$\langle v_1,P_Uv_2 \rangle - \langle v_1,P_U^*v_2 \rangle = 0 \implies \langle v_1,(P_U - P_U^*)v_2 \rangle = 0$$Since $v_1$ is arbitrary, this holds for $v_1 = (P_U-P_U^*)$. Thus: $$||(P_U - P_U^*)v_2|| = 0$$Where $v_2$ is also arbitrary. Hence: $$(P_U - P_U^*) v_2 =0 \implies P_U = P_U^*$$(Notice that $P_U - P_U^*$ is the zero map since it maps all $v_2$ to $0$, hence the equality follows).
> `\end{proof}`

>[!exercise|2]
>Let $T \in \mathcal L (V)$. Suppose that $P(z) = \sum_{j=0}^m a_j z^j$ is the minimal polynomial of $T$. Show that $\sum_{j=0}^m \overline{a_j} z^j$ is the minimal polynomial of $T^*$.

>[!claim|*]- Solution
>`\begin{proof}`
>Obviously, if we plug in $z = 0$, we get $0$: $$P(T) = a_0Id + a_1T + \dots + a_{m-1}T^{m-1}+T^m = 0$$Now let us take the adjoint of both sides. This gets us: $$\overline{a_0} Id^* + \overline{a_1}T^* + \dots +\overline{a_{m-1}}(T^{m-1})^* + (T^m)^* = 0^*$$Using the properties of the adjoint, we rewrite the above as: $$\overline{a_0}Id + \overline{a_1}T^* + \dots + (T^*)^m = 0$$Define $\overline P (z) = \sum_{j=0}^m \overline{a_j} z^j$. This is then a multiple of the minimal polynomial of $T^*$. Denote it by $Q$. So: $$\overline P = S \cdot Q$$For $S$ being some monic polynomial. Taking (yet again) the adjoint: $$\begin{array}{ccc}   \overline P(T^*) = S(T^*) Q(T^*) = 0\\ P(T) = \overline S (T) \overline Q(T) = 0  \end{array}$$Then $\overline S, \overline Q$, are the corresponding polynomials after changing the coefficients to their respective complex conjugates via the adjoint. But $P$ is the minimal polynomial, thus $S$ must be of degree $1$ and hence $\overline Q = \text{deg}(P)$. Thus $s = 1$ since it is monic. 
>
>Thus we have shown that $\overline P$ is the minimal polynomial.
>`\end{proof}`

>[!exercise|3]
>Suppose $\mathbb{F} = \mathbb C$ and $T \in \mathcal L (V)$. $T$ is normal. Show that: $$\sigma(T) \subseteq \{0,1\}\iff \exists \: U \subseteq V : T = P_U$$
>$V$ is finite-dimensional.

>[!claim|*]- Solution
>`\begin{proof}`
>The backwards direction was done during the last tutorial as if its $0$, its the identity, if its $1$, its the whole space and if it is both, then it is $U$.
>
>$\implies$: 
>Suppose that $\sigma(T) \subseteq \{0,1\}$ Since $\mathbb{F} = \mathbb C$, $\sigma (T) \ne \emptyset$.  From the complex/normal spectral theorem, $V$ has an orthonormal basis consisting of eigenvalues of $T$. Let this basis be $\mathcal B = \{v,1 \dots, v_n\}$. Let us investigate the cases. 
>If $1 \not\in \sigma(T)$, (thus $\sigma (T) = \{0\}$), then: $$Tv_j = 0 \cdot v_j = 0 \implies T=0 \implies T = P_{\{0\}}$$
>If $0 \not\in \sigma (T)$, then: $$Tv_j = v_j$$So $T = Id = P_V$ (thus $U = V$).
>
>If $\sigma (T) = \{0,1\}$. Denote $\mathcal B_1 = \{v \in \mathcal B: v_j: \;\text{is an eigenvector of 1}\}$. Set $U = \text{span}(\mathcal B_1)$. Then for any $v = \sum_{j=1}^n a_j v_j \; \in V$, we can decompose it into: $$v = \sum_{v_j \in \mathcal B_1}a_jv_j + \sum_{v_k \in \mathcal B/ \mathcal B_1} a_kv_k$$(Yes I know this notation looks weird). The above sum means we seperate the vectors that have eigenvalue $1$ from the others. Then: $$Tv = T \left( \sum_{j=1}^n a_jv_j \right) = \sum_{v_j \in \mathcal B_1}a_jTv_j + \sum_{v_k \in \mathcal B/ \mathcal B_1} a_kTv_k = \sum_{v_j \in \mathcal B_1}a_jv_j + \sum_{v_k \in \mathcal B/ \mathcal B_1} a_k0v_u$$Which then gives us: $$= \sum_{v_j \in \mathcal B_1}a_jv_j \implies T = P_U$$
>`\end{proof}`


