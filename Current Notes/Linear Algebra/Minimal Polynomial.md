
>[!rmk|*]- Existence, Uniqueness, and degree of minimal Polynomial
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal L (V)$. Then there is a unique [[Monic Polynomial]] $p \in \mathcal P( \mathbb{F})$ of smallest degree such that $p(T) = 0$. Furthermore, $\text{deg}(p) \le \text{dim}(V)$.

>[!def|*] Minimal Polynomial
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal L (V)$. Then the minimal polynomial of $T$ is the unique monic polynomial $p \in \mathcal P (\mathbb{F})$ of smallest degree such that $p(T) = 0$.

>[!rmk|2]- Procedure for Finding the minimal Polynomial
>To find the minimal polynomial $p$. One can pick some $v \in V$ and consider: $$c_0v + c_1 Tv + \dots + c_{\text{dim}(V)-1}T^{\text{dim}(V)-1}v = -T^{\text{dim}(V)}v$$and use a basis of $V$ to convert the equation above to a system of $\text{dim}(V)$ linear equations in $\text{dim}(V)$ unknowns $c_0, c_1, \dots ,c_{\text{dim}(V)}-1$. If the system has unique solutions, then they (as well as $c_{\text{dim}(V)} = 1$ ) are the coefficients to your polynomial. This is easier to do in matrix form and by considering the standard basis. See Example 1.

>[!exm|1]- Using the Procedure to find the minimal Polynomial
>Find the minimal Polynomial of $T \in \mathcal L (\mathbb{F}^5)$: $$T(a,b,c,d,e) = (-3e, 6e+a,b,c,d)$$To find the minimal Polynomial, for simplicity, let us transform it into a matrix. To do so, we input the standard basis $e_1, e_2, e_3, e_4, e_5$ and see what we get:
> - $e_1$: $T(1,0,0,0,0) = (0,1,0,0,0)$
> - $e_2$: $T(0,1,0,0,0) = (0,0,1,0,0)$
> - $e_3$: $T(0,0,1,0,0) = (0,0,0,1,0)$
> - $e_4$: $T(0,0,0,1,0) = (0,0,0,0,1)$
> - $e_5$: $T(0,0,0,0,1) = (-3, 6,0,0,0)$
> 
> Putting this in matrix form we get: $$\mathcal M(T) = \left[ \begin{array}{ccc} 0 & 0& 0& 0 &-3 \\ 1 &0  & 0& 0& 6\\ 0 & 1& 0&0  & 0 \\ 0 &0 &1 & 0 & 0\\0 &0 & 0&1 &0 \end{array} \right]$$Now we pick $v \in V$. Let us choose $v = (0,1,0,0,0)$. Thus we solve:
> - $Tv = T(0,1,0,0,0) = (0,0,1,0,0) = e_3$
> - $T^2v = T(Tv) = T(e_3) = (0,0,0,1,0) = e_4$
> - $T^3v = T(T^2v) = T(e_4) = (0,0,0,0,1) = e_5$
> - $T^4v = T(T^3v) = T(e_5) = (-3,6,-0,0,0) = -3e_1 + 6e_2$
> - $T^5v = T(T^4v) = T(-3e_1 + 6e_2) = -3T(e_1) + 6T(e_2) =-3e_2+ 6e_3$
> 
> Solving for $-T^5v$ is relatively easy here as some powers of $Tv$ map to $3e_2 - 6e_3$. Thus: $$-T^5v = 3e_2 -6e_3 = 3(v) -6(Tv) \implies3v -6Tv+T^5v = 0$$Hence our minimal polynomial is: $$3 - 6z+z^5$$

#### Useful Lemmas
>[!lemma|1]
>If $\lambda$ is an [[Eigenvalue]] of $T \in \mathcal L (V)$, then $\lambda^k$ is an eigenvalue of $T^k$.
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Since $\lambda$ is an eigenvalue of $T$, then: $$Tv = \lambda v \implies T^2v = \lambda Tv \implies T^2v = \lambda^2v \implies \dots$$Repeated application of $T$ with the steps above produces the desired result.
>> `\end{proof}`

>[!lemma|2]
>If $\lambda$ is an [[Eigenvalue]] of $T \in \mathcal L (V)$, then $c\lambda$ is an eigenvalue of $cT$.
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Since $\lambda$ is an eigenvalue of $T$, then: $$Tv = \lambda v \implies cTv = c\lambda v \implies (cT)v = (c \lambda) v$$Hence $c\lambda$ is an eigenvalue of $cT$.
>> `\end{proof}`

>[!lemma|3]
>Suppose $\lambda_1 \; \land \; \lambda_2$ have the same [[Eigenvector|Eigenvectors]], then $\lambda_1 + \lambda_2$ is an eigenvalue of $T_1+T_2$.
>>[!claim|*]- Proof
>>`\begin{proof}`
>>We have (assuming identical eigenvectors): $$(T_1+T_2)v = T_1 v + T_2 v = \lambda_1 v + \lambda_2 v = (\lambda_1 + \lambda_2)v$$Hence $\lambda_1+\lambda_2$ are [[Eigenvalue|Eigenvalues]] of $T_1 + T_2$ as desired.
>>  `\end{proof}`

>[!lemma|4]
>Suppose $T\ \in \mathcal L (V)$ is an [[Invertible Linear Maps|Invertible Linear Map]]. Then:
>1. $\lambda \ne 0$.
>2. $\lambda$ is an [[Eigenvalue]] of $T \iff \frac{1}{\lambda}$ is an eigenvalue of $T^{-1}$.
>
>>[!claim|*]- Proof
>>`\begin{proof}` We show both statements hold.
>>
>>**Part 1**: Suppose $\lambda$ is an eigenvalue of $T$, then: $$Tv = \lambda v \implies T^{-1}Tv = T^{-1}\lambda v \implies v =T^{-1}\lambda v$$Since $\lambda$ is an eigenvalue of $T$, then $v \ne 0$. If $v =0$, then $T$, by definition, would map $T(0) = 0$. Hence $\lambda \ne 0$.
>>
>>**Part 2**: We show $\iff$ the entire way: $$Tv = \lambda v \iff T^{-1}Tv = T^{-1}\lambda v \iff v = \lambda T^{-1} v \iff \frac{1}{\lambda}v = T^{-1} v$$Which holds as $\lambda \ne 0$ by Part $1$. Then by definition of an eigenvalue, we have that $\frac{1}{\lambda}$ is the eigenvalue of $T^{-1}$.
>>  `\end{proof}`
#### Important Theorems
>[!theorem|1] The minimal Polynomial and the Eigenvalues
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal L (V)$.
>1. The zeros of the minimal polynomial of $T$ are the [[Eigenvalue|Eigenvalues]] of $T$.
>2. If $V$ is a complex vector space, then the minimal polynomial of $T$ has the form: $$(z-\lambda_1)\dots(z-\lambda_m)$$where $\lambda_1, \dots \lambda_m$ is a list of all eigenvalues of $T$, possibly with repetitions.
>
>>[!claim|*]- Proof
>>`\begin{proof}`  We show both properties hold.
>>
>>**Part 1**: Let $p$ be the minimal polynomial of $T$. By definition, $p(T) = 0$. Furthermore, by the [[Fundamental Theorem of Algebra]]: $$\exists \: q: p(T)v = (T-\lambda_i I)q(T)v$$But $q(T) \ne 0$, hence:$$0 = (T- \lambda_i I)q(T)v$$Now $q \in \mathcal L (V)$ and $\exists \: v \in V: q(T)v \ne 0$ as if it was, then $q$ would be the minimal polynomial, which is not the case. Hence: $$0 = (T- \lambda_i I) v$$and we conclude $\lambda_i$ is the [[Eigenvalue]] associated with the [[Eigenvector]] $v$. To show that $\lambda_i$ is the zero of the minimal polynomial, consider Lemma 1, which tells us that $T^k v = \lambda_i^k v$. Thus: $$p(T)v = p(\lambda_i)v$$Because $p$ is the minimal polynomial of $T$, we have $p(T)v = 0$. Thus $p(\lambda_i) = 0$ as desired. Thus $p(\lambda_i)$ is a zero of $p$, as desired.
>>
>>**Part 2**: Suppose $V$ is a [[Finite-Dimensional Vector Space|Finite-Dimensional]] complex [[Vector Space]]. By the [[Existence of Eigenvalues]], $T \in \mathcal L (V)$ will have eigenvalues. Now suppose $\lambda$ is an eigenvalue of $T$, then by Part 1, $\lambda$ is the zero of the minimal polynomial $p$. By the [[Fundamental Theorem of Algebra]], we can write: $$(z- \lambda_1)\dots (z-\lambda_n)$$Producing the desired result.
>>`\end{proof}`

>[!theorem|2] Multiples of the minimal Polynomial
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], $T \in \mathcal L (V)$ and $q \in \mathcal P (\mathbb{F})$. Then: $q(T) = 0 \iff q$ is a polynomial multiple of the minimal polynomial of $T$.
>>[!claim|*]- Proof
>>`\begin{proof}` We show implication both ways. In the proof, let $p$ denote the minimal polynomial of $T$.
>>
>>$\implies$: Suppose $q(T) = 0$ By the division algorithm for polynomials, there exists polynomials $s,r \in \mathcal P (\mathbb{F})$: $$q = ps+r$$where $\text{deg}(r) < \text{deg}(p)$. We have: $$0 = q(T) = p(T)s(T) + r(T) = r(T)$$Hence for $q(T) = 0$ to be true, $r(T)$ must be $0$ and hence $q(T) = p(T)s(T)$. 
>>
>>$\impliedby$: Suppose $q$ is a polynomial multiple of $q$. Then: $$q(T) = p(T)s(T) = (0)s(T) = 0$$Where the equation holds since by definition of the minimal polynomial, $p(T) = 0$. The above equation implies $q(T) = 0$ as desired.
>> `\end{proof}`

>[!theorem|3] Operators on odd-dimensional Spaces
>Let $V$ be a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Space]] with $\text{dim}(V) = 2n+1 : n \in \mathbb{N}$. Then any operator $T \in \mathcal L (V)$ has an [[Eigenvalue]].

>[!corollary|1]
>Theorem $1$ gives a new proof of Corollary $1$ in [[Eigenvector|Eigenvectors]].
#### Exercises
>[!exercise|1]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], $T \in \mathcal L (V)$ and $p$ is the minimal polynomial of $T$. Suppose $\alpha \in \mathbb{F}$. Show that the minimal polynomial of $\; T - \alpha I$ is the polynomial $q$ defined by $q(z) = p(z+ \alpha)$.
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Define $q(z) = p(z+ \alpha)$, we will show that it is the minimal polynomial of $T- \alpha I$. To do so, we must show two things:
>>1. Show $q(T- \alpha I) = 0$ (only shows it is a multiple of the minimal polynomial by Theorem 2).
>>2. Show $q$ is indeed the minimal polynomial.
>>
>>**Part 1**:
>>Since $q(z) = p(z+ \alpha)$, we have: $$q(T - \alpha I) = p(T - \alpha I + \alpha I) = p(T) = 0$$Hence $q$ is a multiple of the minimal polynomial. (The above equation holds as, by definition of $q$, we must add $\alpha$. Since we work with $T$, we add $\alpha I$).
>>
>>**Part 2**: 
>>Suppose $h$ is the minimal polynomial of $\: T - \alpha I$. Since $q$ is speculated to be a multiple of the minimal polynomial, we have: $$q(z) = h(z)s(z)$$Then by definition: $$q(T- \alpha I) = h(T- \alpha I) s(T - \alpha I) \implies p(T) = hs( T- \alpha I)$$Now a shifted version of the minimal polynomial should still have the same degree. Since $h$ is assumed to be the minimal polynomial, $\text{deg}(p) = \text{deg}(h)$. The only way this is possible is if $s = 1$ (thus no powers will be multiplied in). Hence: $$q(z) = h(z)(1) \implies q(z) = h(z)$$Since $h$ is the minimal polynomial, by definition of equality and by uniqueness of the minimal polynomial, we conclude $q$ is indeed the minimal polynomial of $\; T - \alpha I$ as desired.
>> `\end{proof}`

>[!exercise|2] 
>Let $V$ be a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Space]] and $T \in \mathcal L (V)$ with $c \in \mathbb{F}/\{0\}$. If $T$ has minimal polynomial $p$, then the minimal polynomial $q$ of $(cT)$ is given by: $$q(z) = c^{\text{deg}(p)}p \left( \frac{1}{c}z \right)$$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Define $q(z) = c^{\text{deg}(p)}p \left( \frac{1}{c}z \right)$, we will show that it is the minimal polynomial of $cT$. To do so, we must show two things:
>>1. Show $q(cT) = 0$.
>>2. Show $q$ is indeed the minimal polynomial.
>>
>>**Part 1**: 
>>Since $q(z) = c^{\text{deg}(p)}p \left( \frac{1}{c}z \right)$, we have: $$q(cT) = c^{\text{deg}(p)}p \left( \frac{1}{c}cT \right) = c^{\text{deg}(p)}p(T) = c^{\text{deg}(p)}(0) = 0$$Hence $q(cT) = 0$. Thus $q(cT)$ is a multiple of the minimal polynomial.
>>
>>**Part 2**:
>>Suppose $h$ is the minimal polynomial of $cT$. Part $1$ told us that: $$q(cT) =h(cT)s(cT)$$where $s$ is some polynomial. Now notice that by definition, $\text{deg}(q) = \text{deg}(p)$. Now, let us build $h$ in such a way that it is a monic polynomial for $T$. Define: $$\frac{1}{c^{\text{deg}(p)}}h(cz) = \frac{1}{c^{\text{deg}(p)}}\left( \sum_{j=0}^{k-1}a_j(cz)^j \right) + \frac{1}{c^{\text{deg}(p)}}c^{\text{deg}(p)}z^{\text{deg}(p)}$$Which in turn produces a monic polynomial of $T$ (I simply pulled out the last term of the summation). But since $p$ is the monic polynomial of $T$, we must have, by uniqueness, that: $$p(z) = \frac{1}{c^{\text{deg}(p)}}h(cz)$$where $h(cT)$ is the minimal polynomial for $cT$. Thus now we show $q(cT) = h(cT)$ (or that $s \in \mathbb{F}$): $$q(cT) = c^{\text{deg}(p)}p \left( \frac{1}{c}cT \right)  = c^{\text{deg}(p)}p \left(T \right) = \frac{c^{\text{deg}(p)}}{c^{\text{deg}(p)}}h(cT) = h(cT)$$Since $h$ is the minimal polynomial of $cT$. Then by uniqueness, $q$ is the minimal polynomial of $cT$, as desired.
>> `\end{proof}`

>[!exercise|3]
>Let $T \in \mathcal L (\mathbb{F}^n):$ $$T(x_1, \dots x_2) = (1x_1, \dots, nx_n)$$
>1. Find the [[Eigenvalue|Eigenvalues]] and [[Eigenvector|Eigenvectors]].
>2. Find the minimal polynomial.
>
>>[!claim|*]- Solution
>>**Part 1**: By definition of eigenvalues, we want $\lambda \in \mathbb{F}$ with a non-zero associated eigenvector. (Hence $v \ne 0$). Now let $v = (x_1, \dots, x_n)$. Then: $$Tv = \lambda v \implies T(x_1, \dots, x_n) = \lambda(x_1, \dots ,x_n)$$Which gives: $$(1x_1, 2x_2, 3x_3, \dots, nx_n) =  (\lambda x_1,\lambda x_2,\lambda x_3, \dots ,\lambda x_n)$$From this, if we set $\lambda = j$ for the entry $a_j$, then all other entries $a_k : k \ne j$ will need to be $0$. In other words, the system: $$ \begin{array}{ccc} 1x_1 =\lambda x_1  \\ \vdots \\ jx_j = \lambda x_j\\ \vdots\\nx_n = \lambda x_n  \end{array}$$When given $\lambda = j$ forces $\{x_1, \dots ,x_n\}/\{x_j\} = 0$. From this, it is clear that the eigenvalues are given by $\lambda_j = j \; \; \forall \: j \in \{n : n \in \mathbb{N}\}$. (Hence $n$ **distinct** eigenvalues are present). The associated eigenvectors are given by setting $x_j = 1$ and all other components to $0$. Hence: 
>>- $\lambda = 1 \implies (1,0,0, \dots, 0)$
>>- $\lambda = 2 \implies (0,1,0, \dots, 0)$
>>- $\lambda = n \implies (0,0,0, \dots ,1)$
>>
>>**Part 2**: We know from Theorem 1 that the roots of the minimal polynomial are the eigenvalues we found. Thus: $$p(z) = (z-1 )^{m_1}\dots (z - n)^{m_n}$$Where $m_1, \dots , m_n$ are added every time we do this procedure as we usually don’t know if any of the eigenvalues are repeated. However, in this case, we can clearly see that there will be no repeated eigenvalues, but let us prove it:
>>
>>Since $\text{deg}(p) \le \text{dim}(\mathbb{F}^n) = n$ (by Corollary $1$ in [[Eigenvector|Eigenvectors]]). If any $m_j > 1$, we will clearly have $\text{deg}(p) > \text{dim}(\mathbb{F}^n)$ since we already had $n$ distinct eigenvalues. Hence $m_1 = \dots = m_n$. Thus: $$p(z) = (z-1)\dots(z-n)$$Is our minimal polynomial.