
>[!example|1] 
>Let $T \in \mathcal L (\mathbb{F}^n)$: $$T(x_1, \dots, x_n) = (x_1, 2x_2, \dots, nx_n)$$
> 1. Find the [[Eigenvalue|Eigenvalues]] and [[Eigenvector|Eigenvectors]]. 
> 2. Find the minimal polynomial
>
>>[!claim|*] Solution
>>**Part 1**: We want $\lambda \in \mathbb{F}$ and $(a_1, \dots , a_n) \ne (0, \dots, 0) : T(a_1, \dots, a_n)$. This is just $(a_1,2a_2,\dots, na_n) = (\lambda a_1, \lambda a_2, \dots, \lambda a_n)$, or $j a_j = \lambda a_j$ for $j = 1,\dots, n$. Since we want $(a_1, \dots ,a_n)$ to be non-zero. There must be some $a_k \ne 0$. 
>>
>>Suppose we put another vector $j \ne k$: $a_j \ne 0$. But this is impossible (you can see this by just trying it). Hence $a_j = 0$ so our only non-zero vector will be $a_k$. Hence:
>>- $\lambda = 1 \implies (1,0,0, \dots, 0)$
>>- $\lambda = 2 \implies (0,1,0, \dots, 0)$
>>- $\lambda = n \implies (0,0,0, \dots ,1)$
>>
>>Thus in general, $\lambda_k = k$ and the eigenvectors are $e_k$ (where we recall that $e_k$ is the standard basis (0’s everywhere except for a $1$ at position $k$).
>>
>>**Part 2**: We know that the roots of the [[Minimal Polynomial]] are the eigenvalues. So we may define the minimal polynomial $p$ as: $$p(z) = (z-1 )^{m_1}\dots (z - n)^{m_n}$$We usually add the $m_1, \dots, m_n$ as we typically do not know if any of the eigenvalues repeat. However, it is clear that $m_1 = \dots = m_n$, since $\text{deg}(p) \le \text{dim}(\mathbb{F}^n) = n$. If any $m_j > 1$, then $\text{deg}(p) > \text{dim}(\mathbb{F}^n)$ which is impossible. Hence: $$p(z) = (z-1)\dots(z-n)$$Is our minimal polynomial.

>[!rmk|1] Matrices associated with Linear Maps
>We should recall:
> - $V$ is an $\mathbb{F}$ [[Vector Space]]: $\text{dim}(V) = n < \infty$.
> - $\mathcal B = \{v_1, \dots ,v_n\}$ is the basis for $V$.
> - $\theta : V \rightarrow \mathbb{F}^n: \theta (v_j) = e_j \; \land \; \theta^{-1}(e_j) = v_j$
> - $\mathbb{F}^{n \times 1} \cong \mathbb{F}^n$ (this is done by associating each column vector with the respective standard basis $e_j$). 
> 
> Now:
> - $W$ is an $m$-dimensional $\mathbb{F}$ vector space.
> - $\overline{\mathcal B} = \{w_1, \dots, w_m\}$ is the basis for $W$.
> - $\phi : W \rightarrow \mathbb{F}^m: \phi (w_j) = e_j$
> 
> Now let us show that: $\mathcal{L}(W,V) \cong \mathcal{L}(\mathbb{F}^m,\mathbb{F}^n)$
> To do so, consider: $$M:\mathcal{L}(W,V) \rightarrow \mathcal M_{n \times m} (\mathbb{F}): \hat T = M(T)$$
> Where $T$ is a linear map and $M(T)$ is the matrix associated with $T$. Then: $$\mathbb{F}^m \rightarrow W \rightarrow V \rightarrow \mathbb{F}^n$$is $M(T)$. Where:
>  - $\mathbb{F}^m \rightarrow W$ is $\phi^{-1}$.
>  - $W \rightarrow V$ is $T$.
>  - $V \rightarrow \mathbb{F}^n$ is $\theta$.
> 
> Hence $M(T) = \theta T \phi^{-1}$. Hence $M(T)$ is linear as the composition of linear maps is linear.
> 
> Now: $$L: \mathcal M_{n \times m}(\mathbb{F}) \rightarrow \mathcal{L}(W,V): \overline A = L(A)$$
> Clearly: $$W \rightarrow \mathbb{F}^m \rightarrow \mathbb{F}^n \rightarrow V$$
> Where: 
> - $W \rightarrow \mathbb{F}^m$ is $\phi$.
> - $\mathbb{F}^m \rightarrow \mathbb{F}^n$ is $A$.
> - $\mathbb{F}^n \rightarrow V$ is $\theta^{-1}$
> 
> Hence $L(A) = \theta^{-1} A \phi$
> We only need to show that $L$ is a left (or a right) inverse for $M$ and then by the Rank Nullity Theorem, $L = M^{-1}$. So this shows that $M$ is invertible and hence is an [[Isomorphism in Linear Algebra]]. So we need to show $L(M(T)) = T$. Hence: $$L(\theta T \phi^{-1}) = \theta^{-1} (\theta T \phi^{-1})\phi = (\theta^{-1} \theta)T(\phi^{-1} \phi) = Id_v TId_w = T$$Which holds $\forall T \in \mathcal{L}(W,V)$. Hence $L$ is a left inverse of $M$.
> 

>[!rmk|*]- 
>Let $v \in V$, denote $\hat v = \theta v$. Since: $$v = \sum_{j=1}^n a_jv_j$$Then: $$\hat v = \sum_{j=1}^n a_j \hat v_j = \sum_{j=1}^n a_j e_j$$Since $\mathbb{F}^n \cong \mathbb{F}^{n \times 1}$, we have: $$\hat v = \left[ \begin{array}{ccc} a_1 \\ \vdots  \\ a_n  \end{array} \right]$$ 

But what are the components (entries) of $\hat T$?
Let $A \in \mathcal{L}(\mathbb{F}^m,\mathbb{F}^n)$. Then: $$A = \left[ \begin{array}{ccc} a_{11} & a_{21} & \dots & a_{1m}\\ a_{21} & a_{22} & \dots & a_{2m}\\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \dots &  a_{nm}\end{array} \right]$$
Thus $Ae_1$ would give only the first column of $A$. Then $Ae_j$ is the $j$ column of $A$. Now for $T \in \mathcal{L}(W,V)$, $\hat T \in \mathcal{L}(\mathbb{F}^m,\mathbb{F}^n)$. Then $\hat T e_j$ is the $j^{th}$ column of $\hat T$. But: $$\hat T = \hat T e_j = \hat T \phi w_j = \hat T \hat w_j = \widehat{Tw_j}$$
>[!rmk|*] Moral of the Story
>Essentially, moral of the story is to get the matrix of a linear transformation, compute $Te_j$ and the matrix will be given by: $$A = \left[ \begin{array}{ccc} Te_1 & Te_2 & \dots & Te_n \end{array} \right]$$where $Te_j$ are column vectors.
>DO NOT QUOTE ME ON THIS

At least this is what I think the moral of the story is (I don’t have much a clue honestly)

>[!exm|*]
>Consider $S: \mathbb{F}^m \rightarrow \mathbb{F}^n$: $$S(x_1, \dots x_m) = (Ax_1 + A_{12}x_2 \dots A_{1m}x_m , A_{21} x_1 + A_{22} x_2 + \dots + A_{2m} x_m, \dots)$$
>Then $\hat S$ is: $$\hat S = \left[ \begin{array}{ccc} A_{11} & A_{12} & \dots &A_{1m} \\ A_{21} & A_{22} & \dots &A_{2n} \\ \vdots & \vdots &  & \vdots \\ A_{n1} & A_{n2} & \dots & A_{nm} \end{array} \right]$$

>[!lemma|1]
>Let $v_1, v_2, v_3$ be [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Space]] with dimensions $n_1, n_2, n_3$ respectively. Fix a basis $\mathcal B_j$ for $V_j$ and denote the isomorphism: $$\theta_j : V_j \rightarrow \mathbb{F}^{n_j}$$Let $T_1: v_1 \rightarrow v_2$ and $T_2 v_2 \rightarrow v_3$ be a linear map. Then: $$\widehat {T_2T_1} = \hat T_2 \hat T_1$$
>
>>[!claim|*] Proof
>>We have: $$\widehat{T_2 T_1} = \theta_3 T_2 T_1 \theta_1^{-1} = \theta_3 T_2 Id_{v_2}T_1 \theta_1^{-1} = \theta_3 T_2 (\theta_2^{-1} \theta_2) T_1 \theta_1^{-1}$$
>>Which gives: $$= (\theta_3 T_2 \theta_2^{-1})(\theta_2 T_1 \theta_1^{-1}) = \hat T_2 \hat T_1$$
>>Which gives the desired result.

Another proof for the above results involves diagrams: (Which I can’t really do here unfortunately). The photo of what he wrote is shown below:
![[Pasted image 20240315101853.png]]

>[!corollary|1]
>Let $V,W$ be $n$ dimensional. Fix bases for $V \; \land \; W$. Let $T \in \mathcal{L}(W,V)$ be an isomorphism, then $\hat T$ is invertible. 
>>[!claim|*] Proof
>>$T$ is an isomorphism, hence $T^{-1}$ exists. Hence $\widehat{T_{-1} T }= \hat Id_W = I$. Hence $\widehat{T^{-1}} \hat T = I$. Thus $\widehat T^{-1}$ is a left-inverse so by the rank-nullity $\widehat T^{-1}= (\hat T)^{-1}$.














