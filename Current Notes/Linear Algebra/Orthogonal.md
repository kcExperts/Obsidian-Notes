
>[!def|*] Orthogonal
>Two vectors $u,v \in V$ are called orthogonal if $\langle u,v \rangle = 0$.
>Where $\langle u,v \rangle$ is the [[Inner Product]].

See also [[Orthogonal Decomposition]].

Recall that orthogonal also means that the vectors are perpendicular. This is because $\langle u,v \rangle = ||u||\:||v||cos(\theta)$ holds true. 

>[!theorem|1] Orthogonality and $0$
>1. $0$ is orthogonal to all $v \in V$.
>2. $0$ is the only $v \in V$ that is orthogonal to itself.
>
>>[!claim|*]- Proof
>>**1**: The [[Inner Product]] is a [[Linear Maps|Linear Map]] by definition (additivity and homogeneity are satisfied). Recall that every linear map takes $0$ to $0$. Thus $\langle 0,v \rangle = 0$
>>
>>**2**: Since $\langle 0,v \rangle = 0$, if we let $v = 0$, then clearly $\langle 0,0 \rangle = 0$. Another way to prove this is to recall that $\langle v,v \rangle = 0 \iff v = 0$
>>

Now suppose $V = \mathbb{R}^2$, then we get the well known [[Pythagorean Theorem]].