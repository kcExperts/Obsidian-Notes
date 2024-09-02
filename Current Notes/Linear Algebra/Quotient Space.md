
>[!definition|*] Quotient Space $V/U$
>Suppose $U$ is a [[Vector Subspace]] of V. Then the quotient space $V/U$ is the set of all [[Translate]] of $U$: $$V/U = \{v+U: v  \in V\}$$
>With operations:
>- $+: (v+U) + (w+U) = (v+w)+U$
>- $\cdot : \lambda (v+U) = (\lambda v) + U$

>[!example|*]-
Following from the example in the [[Translate]] section, $U$ is the set of all lines with slope $2$. If we imagine this, you may notice that the set of all these lines actually form $\mathbb{R}^2$. This is a coincidence as this does not always hold true for all vector spaces.

The following theorem is of extreme importance when working with Quotients.

>[!theorem] Two translates of a Subspace are Equal or Disjoint
>Suppose $U$ is a [[Vector Subspace|Subspace]] of $V$ and $v,w \in V$. Then: $$v-w \in U \iff v + U = w + U \iff (v+U) \cap (w+U) \ne \emptyset$$
>>[!claim|*]- Proof
>>`\begin{proof}` We show $a \implies b \; \land \; b \implies c \; \land \; c \implies a$.
>>
>>$a \implies b$: Suppose $v-w \in U$. Let $u \in U$ be arbitrary $\implies$ $v-w = u$ which gives us $v+u = w$. But: $$w = v+u = w-w+v+u = w+((v-w)+u) \in U \; \text{as} \; v-w\in U$$Assuming $w \in W$ is arbitrary, $v+U \in W \implies v+U \subseteq w+U$. Similarly, $v-w = u$ gives us $w+u = v$. But: $$v = u + w = v-v+u+w=v+((w-v)+u) \in U \; \text{as} \; w-v \in U$$
>>(We note $w-v \in U$ as $v-w \in U \implies v-w = u_2 - u_1$ $\implies$ $w-v = u_1 -u_2 \implies v-w \in U$). 
>>
>>Thus it is closed under addition. Assuming $v \in V$ is arbitrary $\implies w+U \subseteq v+U$. We have inclusion both ways thus $v+U = w+U$. 
>>
>>$b \implies c$: Let $x \in v+U$, since $v + U = w+U \implies x \in w+U$. Thus $x \in (v+U) \cap (w+U)$. We conclude $(v+U) \cap (w+U) \ne \emptyset$. 
>>
>>$c \implies a$: Let  $x \in (v+U) \cap (w+U)$, from this it is clear that $x \in v+U \; \land \; x \in w+U$. Thus $v+U = w+U \implies \exists \; u_1,u_2 \in U$: $v+u_1 = w+u_2 \implies v-w = u_2-u_1 \implies v-w \in U$ as desired. 
>> `\end{proof}`

>[!corollary|1]- $v+U = 0+U \iff v \in U$
>`\begin{proof}` We show implications both ways: $$v+U=0+U \iff v-0 \in U \iff v \in U$$Which holds by the above theorem. Thus $v+U = 0+U \iff v\in U$ as desired.
> `\end{proof}`

With this result, we can show the $V/U$ is a [[Vector Space]].

>[!theorem]
>The Quotient Space $V/U$ is a [[Vector Space]]
>>[!claim|*]- Proof
>>`\begin{proof}` We will show $V/U$ is a [[Vector Subspace|Subspace]] of $V$:
>>**Zero**: We note $0_v \in V/U$ by considering the translate $0+U$. Since $U$ must be a subspace of $V$, then $0_v \in U \implies 0_v \in 0+U \implies 0_v \in V/U$. 
>>
>**Addition**: Under the assumption that our definition of addition is [[Well-Defined]], we prove that it is closed under addition: Let $v_1,v_2 \in V$, then: $$(v_1 + v_2)+U = (v_1 + U) + (v_2 + U) \implies (v_1+v_2)+U \in v+U$$**Scalar Multiplication**: Suppose $\lambda \in \mathbb{F}$. Again, under the assumption that our definition of scalar multiplication is [[Well-Defined]], we have: $$\lambda(v + U) = (\lambda v) + U \implies \lambda(v+U) \in v+U$$Thus $V/U$ is a vector subspace of $V$ and is thus a vector space.
>> `\end{proof}`

A pressing question is how to find the [[Dimension of a Vector Space|Dimension]] of the quotient space. For that, we need to introduce the [[Quotient Map]].

