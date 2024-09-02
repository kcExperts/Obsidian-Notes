---
aliases:
  - Kernel
---
>[!def|*] Null Space/ Kernel
>$\forall \; T \in \mathcal{L}(V,W)$, the Null Space of $T$ is a subset of $V$ consisting of the vectors that map to $0_w$: $$\text{null}(T) = \text{ker}(T) = \{v \in V : \:T(v) = 0_w \}$$It can be shown that $\text{null}(T)$ is a [[Vector Subspace]] of $V$.

>[!theorem|*]- $\text{null}(T) \ne \emptyset \; \forall \: T \in \mathcal{L}(V,W)$
>`\begin{proof}` Suppose, for contradiction, that $\exists \; T \in \mathcal{L}(V,W): \text{null}(T) = \emptyset$. Then no vector is mapped to the $0$ vector in $W$. But we know that $T(0_v) = 0_w$ by definition of a [[Linear Maps|Linear Map]], but then $0_v \in \text{null}(T) \implies \text{null}(T) \ne \emptyset$ which contradicts our initial assumption. Thus $\text{null}(T) \ne \emptyset$.
> `\end{proof}`

With this, we prove an important theorem pertaining to when a linear transformation is [[Injective]].

>[!theorem]- $T$ is injective $\iff \text{ker}(T) = \{0\}$
>`\begin{proof}` We show implication both ways (assume $T \in \mathcal{L}(V,W)$):
>
>$\implies$: Suppose $T$ is injective. Then by definition, $\exists \;$ a unique $v$ that maps to $0$. However, by a previous theorem in [[Linear Maps]], $T(0_v) = 0_w$, thus $\text{ker}(T) = \{0\}$ as desired.
>
>$\impliedby$: Suppose $\text{ker}(T) = \{0\}$. Now suppose, for the sake of contradiction, that $T$ is not injective. Then that must mean that $Tu = Tv \implies u \ne v$. Since $Tu = Tv$, we must have: $$Tu -Tv = 0_w \implies T(u-v) = 0_w \implies u-v \in \text{ker}(T)$$But this contradicts the fact that $\text{ker}(T) = \{0\}$. Thus $T$ must be injective, as desired.
>  `\end{proof}`

The notion of the Kernel proves to be of great importance for the [[Fundamental Theorem of Linear Maps]].