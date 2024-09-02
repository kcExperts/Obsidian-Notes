---
aliases:
  - Upper Triangular
---

>[!rmk|*]- Class Notation
>We have:
>- $\sigma(T) = \{\lambda \in \mathbb{F} : \lambda \; \text{is an eigenvalue of T}\}$
>- $E_T(\lambda) = \text{ker}(T - \lambda I)$. It is the [[Eigenspace]] of $T$ associated with $\lambda$.
>- $V_\lambda^T = E_T(\lambda)$.

>[!def|*]- Matrix of an operator $\mathcal M(T)$
>Suppose $T \in \mathcal L (V)$. The matrix of $T$ with respect to a basis $v_1, \dots, v_n$ of $V$ is the $n$-by-$n$ matrix: $$\mathcal M(T) = \left[ \begin{array}{ccc} A_{11} &  \dots& A_{1n} \\ \vdots &  &\vdots \\ A_{n1} &\dots  & A_{nn} \end{array} \right]$$whose entries $A_{jk}$ are defined by: $$Tv_k = A_{1k} v_1 + \dots + A_{nk}v_n$$

>[!def|*] Upper Triangular
>Let $A \in \mathcal M_n(\mathbb{F})$ (square matrix). Then $A$ is called upper triangular if: $$A = \left[ \begin{array}{ccc} A_{11} & * &*&* \\ 0 & A_{22} &  *& *\\ 0 & 0 &  \ddots& * \\ 0 & 0 & 0 & A_{nn} \end{array} \right]$$
>Thus every entry below the diagonal is $0$. 

A quick thing for notation from here on out. In class, we use $\hat v_j$ to denote the $j^{th}$ column of a matrix. Also $e_j$ denotes the $j^{th}$ [[Standard Basis]]. 

>[!theorem|1] Conditions for an Upper-Triangular Matrix
>Suppose $T \in \mathcal L (V)$ and $v_1, \dots, v_n$ is a basis of $V$. Then the following are equivalent:
>1. The matrix of $T$ with respect to $v_1, \dots, v_n$ is upper triangular.
>2. $\text{span}(v_1, \dots ,v_k)$ is invariant under $T$ for each $k = 1, \dots, n$. 
>3. $Tv_k \in \text{span}(v_1, \dots, v_k)$ for each $k = 1, \dots , n$.
>

>[!lemma|1] 
>Suppose $T \in \mathcal L (V)$ and $V$ has a basis with respect to which $T$ has an upper triangular matrix with diagonal entries $\lambda_1, \dots, \lambda_n$. Then: $$(T - \lambda_1 I) \dots(T-\lambda_n I) = 0$$

>[!theorem|2]
>Suppose $T \in \mathcal L (V)$ has an upper-triangular matrix with respect to some basis of $V$. Then the [[Eigenvalue|Eigenvalues]] of $T$ are precisely the entries on the diagonal of that upper-triangular matrix.

>[!theorem|3] Necessary Condition to have an Upper-Triangular Matrix
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal L (V)$. Then $T$ has an upper-triangular matrix with respect to some basis of $V$ $\iff$ the [[Minimal Polynomial]] of $T$ equals ($z- \lambda_1) \dots(z - \lambda_m)$ for some $\lambda_1, \dots , \lambda_m \in \mathbb{F}$.

>[!corollary|2] $\mathbb{F} = \mathbb{C} \implies$ $\forall \: T \in \mathcal L (V)$ has an Upper-Triangular Matrix
>Suppose $V$ is a [[Finite-Dimensional Vector Space|Finite-Dimensional]] complex [[Vector Space]] and $T \in \mathcal L (V)$. Then $T$ has an upper-triangular matrix with respect to some basis of $V$.
