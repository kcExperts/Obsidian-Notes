---
aliases:
  - Moore-Penrose Inverse
---

>[!rmk|*]- Motivation
>Suppose $T \in \mathcal{L}(V,W)$ and $b \in W$. Consider the problem of finding $x \in V$ such that: $$Tx = b$$For example, if $V = \mathbb{F}^n$ and $W = \mathbb{F}^m$, then the equation above could represent a system of $m$ linear equations with $n$ unknowns. We know that if $T$ is an [[Invertible Linear Maps|Invertible Linear Map]], then the solution is $x = T^{-1} b$. 
>
>But what to do if $T$ is not invertible? Clearly we may have no solution or infinite solutions.
>
>If $T$ has no solutions, we may as well find some $x \in V$ such that $||Tx - b||$ is minimized. If $T$ has infinite solutions, we may as well find the solution such that $||Tx - b||$ is as small as possible. 
>
>The Pseudoinverse will provide the tool to solve the equation as well as possible, even when $T$ is not invertible. 

Make sure you are familiar with Theorem 1 in [[Restriction of a Map]]. 

>[!def|*] Pseudoinverse / Moore-Penrose Inverse $T^\dagger$
>Suppose that $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal{L}(V,W)$. The pseudoinverse $T^\dagger \in \mathcal{L}(V,W)$ of $T$ is the [[Linear Maps|Linear Map]] from $W$ to $V$ defined by: $$T^\dagger w = (T|_{(\text{null}(T))^\perp }) ^{-1} P_{\text{range}(T)} w$$for each $w \in W$.
>
>Note that $P_{\text{range}(T)}$ is the [[Orthogonal Projection]] of $V$ onto $\text{range}(T)$.

>[!rmk|*]- On the topic of the $T^\dagger$
>Recall that $P_{\text{range}(T)} w = 0$ if $w \in (\text{range}(T))^\perp$.
>>[!claim|*]- Why the above statement in true
>>Recall that $\text{range}(T)$ is a subspace of $W$, thus by Theorem 1 in [[Orthogonal Complement]]: $W = \text{range}(T) \oplus (\text{range}(T))^\perp$. Hence if $u \in \text{range}(T)$ and $x \in (\text{range}(T))^\perp$, then $w = u + x$. If $w \in (\text{range}(T))^\perp$, then our expression reduces to $w = 0 + x$. By definition of [[Orthogonal Projection]], $w = 0$.
>
>Thus: $$w \in (\text{range}(T))^\perp \implies T^\dagger w= 0$$Similarly $P_{\text{range}(T)}w=w$ if $w \in \text{range}(T)$ (for similar reasons as above). Thus if $w \in \text{range}(T)$, then $T^\dagger w$ is the unique element of $(\text{null}(T))^\perp: T(T^\dagger w) =w$.

The Pseudoinverse defined as such tends to act much like an inverse.

>[!theorem|1] Algebraic Properties of $T^\dagger$
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal{L}(V,W)$, then the following hold:
>1. If $T$ is an [[Invertible Linear Maps|Invertible Linear Map]], then $T^\dagger = T^{-1}$.
>2. $TT^\dagger = P_{\text{range}(T)} =$ the [[Orthogonal Projection]] of $W$ onto $\text{range}(T)$.
>3. $T^\dagger T = P_{\text{null}(T))^\perp} =$ the orthogonal projection of $V$ onto $\text{null}(T))^\perp$.
>
>>[!claim|*]- Proof
>>`\begin{proof}` We show all properties hold.
>>
>>**Part 1**: 
>>Suppose $T$ is invertible. Recall the definition of $T^\dagger$: $$T^\dagger w= (T|_{(\text{null}(T))^\perp }) ^{-1} P_{\text{range}(T)} w$$However, since $T$ is invertible, $\text{range}(T) = W$. By definition, $w \in W$, thus $P_W(w) = w$ (see [[Orthogonal Projection]] property $2$). Now recall that: $$V = \text{null}(T) \oplus (\text{null}(T))^\perp$$Which holds by Theorem 1 in [[Orthogonal Complement]]. Since $T$ is invertible, $\text{null}(T) = \{0\}$. Thus $V = (\text{null}(T))^\perp$. Hence our inverse $T|_{(\text{null}(T))^\perp }^{-1}$ turns out to be $T^{-1}:W \rightarrow V$. Hence: $$T^\dagger w= (T|_{(\text{null}(T))^\perp }) ^{-1} P_{\text{range}(T)} w = T^{-1} I_w w = T^{-1}w$$Hence: $$T^\dagger = T^{-1}$$as desired.
>>
>>**Part 2**:
>>We show $TT^\dagger = P_{\text{range}(T)}$ . To do so, suppose $w \in \text{range}(T)$. Thus: $$T T^\dagger (w) = T(T|_{\text{null}(T))^\perp})^{-1}(w)$$Which holds as if $w \in \text{range}(T)$, then $P_{\text{range}(T)} w= w$ by definition. Clearly $T(T|_{\text{null}(T))^\perp})^{-1}$ maps the unique element of $w$ back to itself, thus: $$T(T|_{(\text{null}(T))^\perp})^{-1}(w) = w = P_{\text{range}(T)} (w)$$Which holds by definition of the orthogonal projection. Now if $w \in (\text{range}(T))^\perp$, then $T^\dagger w =0$ (again by definition of the orthogonal projection). Hence: $$T T^\dagger w = 0 = P_{\text{range}(T)} (w)$$Thus this holds $\forall w$, we conclude: $$T T^\dagger = P_{\text{range}(T)}$$as desired.
>>
>>**Part 3**: 
>>We show $T^\dagger T = P_{(\text{null}(T))^\perp}$. To do so, suppose $v \in (\text{null}(T))^\perp$, then: $$T^\dagger T(v) =  (T|_{(\text{null}(T))^\perp }) ^{-1} P_{\text{range}(T)} \; T(v) = T^\dagger w= (T|_{(\text{null}(T))^\perp }) ^{-1} (Tv)$$Which holds as $Tv \in \text{range}(T)$. Hence: $$ (T|_{(\text{null}(T))^\perp }) ^{-1} (Tv) = v = P_{(\text{null}(T))^\perp}(v)$$Which holds since $v \in (\text{null}(T))^\perp$ (following directly from the definition of the orthogonal complement).
>>Now suppose $v \in \text{null}(T)$, then: $$T^\dagger T(v) =  (T|_{(\text{null}(T))^\perp }) ^{-1}  \; T(v) = 0 = P_{(\text{null}(T))^\perp}(v)$$Which holds for similar reasons described above. Since this holds $\forall v$, we conclude: $$T^\dagger T = P_{\text{null}(T))^\perp}$$as desired.
>> `\end{proof}`

>[!theorem|2] Best Fit Approximate 
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], $T \in \mathcal{L}(V,W) \; \land \; b \in W$.
>1. $x \in V \implies ||T(T^\dagger b) - b|| \le ||Tx - b||$ 
>with equality $\iff x \in T^\dagger b + \text{null}(T)$.
>3. $x \in T^\dagger b + \text{null}(T) \implies || T^\dagger b|| \le ||x||$ with equality $\iff x = T^\dagger b$.
>
>>[!claim|*]- Proof
>>`\begin{proof}` We prove all the results.
>>
>>**Part 1**: 
>>Suppose $x \in V$, then: $$Tx - b = Tx-b+T T^\dagger b -T T^\dagger b = (Tx - T T^\dagger b) + ( T T^\dagger b - b)$$Taking the [[Norm]] squared of both sides: $$||Tx - b||^2 = ||(Tx - T T^\dagger b) + (T T^\dagger b - b)||^2$$By the [[Pythagorean Theorem]], we get:$$||Tx - b||^2 = ||(Tx - T T^\dagger b)|| + ||(T T^\dagger b - b)||^2$$And by removing the undesired term, we are left with: $$||Tx - b||^2 \ge ||T T^\dagger b - b||^2 $$Taking the square root of both sides leaves us with: $$||T T^\dagger b - b|| \le ||Tx - b||$$which is what we were after.
>>
>>Now suppose $x \in T^\dagger b + \text{null}(T)$ and recall:$$Tx - b = (Tx - T T^\dagger b) + ( T T^\dagger b - b)$$We will have equality only if $Tx - T T^\dagger b = 0$. Since $x \in T^\dagger b + \text{null}(T)$: $$Tx - T T^\dagger b \implies T T^\dagger b+ T\text{null}(T) - T T^\dagger b =0$$Which holds since $T \text{null}(T) = 0$. 
>>
>>**Part 2**:
>>Suppose $x \in T^\dagger b + \text{null}(T)$, then $x- T^\dagger b \in \text{null}(T)$. Now: $$x = (x- T^\dagger b) + T^\dagger b$$Applying the norm square, then using the [[Pythagorean Theorem]] then finally removing the undesired term and rooting the equation leaves us with: $$|| T^\dagger b|| \le ||x||$$Now suppose $x= T^\dagger b$ and recall:$$x = (x- T^\dagger b) + T^\dagger b$$Clearly we need the $(x - T^\dagger b)$ term to vanish for equality. Since $x \in T^\dagger b$: $$x- T^\dagger b = T^\dagger b - T^\dagger b = 0$$Hence $||x|| = || T^\dagger b||$ as desired.
>>`\end{proof}`

##### Exercises
>[!exercise|1]
>Let $V$ be a [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Space]]. Let $U \subseteq V$ be a [[Vector Subspace|Subspace]]. Show: $$P_U^\dagger = P_U$$
>>[!claim|*]- Proof
>>`\begin{proof}`  
>>We have, by definition, that: $$P_U^\dagger (v)= \left( P_U |_{\text{null}(P_U)^\perp} \right)^{-1}P_{\text{range}(P_U)}(v)$$Clearly our goal is to reduce the equation above to $P_U$. First, notice: $$\text{range}(P_U) = U$$as by definition, $P_U$ takes every vector $V$ and returns its $u \in U$. Furthermore: $$\text{null}(P_U) = U^\perp$$which one can clearly see since $P_U(v) = 0 \iff v \in U^\perp$ (see properties of the [[Orthogonal Projection]]). Hence by corollary $2$ in [[Orthogonal Complement]], we have: $$\text{null}(P_U)^\perp = U^{\perp^\perp} = U$$Hence out expression for $P_U^\dagger$ reduces to: $$P_U^\dagger = \left( P_U |_U \right) ^{-1} P_U$$Clearly we want to make $\left( P_U |_U \right) ^{-1}$ vanish. To do so, we must show it is equal to the identity map. To do so, notice that $\left(  P_U|_U \right)^{-1}$ will take in a $u \in U$ but only restricts it to the vectors that map to $U$. Then clearly $u = u$ and it will be the identity map. Hence we can discard the inverse (since it maps from $U$ to $U$): $$P_U^\dagger = Id^{-1}P_U = P_U$$as desired.
>>`\end{proof}`

>[!exercise|2]
>Define $T: \mathbb{F}^3 \rightarrow \mathbb{F}^3$ by: $$T(x,y,z) = (x+y,z,0)$$Denote $K = \text{ker}(T) \; \land \; R = \text{range}(T)$.
>1. Find $T^\dagger$.
>2. Verify $TT^\dagger = P_R$.
>3. Verify $T^\dagger T = P_{K^\perp}$.
>
>>[!claim|*]- Solution
>>**Part 1**:
>>Recall that $T^\dagger$ is defined as: $$T^\dagger v= (T|_{K^\perp }) ^{-1} P_R v$$Firstly, let us find a basis for $R$. To do so, it is clear that $(1,0,0) \; \land \; (0,1,0)$ form a basis for $R$. Now we find a basis for $K^\perp$. To do so, we first find a basis for $K$: $$T(x,y,z) =(x+y,z,0) =  (0,0,0)$$Hence: $$\begin{array}{ccc}  x+y = 0\\ z =0  \end{array} \implies x =-y, z= 0$$Hence $(1,-1,0)$ is the basis for $K$. Now let us use the [[Euclidean Inner Product]] to find the basis for $K^\perp$. To do so, we want $(x,y,z)$: $$ \langle (1,-1,0),(x,y,z) \rangle = 0 \implies x-y = 0 \implies x=y$$Since $z$ can be anything, we let it be the [[Standard Basis]] $e_3$ ($K^\perp$ must have two vectors in its basis since $\text{dim}(K^\perp) = \text{dim}(V) - \text{dim}(K) = 3-1 = 2$). Hence the basis for $K^\perp$ (which we do not need need to need to orthonormalize): $$\{(1,1,0),(0,0,1)\}$$With this, we can solve: $$T^\dagger v= (T|_{K^\perp }) ^{-1} P_R v$$To do so, suppose $T^\dagger v = (x,y,z)$. Now $P_rv$ (by definition of its basis) is given by $(\alpha, \beta, 0)$. Our goal here will be to write $(x,y,z)$ in terms of $\alpha \; \land \; \beta$. To do so, we need to make a few observations:
>>1. $(x,y,z) \in K^\perp$ (Think of $T|_{K^\perp}$ as $T|_{K^\perp}: \mathbb{F}^3 \rightarrow K^\perp$. Hence the inverse of that will be $(T|_{K^\perp }) ^{-1} : \mathbb{F}^3 \rightarrow K^\perp$).
>>2. $T(x,y,z) = (\alpha, \beta, 0)$ (Which comes directly from $P_U(v)$).
>>
>>Hence, using the [[Euclidean Inner Product]]: $$\begin{array}{ccc} \langle (x,y,z),(1,-1,0) \rangle = 0 \implies x =y  \\ (x+y,z,0) = (\alpha, \beta, 0) \implies z = \beta \; \land \; x+y = \alpha\end{array} $$Hence $x = y = \frac{\alpha}{2} \; \land \; z = \beta$. Thus: $$T^\dagger (x,y,z) =\left( \frac{\alpha}{2}, \frac{\alpha}{2}, \beta \right) = \left( \frac{x}{2}, \frac{x}{2}, y\right) $$Thus we have found $T^\dagger$, as desired.
>>
>>(Note that the basis for $K^\perp$ could have been used to see that $x = y$ as well)
>>
>>**Part 2**:
>>Recall that our basis for $R$ is given by: $$\mathcal B_R =  \{(1,0,0),(0,1,0)\}$$Hence $P_Rv = (\alpha, \beta, 0)$. Now let $v = (x,y,z)$: $$TT^\dagger (v) = T \left( \frac{\alpha}{2}, \frac{\alpha}{2}, \beta \right) = (\alpha, \beta, 0) = P_Rv$$Hence $TT^\dagger = P_Rv$ as desired.
>>
>>**Part 3**:
>>Recall that our basis for $K^\perp$ was: $$\mathcal B_{K^\perp} = \{(1,1,0),(0,0,1)\}$$Now let $v = (x,y,z)$, then: $$T^\dagger Tv = T^\dagger (x+y,z,0) = \left( \frac{x+y}{2}, \frac{x+y}{2}, z \right) $$Which we can clearly see produces $\mathcal B_{K^\perp}$, as: $$= \left( \frac{x+y}{2}, \frac{x+y}{2}, 0 \right) +(0,0,z) = \left(  \frac{x+y}{2} \right) (1,1,0) + z(0,0,1)$$Hence $T^\dagger T = P_{K^\perp}$ as desired.

>[!exercise|3]
>Define $T: \mathbb{F}^4 \rightarrow \mathbb{F}^3$ by: $$T(x,y,z,t) = (x+y, y+z+t,0)$$Denote $K = \text{ker}(T) \; \land \; R = \text{range}(T)$:
>1. Explain in words in one line why $T$ is linear.
>2. Is $T$ injective? Is $T$ surjective?
>3. Find $T^\dagger$.
>4. Verify $TT^\dagger = P_R \; \land \; T^\dagger T = P_{K^\perp}$
>
>>[!claim|*]- Solution
>>**Part 1**:
>>$T$ is a [[Linear Maps|Linear Map]] as its rule is only addition of powers of $1$ of its variables, which we know is linear.
>>
>>**Part 2**:
>>Let us verify injectivity: To do so, we want to see if $K = {0}$. Hence: $$ \begin{array}{ccc} x+y=0  \\ y+z+t=0\\ 0 =0  \end{array}$$We clearly have more variables than solvable equations (exclude the $0=0$), thus there are infinite vectors $v \in K$. Hence $T$ is not injective. (Clearly $y = -x$ and $z+t = x$ will map to $K$)
>>Now for surjectivity, we want $R = \mathbb{F}^3$. Clearly it is not surjective as it can never map to any $(0,0,z)$. (The third component is always $0$).
>>
>>Hence $T$ is neither injective or surjective.
>>
>>**Part 3**:
>>Firstly, we get a [[Basis]] for $R$: $$\mathcal B_R = \{(1,0,0),(0,1,0)\}$$
>>Now we get a basis for $K$ (to then get a basis for $K^\perp$ which is our true goal): $$T(x,y,z,t) = (x+y,y+z+t,0) = (0,0,0)$$Then we solve: $$\begin{array}{ccc} x+y=0 \implies x = -y \\ y+z+t = 0  \implies z = -y-t = x-t \\ \text{leaving us with:} \\ (x,-x,x-t,t) = (x,-x,x,0) + (0,0,-t,t)\end{array}$$Hence our basis for $K$ is: $$\mathcal B_K = \{(1,-1,1,0),(0,0,-1,1)\}$$Now to get a basis for $K^\perp$ (which will clearly have $\text{dim}(K^\perp) = 2)$. Using the [[Euclidean Inner Product]], we solve the following system:$$\begin{array}{ccc}  \langle (1,-1,1,0),(x,y,z,t) \rangle = 0 \implies x-y+z=0 \implies y = x+z \\ \langle (0,0,-1,1),(x,y,z,t)\rangle = 0 \implies -c+d = 0 \implies t= z \\ \text{leaving us with:} \\ (x,x+z,z,z) = (x,x,0,0) + (0,z,z,z)\end{array}$$Hence the basis for $K^\perp$ is: $$\mathcal B_{K^\perp} = \{(1,1,0,0),(0,1,1,1)\}$$Now recall $T^\dagger$ is defined as: $$T^\dagger  = \left(  T|_{K^\perp} \right)^{-1} P_R $$Let $w = (x,y,z,t)$. Then: $$(x,y,z,t) = \left(  T|_{K^\perp} \right)^{-1} (a,b,0)$$Let us write $x,y,z,t$ in terms of $a,b$. Firstly, notice:
>>1. $(x,y,z,t) \in K^\perp$.
>>2. $T(x,y,z,t) = (a,b,0)$
>>
>>All we need do is compute $1$ then plug it into $2$. From the calculations done to find the basis of $K^\perp$, we had $(x,x+z,z,z) \in K^\perp$. Then: $$T(x,x+z,z,z) = (2x+z,x+3z,0) = (a,b,0)$$Solving leaves us: $$x = \frac{3a-b}{5} \; \land \; z = \frac{2b-a}{5}$$Plugging these back into $(x,x+z,z,z)$ nets: $$(x,y,z,t) = \left( \frac{3a-b}{5}, \frac{2a+b}{5}, \frac{2b-a}{5}, \frac{2b-a}{5} \right) $$Or in other words: $$T^\dagger (a,b,c) = \left( \frac{3a-b}{5}, \frac{2a+b}{5}, \frac{2b-a}{5}, \frac{2b-a}{5} \right) $$
>>**Part 4**:
>>We want $TT^\dagger$ to produce: $$\mathcal B_R = \{(1,0,0),(0,1,0)\} = (\alpha,\beta,0)$$Thus: $$TT^\dagger (a,b,c) = T \left( \frac{3a-b}{5}, \frac{2a+b}{5}, \frac{2b-a}{5}, \frac{2b-a}{5} \right) = (a,b,0) = P_R$$Hence the basis is given by $\mathcal B_R$ as desired. We conclude: $$TT^\dagger = P_R$$
>>Showing $T^\dagger T = P_{K^\perp}$ is left as an exercise.

>[!exercise|4]
>Let $V$ and $W$ be [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Space|Vector Spaces]]. Let $T \in \mathcal{L}(V,W)$. Show:
>1. $\left( T^\dagger \right)^\dagger = T$.
>2. $TT^\dagger T = T$.
>3. $T^\dagger T T^\dagger = T^\dagger$.
>
>>[!claim|*]- Proof

To do the above question (at least parts 2), prove as a lemma the following: $$P_{\text{range}(T)}T = TP_{\text{ker}(T)^\perp} = T$$And use Theorem 1 to get it into the form needed for the lemma.








 