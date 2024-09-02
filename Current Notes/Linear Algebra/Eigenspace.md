
>[!def|*] Eigenspace
>Suppose $T \in \mathcal L (V)$ and $\lambda \in \mathbb{F}$. The eigenspace of $T$ corresponding to $\lambda$ is the subspace $E(\lambda,T)$ of $V$ defined by: $$E(\lambda,T) = \text{null}(T- I\lambda) = \{v \in V: Tv = \lambda v\}$$
>Hence $E(\lambda,T)$ is the set of all [[Eigenvector|Eigenvectors]]of $T$ corresponding to $\lambda$, along with the $0$ vector.

>[!rmk|*]- Set of all Eigenvalues
>In class, we denoted the set of all [[Eigenvalue|Eigenvalues]] of $T$ to be: $$\sigma (T) = \{\lambda \in \mathbb{F} : Tv = \lambda v\}$$

>[!theorem|1] Sum of eigenspaces is a direct sum
>Suppose $T \in \mathcal L(V)$ and $\lambda_1, \dots, \lambda_n$ are distinct eigenvalues of $T$. Then: $$E(\lambda_1,T) + \dots + E(\lambda_m, T)$$Is a [[Direct Sum]]. Furthermore, if $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]], then: $$\text{dim}(E(\lambda_1,T)) + \dots + \text{dim}(E(\lambda_m,T)) \le \text{dim}(V)$$



