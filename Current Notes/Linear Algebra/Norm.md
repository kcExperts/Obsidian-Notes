The norm can be equated to the length of a vector. Using the [[Inner Product]], we see that it defines a norm.

>[!def|*] Norm
>For $v \in V$, the norm of $v$, denoted $||v||$ is defined by: $$||v|| = \sqrt{\langle v,v \rangle}$$See Exercise 2 for a proof that this holds.

>[!def|*] Inducing a norm
>An inner product induces a norm if: 
>- $||v|| = 0 \iff v =0$
>- $||\lambda v|| = |\lambda | ||v|| \; \forall \: \lambda \in \mathbb{F}$
>- [[Triangle Inequality]] holds ($||u+v|| \le ||u|| + ||v||$)

##### Exercises
>[!exercise|1]
>Suppose $V$ is a real [[Inner Product Space]].
>1. Show that $\langle u+v,u-v \rangle = ||u||^2 - ||v||^2 \; \; \forall \: u,v \in V$
>2. Show that if $||u|| = ||v|| \implies \langle u+v,u-v \rangle = 0$
>
>>[!claim|*]- Solutions
>>**1**: We have: $$\langle u+v,u-v \rangle = \langle u,u-v \rangle + \langle v,u-v \rangle = \langle u,u \rangle - \langle u,v \rangle + \langle v,u \rangle - \langle v,v \rangle$$Since $V$ is a **real** [[Inner Product Space]], the conjugate symmetry property of the [[Inner Product]] becomes the symmetry property, thus: $$ =\langle u,u \rangle + \langle u,v \rangle - \langle u,v \rangle - \langle v,v \rangle = \langle u,u \rangle - \langle v,v \rangle = ||u||^2 + ||v||^2$$
>>Thus: $$\langle u+v,u-v \rangle = ||u||^2 - ||v||^2 \; \; \forall \: u,v \in V$$
>>**2**: Suppose $||v|| = ||u|| \implies ||v||^2 = ||u||^2 \implies ||v||^2 - ||u^2|| = 0$. Thus: $$\langle u+v,u-v \rangle = 0$$By definition of [[Orthogonal]] vectors, $u+v \; \land \; u-v$ are orthogonal. 

>[!exercise|2]
>Let $(V, \langle \cdot ,\cdot \rangle)$ be an [[Inner Product Space]]. Show that the [[Inner Product]] induces a norm: $|| \cdot || = \sqrt{\langle \cdot ,\cdot \rangle}$
>>[!claim|*]- Solution
>>We show that the definition above satisfies the $3$ properties of inducing a norm:
>>
>>**1**: We show that $||v|| = 0 \iff v = 0$. Clearly: $$||v|| = 0 \iff ||v||^2 = 0 \iff \langle v,v \rangle = 0 \iff v = 0$$Which holds by definiteness property of [[Inner Product]].
>>
>>**2**: We show that $||\lambda v|| = |\lambda| ||v|| \; \forall \: \lambda \in \mathbb{F}$. Clearly: $$||\lambda v|| ^2 = \langle \lambda v,\lambda v \rangle = \lambda \langle v,\lambda v \rangle = \lambda \bar \lambda \langle v,v \rangle = |\lambda |^2 ||v||^2$$Taking the square root of both sides leaves: $$||\lambda v || = |\lambda| ||v||$$
>>**3**: We show that the [[Triangle Inequality]] holds: $$||u+v||^2 = ||u||^2 + \langle u,v \rangle + \langle v,u \rangle + ||v||^2 = ||u||^2 + ||v||^2 + \langle u,v \rangle + \overline{ \langle u,v \rangle}$$Recall that: $\langle u,v \rangle + \overline{ \langle u,v \rangle} = 2 \mathcal{R} (\langle u,v \rangle) \le 2| \mathcal{R}( \langle u,v \rangle)| \le 2| \langle u,v \rangle| \le 2 ||u|| \cdot ||v||$ which holds by the [[Cauchy-Schwarz Inequality]]. Thus:
>>$$\le ||u||^2 + ||v||^2 + 2||u || \cdot ||v|| = (||u|| + ||v||)^2$$Taking the square root of both ends of the equation and inequality nets: $$||u+v||^2 \le (||u|| + ||v||)^2 \implies ||u+v|| \le ||u|| + ||v||$$
>>
>>Thus our definition of a norm holds. We conclude that the inner product induces a norm.


