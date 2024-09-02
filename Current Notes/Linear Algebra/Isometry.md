Linear maps that preserve norms are sufficiently important to deserve a name.

>[!def|*] Isometry
>A linear map $S \in \mathcal{L}(V,W)$ is called an isometry if: $$||Sv|| = ||v||$$for every $v \in V$. In other words, a linear map is an isometry if it preserves norms.

Note that every Isometry is [[Injective]]. 

>[!theorem|1] Characterization of Isometries
>Suppose $S \in \mathcal{L}(V,W)$. Suppose $e_1, \dots e_n$ is an [[Orthonormal Basis]] of $V$ and $f_1, \dots f_n$ is an orthonormal basis of $W$, then the following are equivalent:
>1. $S$ is an isometry.
>2. $S^*S = I$.
>3. $\langle  Su, Sv \rangle  = \langle  u,v \rangle  \; \forall \: u, v \in V$.
>4. $Se_1, \dots, Se_n$ is an orthonormal list in $W$.
>5. The columns of $\mathcal M(S,(e_1, \dots , e_n), (f_1, \dots , f_n))$ form an [[Orthonormal]] list in $\mathbb{F}^m$ with respect to the [[Euclidean Inner Product]].

