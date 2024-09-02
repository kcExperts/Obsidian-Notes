---
aliases:
  - Eigenvectors
---
>[!def|*] Eigenvector
>Suppose $T \in \mathcal L (V)$ and $\lambda \in \mathbb{F}$ is an [[Eigenvalue]] of $T$. A vector $v \in V$ is called an eigenvector of $T$ corresponding to $\lambda$ if: $$v \ne 0 \; \land \; Tv = \lambda v$$
>In other words, a nonzero vector $v \in V$ is an eigenvector of an operator $T \in \mathcal L (V) \iff$ $Tv$ is scalar multiple of $v$. 

>[!rmk|*]-
>Because $Tv = \lambda v \iff (T - I \lambda) v = 0$, a vector $v \in V: v \ne 0$ is an eigenvector of $T$ corresponding to $\lambda$ if: $$v \in \text{null}(T - \lambda I)$$Furthermore, each distinct eigenvalue (unless repeated), only has $1$ “non-scaled” eigenvector. (There are technically infinitely many but only $1$ is required to span all of them as they are scalar multiples of each other).

>[!theorem|1] Linearly Independent Eigenvectors
>Suppose $T \in \mathcal L (V)$. Then every list of eigenvectors of $T$ corresponding to distinct eigenvalues of $T$ is [[Linearly Independent]].
>>[!claim|*]- Proof by Contradiction
>>`\begin{proof}` Suppose, for the sake of contradiction, that $\exists$ $w_1, \dots, w_n$ that is [[Linearly Dependent]]. Now consider: $$\alpha_1 w_1 + \dots + \alpha _n w_n = 0$$Now applying $(T- \lambda I)$ to both sides nets: $$\alpha _1(T - \lambda I)w_1 + \dots +a _n(T-\lambda I)w_n = (T - \lambda I)0$$
>>Netting: $$\alpha_1 (Tw_1 - \lambda w_1) + \dots + \alpha_n(Tw_n - \lambda w_n)  = 0$$Now $Tw_i = \lambda_i w_i$ (and $\lambda_i \ne \lambda$), thus: $$\alpha_1(\lambda_1 - \lambda)w_1 + \dots + \alpha_n(\lambda_n - \lambda)w_n = 0$$Since $\lambda_i – \lambda \ne 0$, and $w_1, \dots, w_n \ne 0$, then we must have $\alpha_1, \dots, \alpha_n = 0$ so that the above equation holds. Thus $w_1, \dots, w_n$ is [[Linearly Independent|L.I]] which contradicts our assumption that $w_1, \dots, w_n$ was [[Linearly Dependent|L.D]].
>> `\end{proof}`

>[!corollary|1] On the topic of $T \in \mathcal L (V)$ and $dim(V)$
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Then each operator on $V$ has at most $\text{dim}(V)$ distinct [[Eigenvalue|Eigenvalues]]. 
>>[!claim|*]- Proof
>>`\begin{proof}` Let $\lambda_1 , \dots, \lambda_n$ be a list of eigenvalues and $v_1, \dots, v_n$ be the **corresponding** list of eigenvectors. By Theorem 1, $v_1, \dots, v_n$ is [[Linearly Independent]], hence it cannot contain more vectors than the dimension of $V$. Hence $\lambda_1, \dots, \lambda_n$ cannot contain more than $\text{dim}((V)$ eigenvalues. Hence $n \le \text{dim}(V)$.
>>`\end{proof}`
