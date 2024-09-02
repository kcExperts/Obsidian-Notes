
>[!definition|*] Quotient Map $\pi$
>Let $U$ be a [[Vector Subspace|Subspace]] of $V$. The quotient map $\pi: V \rightarrow V/U$ is the [[Linear Maps|Linear Map]] defined by: $$\pi(v) = v+U$$
$\forall \; v\in V$.
>>[!claim|*]- Proof of Linearity
>>We show it follows the usual properties of a [[Linear Maps|Linear Map]]:
>>
>>**Additivity**: Let $v_1, v_2 \in V$, then: $$\pi(v_1+v_2) = (v_1+v_2)+U = (v_1+U)+(v_2+U) = \pi(v_1)+\pi(v_2)$$**Homogeneity**: Let $\lambda \in \mathbb{F} \; \land \; v \in V$, then: $$\pi(\lambda v) = (\lambda v) + U = \lambda(v + U) = \lambda \pi(v)$$We conclude $\pi$ is a linear map.


>[!theorem] Dimension of a Quotient Space
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $U$ is a [[Vector Subspace|Subspace]] of $V$, then: $$\text{dim}(V/U) = \text{dim}(V)-dim(U)$$
>>[!claim|*]- Proof
>>`\begin{proof}` Consider the linear map $\pi$. Let us examine the $\text{null}(\pi)$. We have that $\pi(v) = v+U = 0 +U \iff v \in U$ from Theorem 1 ([[Quotient Space]]). From this, we note that $\text{null}(\pi) = U$. Thus $\text{dim}(\text{null}(\pi)) = \text{dim}(U)$. 
>>By definition of $\pi$, $\text{range}(\pi) = V/U$. Thus $\text{dim}(\text{range}(\pi)) = \text{dim}(V/U)$. By the [[Fundamental Theorem of Linear Maps]], we have: $$\text{dim}(V) = \text{dim}(\text{range}(\pi)) + \text{dim}(\text{null}(\pi)) \implies \text{dim}(V) = \text{dim}(V/U) + \text{dim}(U)$$Rearranging nets us: $$\text{dim}(V/U) = \text{dim}(V) - \text{dim}(U)$$Which is what we were after.  
>> `\end{proof}`


##### Exercises
>[!exercise|1]
>Consider the set: $$U = \{p \in \mathcal P_{\le 4} (\mathbb{R}): \int_{-1}^1 p(x)\: dx = 0$$
>Complete the following:
>1. Show that $U$ is a [[Vector Subspace|Subspace]] of $\mathcal P_{\le 4} (\mathbb{R})$ by showing that it is the [[Null Space|Kernel]] of a suitable [[Linear Maps|Linear Map]].
>2. Find a [[Basis]] for $U$.
>3. Denote $W = \mathcal P_{\le 4} \mathbb{R} / U$. Find $\text{dim}(W)$. Find a basis for $W$.
>4. Explicitly construct an isomorphism $\phi: U \times W \rightarrow \mathcal P_{\le 4} (\mathbb{R})$.
>
>>[!claim]- Solution
>>**Part 1**: Define: $$I: \mathcal P_{\le 4} (\mathbb{R}) \rightarrow \mathbb{R}:  I(p) = \int_{-1}^1 p(x)dx$$Since integration is linear and $\mathcal P_{\le 4} (\mathbb{R})$ is the space of all linear functions, it is clear that $I$ is linear. From this, we see that $U = \{p \in \mathcal P_{\le 4} (\mathbb{R}): I(p) = 0\}$. Thus $U = \text{ker}(I)$ as desired.
>>
>>**Part 2**: Clearly, the odd powers of $\mathcal P$ when integrated over from $-1$ to $1$ will produce $0$. But what of the other powers? To check, we verify: $$\int_{-1}^1 a_0 + a_1 x+ a_2 x^2 +a_3x^3+a_4x^4 \;dx = 2a_0+\frac{2}{3}a_2 + \frac{2}{5}a_4$$which we want to give $0$, thus: $$2a_0+\frac{2}{3}a_2 + \frac{2}{5}a_4 = 0$$Now we may solve in terms of any of these variables, and substituting back into the original equation will give a desired basis (basis can have different vectors but must be of the same dimension). Let us isolate for $a_0$: $$a_0 = \frac{-a_2}{3}+ \frac{-a_4}{5}$$Thus: $$p = a_1 x+a_2(x^2 - \frac{1}{3}) + a_3x^3 + a_4(x^4 - \frac{1}{5})$$Guarantees that $\int_{-1}^1 p \: dx = 0$. By setting the coefficients to $1$, we conclude our basis $B$ is: $$B = \{x, x^2-\frac{1}{3}, x^3, x^4 - \frac{1}{5}\}$$
>>**Part 3**: Suppose $W = \mathcal P_{\le 4} (\mathbb{R}) / U$. Recall from Theorem 2 of the [[Quotient Space]] that $\text{dim}(W) = \text{dim}(\mathcal P_{\le 4} (\mathbb{R})) - \text{dim}(U)$. Thus: $$\text{dim}(W) = 5 -4 = 1$$Following from part 2, our basis $B$ did not include $1$, thus our basis $B_w$ is: $$B_w = \{1\}$$
>>**Part 4**: We need to construct an isomorphism $\phi: U \times W \rightarrow \mathcal P_{\le 4} (\mathbb{R})$. The idea here is to use the [[Basis]] that we found for $U$ and $W$ in our construction as if we find a way to combine them together, they will clearly form all of $\mathcal P_{\le 4} (\mathbb{R})$. Now define: $$\phi(a_1 x + a_2x^2 - \frac{a_2}{3} + a_3 x^3 + a_4 x_4 - \frac{a_4}{5}, a_0) = a_0 - \frac{a_2}{3} - \frac{a_4}{5}+a_1 x + a_2 x^2 + a_3 x^3 + a_4 x^4$$I will leave showing linearity to the reader. With this, the final part is to either show surjectivity or injectivity to show that it is invertible. We will show surjectivity. To do so, we show that   

>[!exercise|2]
>Suppose that $v,x \in V \; \land \; U,W$ are [[Vector Subspace|V.Sub]] of $V$ such that: $v+U = x+W$. Prove that $U=W$.
>>[!claim|*]- Proof
>>`\begin{proof}` Suppose $v +U = x+W$. By Theorem 1 ([[Quotient Space]]), we have that: $$v+U = x+W \iff v-x \in U-W$$By definition of a sum of vector spaces, we have that $v \in U \; \land \; x \in W$. From Corollary 1 ([[Quotient Space]]), since $v \in U$, then $v + U = 0+U = U$ and $x+W = 0+W =  W$. Thus we are left with: $$v+U = x+W \implies U=W$$as desired.
>>  `\end{proof}`

>[!exercise|3]
>Suppose $A_1 = v + U_1 \; \land \; A_2 = w + U_2$ for some $v,w \in V$ and some [[Vector Subspace|Subspaces]] $U_1, U_2$ of $V$. Prove that the intersection $A_1 \cap A_2$ is either a [[Translate]] of some subspace of $V$ or is the empty set.
>>[!claim|*]- Proof
>>`\begin{proof}` By Theorem 1 ([[Quotient Space]]), we know that translates are either equal or disjoint. Thus we examine these two cases:
>>
>>**Equal**: Suppose $A_1 = A_2$, that is: $v+U_1 = w+U_2$. Then by Exercise 2, we have that $U_1 = U_2$. Thus $A_1 \cap A_2 = v + U_1 = w+ U_2$. Thus the intersection can be written as a translate of some subspace of $V$.
>>
>>**Disjoint**: Suppose $A_1 \ne A_2$. Clearly: $$x \in A_1 \implies x \not\in A_2 \; \land \; y \in A_2 \implies y \not\in A_2$$Following directly from the definition of intersection, we have that $A_1 \cap A_2 = \emptyset$.
>> `\end{proof}`
