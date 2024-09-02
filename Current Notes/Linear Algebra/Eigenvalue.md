---
aliases:
  - Eigenvalues
---

>[!def|*] Eigenvalue
>Suppose $T \in \mathcal L (V)$. A $\lambda \in \mathbb{F}$ is called an eigenvalue of $T$ if: $$\exists \: v \in V: v \ne 0 \; \land \; Tv = \lambda v$$

>[!exm|1]-
>Define $T \in \mathcal L(\mathbb{F}^3)$ by: $$T(x,y,z) = (7x+3z, 3x+6y+9z,-6y)$$for $(x,y,z) \in \mathbb{F}^3$. Consider $v = (3,1,-1)$. Then: $$T(3,1,-1) = (18,6,-6) = 6(3,1,-1)$$Hence $6$ is an eigenvalue of $T$.

>[!theorem|1] Equivalent Conditions to be an Eigenvalue
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], $T \in \mathcal L (V)$, and $\lambda \in \mathbb{F}$. Then the following are equivalent.
>1. $\lambda$ is an eigenvalue of $T$.
>2. $T - \lambda I$ is not [[Injective]].
>3. $T- \lambda I$ is not [[Surjective]].
>4. $T - \lambda I$ is not [[Invertible]].
>
>>[!claim|*]- Proof
>> `\begin{proof}` We show a circle of implications.
>> 
>> **1 $\implies$ 2**: Suppose $\lambda$ is an eigenvalue of $T$, then $Tv = \lambda v$. Rearranging nets us $Tv - \lambda v = 0 \implies v(T - I \lambda) = 0$. Since $v \ne 0$, then $\text{null}(T) \ne \{0\}$ and we conclude that $T$ is not injective.
>> 
>> **2 $\implies$ 3 $\implies$ 4**: Recall Theorem 2 in [[Invertible Linear Maps]]. Since $T\in \mathcal L (V)$ and $V$ is finite-dimensional, we can apply the theorem and the implications follow directly.
>> 
>> **4 $\implies$ 1**: Suppose $T- \lambda I$ is not invertible. Hence by Theorem 2 in [[Invertible Linear Maps]], it is not injective, hence $\text{null}(T) \ne \{0\}$. Then let $v \in V$: $$v(T-\lambda I) =0 \implies Tv - \lambda v = 0 \implies Tv = \lambda v \implies \lambda \ne 0$$Since $v \ne 0$. Hence $\lambda$ is an eigenvalue of $T$.
>>  `\end{proof}`

#### Exercises
>[!exercise|1]
>Show that the operator $T \in L(\mathbb{F}^2)$ defined by: $$T(x,y) = (cy,x)$$has [[Eigenvalue|Eigenvalues]] $\lambda_{1,2} = \pm \sqrt c$. 
>>[!claim|*]- Solution
>>`\begin{proof}` 
>>We want to find $\lambda \in \mathbb{F}$: $$Tv = \lambda v$$To do so, let $v = (x,y)$, then: $$T(x,y) = \lambda v \implies (cy,x) = (\lambda x, \lambda y)$$Clearly we need to solve: $$\begin{array}{ccc} cy=\lambda x \\ x = \lambda y\end{array} \implies cy = \lambda^2 y \implies c = \lambda^2 \implies \lambda = \pm \sqrt c $$as desired.
>> `\end{proof}`


