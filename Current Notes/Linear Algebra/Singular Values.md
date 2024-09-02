---
aliases: []
---

The following will be needed:
>[!lemma|1]- Properties of $T^*T$
>Suppose $T \in \mathcal{L}(V,W)$. Then:
>1. $T^*T$ is a positive operator on $V$.
>2. $\text{null}( T^*T) = \text{null}(T)$.
>3. $\text{range}((T^*T) = \text{range}(T^*)$.
>4. $\text{dim}(\text{range}(T) = \text{dim}(\text{range}(T^*) = \text{dim}(\text{range}(T^*T)$.

>[!def|*] Singular Values
>Suppose $T \in \mathcal{L}(V,W)$. The singular values of $T$ are the nonnegative square roots of the [[Eigenvalue|Eigenvalues]] of $T^*T$, listed in decreasing order, each included as many times as the dimension of the corresponding [[Eigenspace]] of $T^*T$.

>[!rmk|*] Finding the Singular Values
>To find the singular values of a matrix $T$:
>1. Find $T^*$ and find the [[Eigenvalue|Eigenvalues]] of $T^*T$.
>2. Find the $\text{dim}$ of each [[Eigenspace]].
>3. Take the nonnegative square roots of these eigenvalues.
>4. Use the dimension information to know how many times to repeat the values.
>
>For example. if $9,4$ are eigenvalues of $T^*T$ and $\text{dim}(E(9,T^*T)) = 2 \; \land \; \text{dim}(E(,T^*T)) = 1$, then the nonnegative square roots are $3$ and $2$. Since $\text{dim}(E(9,T^*T)) = 2$, then $3$ will be repeated twice and the singular values are: $$3,3,2$$

>[!theorem|1] Role of Positive Singular Values
>Suppose that $T \in \mathcal{L}(V,W)$, then:
>1. $T$ is [[Injective]] $\iff 0$ is not a singular value of $T$.
>2. The number of positive singular values of $T$ equals $\text{dim}(\text{range}(T))$.
>3. $T$ is [[Surjective]] $\iff$ the number of positive singular values of $T$ equals $\text{dim}(W)$.

Note that finding the $\text{dim}$ of an eigenspace is done by taking your eigenvalue, then calculating $T - \lambda I$ and seeing the range of the resulting matrix/linear transformation.

