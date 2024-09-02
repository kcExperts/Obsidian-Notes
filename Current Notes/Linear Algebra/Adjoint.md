Be familiar with the [[Inner Product]].
>[!def|*] Adjoint $T^*$
>Suppose $T \in \mathcal{L}(V,W)$. The adjoint of $T$ is the function $T^*: W \rightarrow V$: such that: $$\langle Tv, w \rangle = \langle v, T^*w \rangle$$For every $v \in V$ and every $w \in W$.

>[!rmk|*]- Why this makes sense
>Suppose $T \in \mathcal{L}(V,W)$. Fix $w \in W$. Consider the [[Linear Functional]]: $$v \rightarrow \langle Tv, w \rangle$$ on $V$ that maps $v \in V$ to $\langle Tv, w \rangle$; this linear functional depends on $T$ and $w$. By the [[Riesz Representation Theorem]], $\exists$ a unique $v \in V$ such that this linear functional is given by taking the inner product with it. We call this unique vector $T^* w$. 

>[!exm|1]- Finding the Adjoint
>Define $T: \mathbb{R}^3 \rightarrow \mathbb{R}^2$ by: $$T(x_1,x_2,x_3) = (x_2+3x_3,2x_1)$$
>To compute $T^*$, we need to find a map $T^*$ such that the [[Riesz Representation Theorem]] holds. Thus: $$\langle T(x_1,x_2,x_3),(y_1,y_2)\rangle = \langle(x_2+3x_3,2x_1),(y_1,y_2)\rangle$$Using the [[Euclidean Inner Product]], we get: $$= y_1x_2+3x_3y_1+2x_1y_2 = 2x_1y_2+y_1x_2+3x_3y_1$$The goal here is to recover our $(x_1,x_2,x_3)$ and we can clearly see how to do this: $$= \langle(x_1,x_2,x_3),(2y_2,y_1,3y_1)\rangle$$Hence we must have that: $$T^*(y_1,y_2) = (2y_2,y_1,3y_1)$$
>You may notice that $T^*$ is a linear map.

>[!theorem|1] Adjoint of a linear map is a linear map
>If $T \in \mathcal{L}(V,W)$, then $T^* \in \mathcal L (W,V)$. 

>[!claim|*]- Proof of Theorem 1
>`\begin{proof}`
>We show that $T^*$ follows the axioms of a [[Linear Maps|Linear Map]]. To do so, suppose $v \in V$ and $w_1, w_2 \in W$. Then we need to show that $T^*(w_1+w_2) = T^*w_1 + T^*w_2$. To do so, we use the definition: $$\langle v, T^*(w_1+w_2) \rangle = \langle Tv, w_1+w_2 \rangle =\langle Tv, w_1\rangle +\langle Tv, w_2\rangle = \langle v, T^*w_1 \rangle + \langle v, T^*w_2 \rangle$$
>The above equation implies that $T^*(w_1+w_2) = T^*w_1+T^*w_2$ as desired.
>
>We must now show homogeneity. We again use the definition: $$\langle v,T^*(\lambda w) \rangle = \langle Tv, \lambda w \rangle = \overline \lambda \langle Tv, w \rangle = \overline \lambda \langle v, T^*w \rangle = \langle v, \lambda T^*w \rangle$$The above equation implies homogeneity.
>`\end{proof}`

>[!theorem|2] Properties of the Adjoint
>Suppose $T \in \mathcal{L}(V,W)$, then the following hold:
>1. $(S+T)^* = S^* + T^* \; \; \forall S \in \mathcal{L}(V,W)$.
>2. $(\lambda T)^* = \overline \lambda T^* \; \; \forall \lambda \in \mathbb{F}$
>3. $(T^*)^* = T$
>4. $(ST)^* = T^*S^* \; \; \forall S \in \mathcal{L}(V,W)$. Where $U$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]].
>5. $I^* = I$ (also read as $Id^* = Id$)
>6. If $T$ is an [[Invertible Linear Maps|Invertible Linear Map]], then $T^*$ is invertible and $(T^*)^{-1} = (T^{-1})^*$

>[!claim|*]- Proof of Theorem 2 TO FINISH
>`\begin{proof}`
>**Property 1**:
>We have: $$\langle v,(S+T)^*w\rangle=\langle (S+T)v,w\rangle = \langle Sv+Tv , w \rangle  = \langle Sv,w \rangle + \langle Tv,w \rangle  = \langle v,S^*w \rangle + \langle v,T^*w \rangle$$Thus property $1$ holds.
>
>**Property 2**:
>We have: $$\langle v,(\lambda T)^*w\rangle=\langle (\lambda T)v,w\rangle = \lambda \langle v,T^*w \rangle = \langle v,\overline \lambda T^* w \rangle$$Thus property $2$ holds.
>
>**Property 3**:
>Consider: $$\langle T^*w,v \rangle = \overline{\langle v , T^*w\rangle} = \overline{\langle Tv, w \rangle} = \langle w,Tv \rangle$$Hence $(T^*)^* v = Tv$, as desired. 

>[!theorem|3] On the topic of the null space and range
>Suppose $T \in \mathcal{L}(V,W)$, then:
>1. $\text{null}(T^*) = \text{range}(T)^\perp$
>2. $\text{range}(T^*) = \text{null}(T)^\perp$
>3. $\text{null}(T) = \text{range}(T^*)^\perp$
>4. $\text{range}(T) = \text{null}(T^*)^\perp$

>[!claim|*]- Proof of Theorem 3
>`\begin{proof}`
>We have: $$\begin{array}{ccc} w \in \text{null}(T^*) \iff T^*w = 0 \iff \langle v, T^* w \rangle =0 \; \; \forall v \in V  \\ \iff \langle  Tv,w \rangle  = 0 \; \; \forall v \in V \iff w \in \text{range}(T)^\perp\\  \end{array}$$This proves part $1$. Taking the [[Orthogonal Complement]] of both sides of $1$ gives $4$. Replacing $T$ with $T^*$ in part $1$ gives part $3$. Replacing $T$ with $T^*$ in part $4$ gives part $2$.
>`\end{proof}`










