---
aliases:
  - V.S
  - Vector Spaces
---
>[!definition|*] Vector Space
>A Vector Space is a set on V for which addition and scalar multiplication are [[Well-Defined]] and satisfy the following points $\forall x,y,z \in V$ and $\forall   \lambda_1, \lambda_2 \in \mathbb{F}$:
>- **Commutativity**: $x+y = y+x$
>- **Associativity**: $(x + y) + z = x + (y + z)$ $\land$ $(xy)z = x(yz)$
>- **Additive Identity**: $\exists  0_v \in V: 0_v + x = x$
>- **Additive Inverse**: $\forall x \in V, \exists w \in V: x + w = 0_v$
>- **Multiplicative Identity**: $\forall x \in V, \;1*x = x$
>- **Multiplicative Inverse**: $\forall x \in V, \; \exists \: v^{-1} \in V: \; a * a^{-1} = 1$
>- **Distributivity**: $\lambda(x + y) = \lambda x + \lambda y \; \land \; (\lambda_1 + \lambda_2)x =  \lambda_1 x + \lambda_2 y$

I shall often denote the zero vector as $0$.

>[!lemma]- Vector spaces have unique additive inverses.
>`\begin{proof}`  Let $v,u \in V: v + u = 0$. Suppose on the contrary that $\exists \; w \in V: v + w = 0 \; \land \; w \ne u$ Then we have: $$v + u = 0 \implies v+u+w = w \implies (v+w)+u=w \implies 0+u = w$$ Thus we have that $u=w$ which is a contradiction. Thus the additive inverse is unique.`\end{proof}`

>[!lemma]- $0\cdot v = 0$
>`\begin{proof}` Consider: $$0 \cdot v = (0 \cdot 0)v = 0\cdot v + 0\cdot v$$Then: $$0 \cdot v = 0\cdot v + 0\cdot v$$Adding the additive inverse: $$0\cdot v + (-1)(0 \cdot v) = 0\cdot v + 0\cdot v +(-1)(0 \cdot v)$$This directly gives us $0 = 0\cdot v$ as desired.
>`\end{proof}`

>[!lemma]- (-1)v = -v
>`\begin{proof}`  We note $$v+(-1)v = (1)v+(-1)v=(1-1)v=0\cdot v = 0$$Which follows from Lemma 2. We have that $(-1)v$ is the additive inverse of $v$. By Lemma 1, additive inverses are unique, thus we conclude $(-1)v = -v$
>`\end{proof}`

### Links
[[Function Spaces]]
[[Vector Subspace]]









