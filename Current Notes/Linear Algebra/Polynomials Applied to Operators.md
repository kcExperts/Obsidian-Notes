The main reason that rich theory exists for an operator is because they can be raised to powers.

>[!def|*]- #Power Notation: $T^m$
>Suppose $T \in \mathcal L (V)$ and $m \in \mathbb{Z}_+$:
>- $T ^m \in \mathcal L (V)$ is defined by $T^m = T \cdot \dots \cdot T$ $m$ times.
>- $T^0$ is defined to be the identity operator $I$ on $V$.
>- If $T$ is an [[Invertible Linear Maps|Invertible Linear Map]] with $T^{-1}$, then $T^{-m}$ is: $$T^{-m} = (T^{-1})^m$$

>[!def|*] Polynomials applied to operators $p(T)$
>Suppose $T \in \mathcal L (V)$ and $p \in \mathcal P (\mathbb{F})$ is a polynomial given by: $$p(z) = a_0 + a_zz + a_2z^2 + \dots + a_mz^m = \sum_{j=0}^ma_jz^j$$
>$\forall \: z \in \mathbb{F}$. Then $p(T)$ is the operator on $V$ defined by: $$p(T) = a_0I + a_1T + a_2T^2 + \dots +a_mT^m$$Note that $p(T)$ is a [[Linear Maps|Linear Map]].

>[!exm|1]-
>Suppose $D \in \mathcal L (\mathcal P(\mathbb{R})): Dq = q'$ and $p(x) = 7-3x+5x^2$. Then: $$p(D) = 7I-3D+5D^2$$And hence: $$(p(D))q = 7q -3q' + 51''$$

We now define the product of polynomials:

>[!def|*] Product of Polynomials
>Suppose $p,q \in \mathcal P(\mathbb{F})$, then $pq \in \mathcal P(\mathbb{F})$ is the polynomial: $$(pq)(z) = p(z)q(z)$$$\forall \: z \in \mathbb{F}$.

>[!rmk|1]- Multiplicative Properties
>Suppose $p,q \in \mathcal P(\mathbb{F}) \; \land \; T \in \mathcal L (V)$, then: 
>1. $(pq)(T) = p(T)q(T)$
>2. $p(T)q(T) = q(T)p(T)$
>
>>[!claim|*]- Proof
>>`\begin{proof}` We show both properties hold.
>>
>>**Part 1**: Let $p(z) = \sum_{j=0}^m a_jz^j \; \land \; q(z) = \sum_{k=0}^n b_kz^k$, then: $$(pq)(T) = \sum_{j=0}^m \sum_{k=0}^n a_jb_kT^{j+k} = \sum_{j=0}^m \sum_{k=0}^n a_jb_kT^jT^k$$Then by linearity of $T$, we have: $$= \left(  \sum_{j=0}^m a_jT^j \right)  \left(  \sum_{k=0}^n b_kT^k \right) = p(T)q(T)$$which is the desired result.
>>
>>**Part 2**: Recall from the previous section: $$ p(T)q(T)=\left(  \sum_{j=0}^m a_jT^j \right)  \left(  \sum_{k=0}^n b_kT^k \right)$$Since $T$ is a linear map and since $a_i , b_i \in \mathbb{F}$, we can reverse them: $$=   \left(  \sum_{k=0}^n b_kT^k \right) \left(  \sum_{j=0}^m a_jT^j \right) = q(T)p(T)$$
>>Another simple proof is given by: $$p(T)q(T) = (pq)(T) = (qp)(T) = q(T)p(T)$$Which is the desired result.
>>  `\end{proof}`

And finally present the theorem of this section:

>[!theorem|1]
>Suppose $T \in \mathcal L (V) \; \land \; p \in \mathcal P(\mathbb{F})$. Then $\text{null}(p(T)) \; \land \; \text{range}(p(T))$ are [[Invariant Subspaces]] under $T$.
>>[!claim|*]- Proof
>>`\begin{proof}` Let us show both statements are true:
>>
>>**Null**: Suppose $u \in \text{null}(p(T))$. Hence $p(T)u = 0$. We want to show that $Tu \in \text{null}(p(T))$ to show invariance (by definition). $$p(T)(Tu) = \left( \sum_{j=0}^m a_jT^j \right)(Tu) = \left( \sum_{j=0}^m a_jT^jT \right) u $$
>>Which holds by linearity of $T$. Using this, we get: $$ =T \left( \sum_{j=0}^m a_jT^j \right)u = T(p(T)u) = T(0) = 0$$
>>Hence $Tu \in \text{null}(p(T))$. Thus $\text{null}(p(T))$ is invariant under $T$ as desired.
>>
>>**Range**: Suppose $u \in \text{range}(p(T))$. Then $\exists \: v \in V : u = p(T)v$. Thus: $$Tu = T(p(T)v) = p(T)(Tv)$$Hence $Tu \in \text{range}(p(T))$. Thus $\text{range}(p(T))$ is invariant under $T$ as desired.
>> `\end{proof}`



