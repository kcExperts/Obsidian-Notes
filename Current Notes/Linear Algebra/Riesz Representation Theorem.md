
>[!def|*] Riesz Representation Theorem
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $\lambda \in \mathcal L (V, \mathbb F)$ Then there is a unique vector $v \in V:$ $$\lambda(u) = I_v(u) =  \langle u,v \rangle$$ $\forall \: u \in V$.
>>[!claim|*]- Proof 1
>>`\begin{proof}` First we show existence. That is that $\exists \: v \in V : \lambda (u) = \langle u,v \rangle$ which holds $\forall \: u \in V$. Let $e_1, \dots , e_n$ be an [[Orthonormal Basis]] of $V$. Then: $$\lambda (u) = \lambda( \langle u,e_1 \rangle e_1 + \dots + \langle u,e_n \rangle e_n)$$Which comes from $1$ in [[Vector Linear Combination of an Orthonormal Basis]]. Since $\lambda$ is a [[Linear Maps|Linear Map]], we have: $$\lambda(u) = \langle u,e_1 \rangle \lambda e_1 + \dots + \langle u,e_n \rangle \lambda e_n$$Using [[Inner Product]] properties (specifically homogeneity in the second slot), we get: $$\lambda(u) = \langle u,\overline {\lambda (e_1)} e_1 + \dots + \overline{\lambda (e_n)}e_n \rangle$$Since $\lambda (u) = \langle u,v \rangle$, we have: $$\langle u,v \rangle = \langle u,\overline {\lambda (e_1)} e_1 + \dots + \overline{\lambda (e_n)}e_n \rangle$$Thus we are justified in setting: $$v = \overline {\lambda (e_1)} e_1 + \dots + \overline{\lambda (e_n)}e_n$$Now we need to show uniqueness. That is that only $1$ $v \in V$ exists that satisfy the above equation. Recall that $\overline {\lambda(e_k)}$ maps to $\mathbb{F}$. Hence setting $\overline {\lambda(e_k)} = a_k$, we get: $$v = a_1 e_1 + \dots +a_ne_n$$Since $e_1, \dots , e_n$ is an orthonormal basis, it is a [[Basis]] for $V$ and by definition, only one such combination of $a_k$ will produce $v$. Hence $v$ is unique.
>> `\end{proof}`
>
>>[!claim|*]- Alternate Definition
>>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. For each $v \in V$, define $\lambda_v \in V’$ by: $$\lambda_v (u) = \langle u,v \rangle$$for each $u \in V$. Then $v \rightarrow \lambda_v$ is an [[Surjective]] function from $V$ onto $V’$. 
>>

>[!rmk|*] Finding $v$
>In the proof of the Riesz Representation Theorem, we found that: $$v = \overline {\lambda (e_1)} e_1 + \dots + \overline{\lambda (e_n)}e_n$$

>[!corollary|1]
>Define a map: $$L: V \rightarrow V': L(v) = I_v = \langle \cdot,v \rangle$$Then $L$ is a bijection and if $\mathbb{F} = \mathbb{R}$, $L$ is linear (if $\mathbb{F} = \mathbb C$, then $L$ is [[Antilinear Map|Antilinear]]).
>>[!claim|*]- Proof
>>`\begin{proof}` First we show that $L$ is a bijection:
>>**Injectivity**: 
>>Recall that to show a function is [[Injective]], it suffices to show that $\text{ker}(L) = \{0\}$ (see Theorem 1 in [[Null Space|Kernel]]). Suppose $w \in V: w \in \text{ker}(L)$. Then: $$L(w) = \langle w,v \rangle = 0$$But by the definition of the [[Inner Product]], $\langle w,v \rangle = 0 \iff w = 0$. Thus we have $\text{ker}(L) = \{0\}$ and hence $L$ is injective.
>>
>>**Surjective**: 
>>This might seem hard to do, but $L(v) = I_v$ is our key to success. Let $\lambda \in \mathcal L (V, \mathbb F)$ be arbitrary. By the Riesz Representation Theorem,  $\exists \: \text{unique} \: v \in V : \lambda = I_v$ But $L(v) = I_v$, hence $L(v) = \lambda$, since $\lambda$ was arbitrary, then $L(v)$ maps to all of $\mathcal L (V, \mathbb F) = V’$. Hence $L$ is surjective.
>>
>>We conclude that $L$ is bijective.
>>
>>**Linearity if $\mathbb{F} = \mathbb{R}$**: 
>>Recall $I_v = \langle \cdot,v \rangle$. Suppose $v_1 , v_2 \in V$, then: $$L(v_1+v_2) = \langle \cdot ,v_1 + v_2 \rangle = \langle \cdot,v_1 \rangle + \langle \cdot,v_2 \rangle  = L(v_1) + L(v_2)$$Hence $L$ is additive. Now let $\lambda \in \mathbb{R}$, then conjugate symmetry becomes normal symmetry, thus: $$L(\lambda v) = \langle \cdot,\lambda v \rangle = \overline \lambda \langle \cdot,v \rangle = \lambda \langle \cdot,v \rangle = \lambda L(v)$$Where $\overline \lambda = \lambda$ as $\lambda \in \mathbb{R}$. Thus $L$ satisfies homogeneity. We conclude $L$ is a [[Linear Maps|Linear Map]].
>>
>> `\end{proof}`

>[!example|1]
>Recall from [[Linear Functional|Linear Functionals]] the following: $$\gamma: \mathcal P _2 (\mathbb{R}) \rightarrow \mathbb{R} : \gamma(p) = \int_{-1}^1 p(t) \left( \text{cos}(\pi t)\right) \: dt$$Find $q \in \mathcal P_2 (\mathbb{R})$ such that $\gamma (p) = \langle p,q \rangle$ with [[Inner Product]]: $$\langle p,q \rangle = \int_{-1}^1 pq$$
>>[!claim|*]- Solution
>>All we need to do is compute: $$q = \overline {\gamma (e_1)} e_1 + \dots + \overline{\gamma (e_n)}e_n$$Since we are working in $\mathbb{R}$ and not $\mathbb{F}$, let us drop the symmetry lines for $\mathbb{F}$. Furthermore, $\text{dim}(\mathcal P_2(\mathbb{R})) = 3$, hence we need to solve: $$q =  \gamma (e_1) e_1 + \gamma(e_2)e_2 + \gamma(e_3)e_3$$Recall from Example $1$ in [[Gram-Schmidt Procedure]] that the [[Orthonormal Basis]] of $\mathcal P_2 (\mathbb{R})$ is given by: $$\{e_1, e_2, e_3\} = \{\sqrt \frac{1}{2} , \sqrt{\frac{3}{2}} x, \sqrt \frac{45}{8} \left(x^2 -\frac{1}{3} \right) \}$$Thus: $$q = \gamma \left( \sqrt \frac{1}{2}\right) \sqrt \frac{1}{2} + \gamma \left( \sqrt{\frac{3}{2}} t \right)\sqrt{\frac{3}{2}} t + \gamma \left( \sqrt \frac{45}{8} \left(t^2 -\frac{1}{3} \right) \right) \sqrt \frac{45}{8} \left(t^2 -\frac{1}{3} \right)$$Essentially, you would be solving the following integrals: $$i_1 = \left( \int_{-1}^1 \sqrt \frac{1}{2} \text{cos} (\pi t) \:dt\right) \sqrt \frac{1}{2}$$
>>$$i_2 = \left( \int_{-1}^1  \sqrt{\frac{3}{2}} t \: \text{cos}(\pi t) \: dt\right) \sqrt{\frac{3}{2}} x$$
>>$$i_3 = \left(\int_{-1}^1 \sqrt \frac{45}{8} \left(t^2 -\frac{1}{3} \right) \: \text{cos}(\pi t) \: dt \right) \sqrt \frac{45}{8} \left(x^2 -\frac{1}{3} \right)$$Where: $$q = i_1 + i_2 + i_3$$Now I won’t solve these integrals here (after all, this is linear algebra, not calculus). I will instead leave them to you. You should end up with: $$q(x) = \frac{15}{2\pi^2}(1-3x^2)$$Which is what we were after. Thus $$\gamma (p(x)) = \langle p(x),\frac{15}{2\pi^2}(1-3x^2) \rangle$$ 


