Suppose we wanted to write a vector $v$ as a [[Linear Combination]] of an [[Orthonormal Basis]].

>[!def|*] Writing a Vector as a Linear Combination of an Orthonormal Basis
>Suppose $e_1, \dots, e_n$ is an orthonormal basis of $V \; \land \; u,v \in V$, then:
>1. $v =  \langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n$
>2. $||v||^2 = | \langle v,e_1 \rangle|^2 + \dots + | \langle v,e_n \rangle|^2$
>3. $\langle u,v \rangle = \langle u,e_1\rangle \overline{\langle v,e_1 \rangle} + \dots + \langle u,e_n \rangle \overline{ \langle v,e_n \rangle}$
>
>>[!claim|*]- Proof
>>`\begin{proof}` We show that all results hold.
>>
>>**Part 1**: 
>>As $e_1, \dots , e_n$ is a [[Basis]] for $V$, then $\exists \: \lambda_1, \dots , \lambda_n \in \mathbb{F}:$ $$v = \lambda_1 e_1 + \dots + \lambda_ne_n$$Since $e_1, \dots , e_n$ is [[Orthonormal]], then taking the inner product with some $e_k : k \in [1,n]$ gives us: $$\langle v, e_k \rangle = \lambda_1 \langle e_1, e_k \rangle + \dots + \lambda_n\langle e_n, e_k \rangle = \lambda_k$$Which holds from the definition of [[Orthonormal]]. Now this holds $\forall \: k$. Substituting our expression for $\lambda_k$ into the expression of $v$ above gives: $$v =  \langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n$$
>>**Part 2**: 
>>Take the result of $1$, take its [[Norm]] and square it: $$||v||^2 =  ||\langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n||^2$$Using the [[Orthonormal|Orthonormal Linear Combination]], we get: $$||v||^2 = | \langle v, e_1 \rangle|^2 + \dots + | \langle v, e_n \rangle|^2$$Which holds as we recall $\lambda_k = \langle v, e_k \rangle$ from part $1$.
>>
>>**Part 3**:
>> Recall $v = \lambda_1 e_1 + \dots + \lambda_ne_n$. Applying the [[Inner Product]] with $u$ to both sides nets: $$\langle u,v \rangle = \langle u, \lambda_1 e_1 \rangle + \dots + \langle u,\lambda_n e_n \rangle = \overline \lambda_1 \langle u, e_1 \rangle + \dots + \overline \lambda_n \langle u, e_n \rangle$$Which holds by conjugate symmetry. Since  $\lambda_k = \langle v, e_k \rangle$, we conclude: $$\langle u,v \rangle = \langle u,e_1\rangle \overline{\langle v,e_1 \rangle} + \dots + \langle u,e_n \rangle \overline{ \langle v,e_n \rangle}$$Which is what we wanted.
>>`\end{proof}`

>[!exm|*] Finding Coefficients for a Linear Combination
>Suppose we want to write $(1,2,4,7) \in \mathbb{F}^4$ as a [[Linear Combination]] of the [[Orthonormal Basis]]:$$(\frac{1}{2},\frac{1}{2},\frac{1}{2},\frac{1}{2}), (\frac{1}{2},\frac{1}{2},-\frac{1}{2},-\frac{1}{2}),(\frac{1}{2},-\frac{1}{2},-\frac{1}{2},\frac{1}{2}), (-\frac{1}{2},\frac{1}{2},-\frac{1}{2},\frac{1}{2})$$To do so, we apply the formula described in part $1$ above. We apply it using the standard definition of the inner product for $\mathbb{F}^n$, being the [[Euclidean Inner Product]]. Applying our formula gives us: $$(1,2,4,7) = 7(\frac{1}{2},\frac{1}{2},\frac{1}{2},\frac{1}{2}) -4 (\frac{1}{2},\frac{1}{2},-\frac{1}{2},-\frac{1}{2}) + (\frac{1}{2},-\frac{1}{2},-\frac{1}{2},\frac{1}{2}) + 2(-\frac{1}{2},\frac{1}{2},-\frac{1}{2},\frac{1}{2})$$

#### Exercises
>[!exercise|1]
>Suppose that $\{e_1, \dots , e_n\}$ is an orthonormal list of vectors in an [[Inner Product Space]] $V$. Let $v \in V$. Prove that: $$||v||^2 = \sum_{j=1}^m| \langle v,e_j \rangle|^2 \iff v \in \text{span}(e_1, \dots , e_n)$$
>>[!claim|*]- Proof
>>`\begin{proof}` We show a line of $\iff$ all the way:
>>
>>$\implies$: Suppose $||v||^2 = \sum_{j=1}^m| \langle v,e_j \rangle|^2$, then: $$||v||^2 = | \langle v,e_1 \rangle|^2 + \dots + | \langle v,e_n \rangle|^2 = ||\langle v,e_1 \rangle e_1 ||^2 + \dots + ||\langle v,e_n \rangle e_n ||^2$$By repeated application of the [[Pythagorean Theorem]], we have:$$||v||^2 =||\langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n||^2$$Hence: $$v = \langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n$$Clearly $\langle v,e_j \rangle \in \mathbb{F}$. Denote $\langle v,e_j \rangle$ as $\lambda_j$. Thus: $$v = \lambda_1 e_1 + \dots +  \lambda_n e_n$$Hence $v$ is a [[Linear Combination]] of $e_1, \dots , e_n$, thus it is in it’s [[Span]], as desired.
>>
>>$\impliedby$: Suppose $v \in \text{span}(e_1, \dots , e_n)$. Then: $$v = \lambda_1e_1 + \dots + \lambda_n e_n$$Taking the inner product with $e_k$ gives: $$\langle v,e_k \rangle = \lambda_k$$which holds as $\langle e_k,e_k \rangle = 1 \; \land \; \langle e_k,e_j \rangle=0 \; \forall \: j \ne k$. Thus: $$v =  \langle v,e_1 \rangle e_1 + \dots +  \langle v,e_n \rangle e_n$$Following the same steps as in $\implies$, we end up with: $$||v||^2 = \sum_{j=1}^m| \langle v,e_j \rangle|^2$$as desired.
>>  `\end{proof}`

The above result provides an equality condition for [[Bessel’s Inequality]].