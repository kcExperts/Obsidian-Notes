>[!exercise|1]
>Let $V+W$ be an $F$ [[Vector Space]] and suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Let $T \in \mathcal{L}(V,W)$. Denote $K = \text{ker}(T) \; \land \; R = \text{range}(T)$. Show $T = T P_{k^\perp} = P_{R}T$.
>>[!claim|*]- Solution
>>`\begin{proof}` We note $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], we recall that if $V$ is finite-dimensional, then $V = U \oplus U^\perp$ for $u \subseteq V$. Thus:
>>$$V = K \oplus K^\perp$$
>>So $\forall \: v \in V$, we get $v = v_1 + v_2$ for $v_1 \in K, v_2 \in K^\perp$. Hence: $$Tv = T(v_1 + v_2) = Tv_1 + Tv_2 = Tv_2$$which holds as $Tv_1 = 0$ since $v_1 \in K$. Now: $$P_U u = u \; \; \forall \: u \in U$$Then we can rewrite $Tv_2$ as: $$Tv_2 = T P_{k^\perp} v$$That’s one equality down. Now we show $T = P_R T$. Since $V$ is finite-dimensional, $R$ is finite-dimensional subspace of $W$ by the [[Fundamental Theorem of Linear Maps]]. Hence: $$P_R Tv = Tv$$Which holds since $P_R$ is the identity of $R$. (Since $Tv \in \text{range}(T) = R$, then $P_R Tv = ITv = Tv$ by definition).
>> `\end{proof}`

>[!exercise|2]
>In lecture, it was mentioned that if $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], then $P_{U^\perp} = Iv - P_u$. We will now prove this:
>>[!claim|*]- Solution
>>`\begin{proof}` If $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], then $P_{U^\perp} \in \mathcal{L}(V)$ is such that $P_{U^\perp} u = 0 \; \forall \: u \in U$. Using the fact that we can write $V = U \oplus U^\perp$, let $v \in V$ such that $v = v_1 + v_2, v_1 \in U, v_2 \in U^\perp$. Then: $$P_{U^\perp}(v) = P_{U^\perp} (v_1+v_2) = v_2 = v -v_1 = v- P_U v = (I_v - P_U)(v)$$We conclude $P_{U^\perp} = Iv - P_u$. 
>> `\end{proof}`

>[!exercise|3]
>Define $\lambda \in (\mathcal P_{\le 2} (\mathbb{R}))’ = \mathcal L (\mathcal P_{\le 2} (\mathbb{R}), \mathbb{R})$ by: $$\lambda (p) = \int_{-1}^1 e^x p(x) \;dx$$Find $q(x) \in \mathcal P_{\le 2} (\mathbb{R})$ such that $\lambda (p) = \langle p(x),q(x) \rangle$. (Computation Problem).
>>[!claim|*]- Solution
>>Note that $\mathcal P_{\le 2} (\mathbb{R})$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], thus we can use the [[Riesz Representation Theorem]]. 
>>(The theorem essentially states that if $\lambda$ is [[Linear Functional]] on $V$, then there is a unique vector $v \in V$ such that $\lambda(u) = \langle u,v \rangle \; \forall u \in V$. $V$ is given by $v = \overline{\lambda(e_1)})e_1 + \dots + \overline{\lambda (e_n)} e_n$ where $\{e_1, \dots, e_n\}$ is an [[Orthonormal Basis]] for $V$).
>>We know that the standard basis of $\mathcal P_{\le 2}(\mathbb{R})$ is $\{1,x,x^2\}$. Using the [[Gram-Schmidt Procedure]], we get: $$\{\frac{1}{\sqrt 2}, \sqrt{\frac{3}{2}} x, \sqrt{\frac{45}{8}}(x_2 - \frac{1}{3})\}$$Thus using the [[Riesz Representation Theorem]], we write: $$q(x) = \lambda \left( \frac{1}{\sqrt 2} \right) \cdot \frac{1}{\sqrt 2} + \lambda \left(  \sqrt{\frac{3}{2}} x \right)  \cdot \sqrt{\frac{3}{2}} x + \lambda \left( \sqrt{\frac{45}{8}}(x_2 - \frac{1}{3}) \right)  \cdot \sqrt{\frac{45}{8}}(x_2 - \frac{1}{3})$$Doing a bunch of work, we get: $$q(x) = \frac{3}{4} \left( \frac{11}{e} - e \right)  + \frac{3x}{e} + \frac{15}{4} \left(  e - \frac{7}{e} \right) x^2$$Now we need to check that applying the $\langle v,q(x) \rangle$ where $v$ is a vector in the orthonormal basis will give the same answer as $\lambda v$. (Which is way too much to type, the guy writes fast after all)

>[!exercise|4]
>Consider the linear map $T: \mathbb{F}^3 \rightarrow \mathbb{F}^3$ defined by: $$T(x,y,z) = (x+y,z,0)$$Find $T^\dagger$ and verify: $T \circ T^\dagger = P_{\text{range}(T)} \; \land \; T^\dagger \circ T = P_{\text{ker}(T)^\perp}$.
>>[!claim|*]- Solution
>>Let $K = \text{ker}(T) \; \land \; R = \text{range}(T)$. The pseudoinverse $T^\dagger = (T|_{K^\perp})^{-1} \circ P_R$.
>>Let’s first figure out what $K$ is: $$K = \{(x,y,z) \in \mathbb{R}^3 : y = -x \; \land \; z= 0\} = \{(x,-x,0: x \in \mathbb{F}\}$$(Now there is a formula such that if $r_1, \dots, e_m$ is an [[Orthonormal Basis]] of $U$, then $\forall \: v \in V, P_U v = \langle v,e_1 \rangle e_1 + \dots + \langle v,e_m \rangle e_m$)
>>Hence, $\{1,-1,0\}$ is the basis of $K$. Using the [[Gram-Schmidt Procedure]], we get that the orthonormal basis $\{ (\frac{1}{\sqrt 2}, -\frac{1}{\sqrt 2}, 0)\}$. Thus: $$V = K  \oplus K^\perp \implies \text{dim}(V) = \text{dim}(K) + \text{dim}(K^\perp) \implies \text{dim}(V) = 3$$Then we can see that $K^\perp$ is $2$ dimensional and the orthonormal basis is: $$\{\left( \frac{1}{\sqrt 2}, \frac{1}{\sqrt 2}, 0 \right) , \left(  0,0,1 \right) \}$$Now $R$ is $2$ dimensional. To compute $T^\dagger$, we have: $$(T|_{k^\perp})^{-1} (a,b,0)$$Using some computation from fining $(x,y,z) \in K^\perp$, we have: $$T^\dagger (a,b,c) = (\frac{a}{2}, \frac{a}{2}, b)$$
>>He ran out of time.



