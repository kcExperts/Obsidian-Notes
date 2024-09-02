>[!def|*] Restrictions
>Suppose $X,Y$ are sets. Then $f: X \rightarrow Y$ is a function. The restriction of the domain for $f$ is given by: $$f:A \rightarrow Y \; \text{where}\; A \subseteq X$$

>[!theorem|*] Riesz Representation Theorem
>Let $V$ be a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Inner Product Space]] over $\mathbb{F}$. Then $\forall \lambda \in V^{‘}, \exists \;! v \in V : \lambda = lv$ where $L: V \rightarrow V^{'}, v \rightarrow lv$ is a bijection and $L$ is linear (hence an isomorphism) if $\:\mathbb{F} = \mathbb{R}$. Where $lv = \langle \cdot,v \rangle$
>
>Equivalently: Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $\rho$ is a [[Linear Functional]] on $V$. Then there is a unique vector $v \in V$: $$\rho(u) = \langle u,v \rangle$$$\forall u \in V$
>

>[!claim|*]- Proof 1 (Class)
>`\begin{proof}`  Let $\{e_j\}^n_{j=1}, n = \text{dim}(V)$ be a basis for $V$. Then: $$v = \sum_{j=1}^\infty \langle v,e_j \rangle e_j$$$$\lambda(v) = \lambda(\sum_{j=1}^n \langle v,e_j \rangle \lambda(e_j)) = \sum_{j=1}^n \langle v,e_j \rangle \lambda(e_j)$$Can we find $u \in V: \lambda (v) = \langle v,u \rangle$? Yes, to do so, we claim that: $$u = \sum_{j=1}^n \overline{\lambda(e_j)} e_j$$Now: $$l_u(v) = \langle v,u \rangle = \sum_{j=1}^n \langle v,e_j \rangle \overline{\langle u,e_j \rangle}$$$$= \sum_{j=1}^n \langle v,e_j \rangle \overline{\overline{\lambda (e_j)}} = \sum_{j=1}^n \langle v,e_j \rangle \lambda (e_j) = \lambda = lu = \langle \cdot,v \rangle$$
>Thus we have shown existence. Now take $v_1, v_2 \in V$, then $L(v_1 + v_2) =$ $l_{v_1 + v_2}$$=$ $\langle \cdot, v_1 + v_2 \rangle$: $$ = \langle \cdot,v_1 \rangle + \langle \cdot,v_2 \rangle = l_{v_1} + l_{v_2} = L(v_1) + L(v_2)$$Now $L(\alpha v) = l_(\alpha v) = \langle \cdot,\alpha v \rangle = \bar \alpha \langle \cdot,v \rangle = \bar \alpha l_v$
>And we are done (I don’t understand this proof, time to sleep on it). 
>`\end{proof}`

>[!claim|*]- Proof for Riesz Representation Theorem (Book)
>`\begin{proof}`  First we show that $\exists v \in V: \rho (u) = \langle u,v \rangle \forall u \in V$. Let $e_1, \dots, e_n$ be an orthonormal basis of $V$. Then: $$\rho (u) = \rho(\langle u,e_1 \rangle e_1 + \dots + \langle u,e_n \rangle e_n$$Which comes from [[Vector Linear Combination of an Orthonormal Basis]]. $$= \langle u,e_1 \rangle \rho (e_1) + \dots + \langle u,e_n \rangle \rho (e_n) = \langle u,\overline{\rho(e_1)}e_1 \rangle + \dots + \overline{\rho (e_n)} e_n$$For every $u \in U$. Thus setting: $$v = \overline{\rho (e_1)}e_1 + \dots + \overline{\rho (e_n)} e_n$$We have $\rho (u) = \langle u,v \rangle \forall \; u \in V$ as desired. Now we must prove that only one vector $v \in V$ has the desired behavior. Suppose $v_1, v_2 \in V$ are such that: $$\rho (u) = \langle u,v_1 \rangle = \langle u,v_2 \rangle$$$\forall \; u \in V$, then: $$0 = \langle u,v_1 \rangle - \langle u,v_2 \rangle = \langle u,v_1-v_2 \rangle$$$\forall \; u \in V$. Taking $u = v_1 - v_2$ shows that $v_1 - v_2 = 0$. Thus $v_1 = v_2$. This completes the proof of the uniqueness. We have shown existence and uniqueness as desired.
>`\end{proof}`

>[!exm|*] Show $U = U^{\perp \perp}$
>`\begin{proof}` We show inclusion both ways, thus:
>
>$\implies$: Let $u \in U$, then $\forall w \in U^ \perp$, we have $\langle u,w \rangle = 0 = \langle w,u \rangle$. Thus $u \in U^{\perp \perp}$. 
>
>$\impliedby$: Take $v \in U^{\perp \perp} \subset V$, then $v = u+w \in U \oplus U^ \perp$. Now know that $w= 0$ and: $$0 = \langle v,w \rangle = \langle u+w,v \rangle = \langle u,w \rangle + \langle w,w \rangle = \langle w,w \rangle = U^{\perp \perp} U^ \perp$$This implies $v \in U$, somehow… again not sure how this proof works, sleep on it.
> `\end{proof}`

