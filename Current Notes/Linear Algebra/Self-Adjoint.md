
>[!def|*] Self-Adjoint
>An operator $T \in \mathcal L (V)$ is called self-[[Adjoint]] if $T = T^*$.

>[!theorem|1]
>Every [[Eigenvalue]] of a self-adjoint operator is real.

>[!claim|*]- Proof of Theorem 1
>`\begin{proof}`
>The idea here is to show $\lambda = \overline \lambda$ as that would prove that $\lambda \in \mathbb{R}$ (see [[Inner Product]]).
>Suppose $T$ is a self-adjoint operator on $V$. Let $\lambda$ be an [[Eigenvalue]] of $T$, and let $v \ne 0: Tv = \lambda v$. Then: $$\lambda ||v||^2 = \langle \lambda v, v \rangle = \langle Tv, v \rangle = \langle v, T^*v \rangle = \langle v, Tv \rangle = \langle v, \lambda v \rangle = \overline \lambda ||v||^2$$Thus showing that $\lambda = \overline \lambda$, as desired.
>`\end{proof}`

>[!theorem|2] Assuming $\mathbb{F} = \mathbb C$
>Suppose $V$ is a **Complex** [[Inner Product Space]] and $T \in \mathcal L (V)$. Then: $$T \; \text{is self-adjoint} \iff \langle Tv,v \rangle \in \mathbb{R} \; \; \forall v\in V$$

