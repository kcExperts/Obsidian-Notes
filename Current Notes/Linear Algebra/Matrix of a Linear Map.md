
### Class Notes
>[!def|*]- $\theta$ Map
>Let $V$ be a [[Finite-Dimensional Vector Space|Finite-Dimensional]] $\mathbb{F}$ [[Vector Space]]. Denote $\mathcal B = \{v_1, \dots v_n\}$ as the basis for $V$. Define: $$\theta : V \rightarrow \mathbb{F}^n : \theta (v_j) = e_j$$It is clear that $\theta$ is a [[Linear Maps|Linear Map]] that is also an [[Invertible Linear Maps|Invertible Linear Map]]. Hence: $$\theta^{-1}(e_j) = v_j$$By the definition of an [[Isomorphism in Linear Algebra]], we have $V \cong \mathbb{F}^n$.

>[!rmk|*]- $\mathbb{F}^{n \times 1} \cong \mathbb{F}^n$
>Let $V = \mathbb{F}^{n \times 1}$ denote the set of $\mathbb{F}$ column vectors. Then $\mathbb{F}^{n \times 1} \cong \mathbb{F}^n$. 
>
>This is done by using $\theta : \mathbb{F}^{n \times 1} \rightarrow \mathbb{F}^n$ and mapping every column $v_j$ to the respective standard basis $e_j$ so that $\theta (v_j) = e_j$. 

>[!def|*]- $\phi$ Map
>Let $W$ be a [[Finite-Dimensional Vector Space|Finite-Dimensional]] $\mathbb{F}$ [[Vector Space]]. Let $\mathcal{\overline B} = \{w_1, \dots, w_m\}$ be the basis for $W$. Define: $$\phi : W \rightarrow \mathbb{F}^m: \phi(w_j) = e_j$$It is clear that $\phi$ is a [[Linear Maps|Linear Map]] that is also an [[Invertible Linear Maps|Invertible Linear Map]]. Hence: $$\phi^{-1}(e_j) = w_j$$By the definition of an [[Isomorphism in Linear Algebra]], we have $W \cong \mathbb{F}^m$.

>[!def|*] Matrix of a Linear Map $\widehat T$
>Let $T \in \mathcal{L}(W,V)$, then we define $\widehat T$ to be the function that maps $T$ to its matrix $\mathcal M(T)$ as: $$\widehat T: \mathcal{L}(W,V) \rightarrow \mathcal M_{m \times n} : \widehat T = \mathcal M(T)$$

>[!rmk|*] Composition Definition for $\widehat T$.
>Recall that $\widehat T = \mathcal M(T)$. We can define $\mathcal M(T)$ to be the composition: $$\mathcal M(T) = \theta T \phi^{-1}$$Note that $\mathcal M(T)$ is a [[Linear Maps|Linear Map]].
>>[!claim|*]- Idea
>>As if we recall, $\mathcal M(T)$ is defined by: $$\mathcal M(T): \mathbb{F}^m \rightarrow \mathbb{F}^n$$Then we can take the following path to get $\mathcal M(T)$: $$\mathbb{F}^m \rightarrow W \rightarrow V \rightarrow \mathbb{F}^n$$Where this path is clearly defined by $\phi^{-1} \circ T \circ \theta$. From this, it follows that $\mathcal M(T) =  \theta T \phi^{-1}$. Since the composition of linear maps is linear, $\mathcal M(T)$ is also linear.

>[!theorem|1]- $\mathcal{L}(W,V) \cong \mathcal{L}(\mathbb{F}^m,\mathbb{F}^n)$
>`\begin{proof}`
>Let us define a function $L$ and show it is the left (or right) inverse of $\mathcal M$. The [[Fundamental Theorem of Linear Maps]] will then imply that $L = M^{-1}$. In other words, we show $L(\mathcal M(T)) = T$ where $T \in \mathcal L (W,V)$. 
>Define: $$L: \mathcal M_{m \times n}(\mathbb{F}) \rightarrow \mathcal{L}(W,V): L(A) = \overline A$$Don’t worry too much about $\overline A$, it is not important. What is important is that we see $L$ takes the path: $$\mathbb{F}^m \rightarrow W \rightarrow V \rightarrow \mathbb{F}^n$$Thus: $$L(A) = \theta^{-1} A \phi$$where $A$ is really just some arbitrary $A : \mathbb{F}^m \rightarrow \mathbb{F}^n$. Now let: $$A = \theta T \phi^{-1}$$which holds by the previous remark (thus $A = \mathcal M(T)$) Now let us show $L(\mathcal M(T)) = T$: $$L(\mathcal M(T))=L(A) =L(\theta T \phi^-1) = \theta^{-1}\theta T \phi^{-1} \phi = T$$Hence $L(\mathcal M(T)) = T$ as desired. 
>  `\end{proof}`

>[!def|*]- Column Vector $\hat v$
>Let $v \in V$, denote $\hat v = \theta v$. What this essentially means is that $\hat v_j$ represents the $j^{th}$ column of a matrix: $$A = \left[ \begin{array}{ccc} a_{11} & a_{21} & \dots & a_{1m}\\ a_{21} & a_{22} & \dots & a_{2m}\\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \dots &  a_{nm}\end{array} \right] \implies \hat v_j = \left[ \begin{array}{ccc} a_{1j} \\ a_{2j}\\\vdots  \\ a_{nj}  \end{array} \right]$$

>[!def|*]- Linear Map in Matrix Form
>Let $T \in \mathcal L (W,V)$ and recall $\widehat T = \mathcal M(T)$. Suppose you wanted to represent $T$ in terms of a matrix. To do this, compute $Te_j$, it will then produce $\hat v_j$. Then insert it into the matrix and repeat $\forall e_j$. Hence: $$\hat T = \left[ \begin{array}{ccc} Te_1 & Te_2 & \dots & Te_n \end{array} \right] = \left[ \begin{array}{ccc} \hat v_1 & \hat v_2 & \dots & \hat v_n \end{array} \right]$$

>[!lemma|1]
>Let $v_1, v_2, v_3$ be [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Space]] with dimensions $n_1, n_2, n_3$ respectively. Fix a basis $\mathcal B_j$ for $V_j$ and denote the isomorphism: $$\theta_j : V_j \rightarrow \mathbb{F}^{n_j}$$Let $T_1: v_1 \rightarrow v_2$ and $T_2 v_2 \rightarrow v_3$ be a linear map. Then: $$\widehat {T_2T_1} = \hat T_2 \hat T_1$$
>
>>[!claim|*]- Proof
>>We have: $$\widehat{T_2 T_1} = \theta_3 T_2 T_1 \theta_1^{-1} = \theta_3 T_2 Id_{v_2}T_1 \theta_1^{-1} = \theta_3 T_2 (\theta_2^{-1} \theta_2) T_1 \theta_1^{-1}$$
>>Which gives: $$= (\theta_3 T_2 \theta_2^{-1})(\theta_2 T_1 \theta_1^{-1}) = \hat T_2 \hat T_1$$
>>Which gives the desired result.
>
>>[!claim|*]- Pictorial Proof
>>![[Pasted image 20240315101853.png]]

>[!corollary|1]
>Let $V,W$ be $n$ dimensional. Fix bases for $V \; \land \; W$. Let $T \in \mathcal{L}(W,V)$ be an isomorphism, then $\hat T$ is invertible. 
>>[!claim|*]- Proof
>>$T$ is an isomorphism, hence $T^{-1}$ exists. Hence $\widehat{T^{-1} T }= \widehat {Id_W} = I$. Hence $\widehat{T^{-1}} \hat T = I$. Thus $\widehat T^{-1}$ is a left-inverse so by the [[Fundamental Theorem of Linear Maps]], we have: $\widehat T^{-1}= (\hat T)^{-1}$.
### Old Notes
The key property of [[Matrices]] in linear algebra is that they can represent [[Linear Maps]]. 

>[!def|*] Matrix of a Linear Map $\mathcal{M}(T)$
>Suppose $T \in \mathcal{L}(V,W) \; \land \; v_1, \dots, v_n$ is a basis of $V$ $\land$ $w_1, \dots, w_n$ is a basis of $W$. The matrix of $T$ with respect to these bases is the $m \; \text{x} \; n$ matrix $\mathcal{M}(T)$ whose entries $A_{j,k}$ are defined by: $$Tv_k = A_{1,k}w_1 + \dots + A_{m,k}w_m$$
>>[!rmk|*]- How does that actually look like in a matrix?
>>![[Pasted image 20240216100025.png]]

To find the constants $A_{1,k} \dots$ for that specific column (given the rule of the transformation), input $v_k = (0, \dots , 1, \dots, 0)$ where $1$ is in the $k^{th}$ slot. 

>[!exm|*]-
>Suppose $T \in \mathcal{L}(\mathbb{F}^2,\mathbb{F}^3): T(x,y) = (x+3y, 2x+ 5y, 7x+9y)$. Doing the steps described above gets us: $$ \mathcal{M}(T) = \left[ \begin{array}{ccc} 1 &  3  \\ 2 & 5  \\ 7 &  9  \end{array} \right] $$

>[!rmk|*] 
>If $A \in \mathcal{L}(V,W)$, then $A$ will have $\text{dim}(W)$ rows and $\text{dim}(V)$ columns.

