
>[!def|*] Normal
>An operator on an [[Inner Product Space]] is called normal if it commutes (see [[Commutator]]) with its [[Adjoint]]: $$TT^* = T^* T$$
>In matrix form, $T^*$ is trivially found by computing $\overline{T^T}$, the [[Complex Conjugate]] [[Transpose of a Matrix|Transpose]] of the matrix of $T$.

>[!theorem|1]
>Suppose $T \in \mathcal L (V)$, then: $$T \; \text{is normal} \iff ||Tv|| = ||T^*v|| \; \; \forall v \in V$$

>[!claim|*]- Proof of Theorem 1
>![[Pasted image 20240402144441.png]]

>[!theorem|2]
>Suppose $T \in \mathcal L (V)$ is normal, then: 
>1. $\text{null}(T) = \text{null}(T^*)$
>2. $\text{range}(T) = \text{range}(T^*)$
>3. $V = \text{null}(T) \oplus \text{range}(T)$
>4. $T - \lambda I$ is normal for every $\lambda \in \mathbb{F}$.
>5. If $v \in V$ and $\lambda \in \mathbb{F}$, then $TV = \lambda v \iff T^*v = \overline \lambda v$.

>[!claim|*]- Proof of Theorem 2
>![[Pasted image 20240402144700.png]]
>![[Pasted image 20240402144712.png]]
>![[Pasted image 20240402144724.png]]
>![[Pasted image 20240402144736.png]]




