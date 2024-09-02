
>[!theorem|*] Existence of Eigenvalues
>Every operator on a [[Finite-Dimensional Vector Space|Finite-Dimensional]] nonzero complex [[Vector Space]] has an eigenvalue.
>>[!claim|*]- Proof
>>`\begin{proof}` Suppose $V$ is a finite-dimensional complex vector space of dimension $n > 0 \; \land \; T \in \mathcal L (V)$. Choose $v \in V$ with $v \ne 0$. Then: $$v, Tv, T^2v, \dots, T^nv$$is not [[Linearly Independent]] as this list has length $n+1$ while $\text{dim}(V) = n$. Hence some linear combination of the vectors produces $0$: $$a_0 v + a_1Tv + a_2T^2v + \dots + a_nT^nv = 0 \implies\exists v_i \ne 0$$Hence: $$p(T)v = 0$$By the [[Fundamental Theorem of Algebra]], $\exists \: \lambda \in \mathbb C : p(\lambda) = 0$. Hence $\exists \: q \in \mathcal P(\mathbb C)$ such that: $$p(z) = (z- \lambda)q(z)$$Thus: $$0 = p(T)v = (T- I \lambda) q(T)v$$Now since we factored out a root of the polynomial, it is clear that $\text{deg}(p) > \text{deg}(q)$. Thus $q(T)v \ne 0$ (Think of it as us factoring out the zero of $v$). Thus the equation implies that $\lambda$ is an eigenvalue of $T$ with eigenvector $q(T)v$.
>>
>>Why? As the form $0 = (T- I \lambda)q(T)v$ mimics $0 = (T - I \lambda)v$. We just replaced $v$ with $q(T)v$.
>> `\end{proof}`

>[!exm|1] The importance of finite-dimensional
>Define $T \in \mathcal L (\mathcal P(\mathbb))$ by $(Tp)(z) = zp(z)$. If $p \in \mathcal P (\mathbb C)$ is a nonzero polynomial, then $\text{deg}(Tp) > \text{deg}(p)$. Thus $Tp$ cannot be a scalar multiple of $p$. Hence $T$ has no eigenvalues.
>
>This happens as $\mathcal P (\mathbb C)$ is infinite-dimensional, hence the existence theorem can not apply here.

