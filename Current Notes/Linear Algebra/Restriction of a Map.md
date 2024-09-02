
>[!def|*] Restriction of a Map
>$f|_{f(X)}$ is the restriction of the codomain on $f: X \rightarrow Y$. In other words, a restriction of $f$ is the function $g: X \rightarrow f(X)$. Thus $f|_{f(X)} = g$.

In terms of linear algebra, we have an important notion that we need to define what a [[Pseudoinverse]] is:

>[!theorem|1]
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]] and $T \in \mathcal{L}(V,W)$. Then $T|_{(\text{null}(T))^\perp}$ is a [[Injective]] map of $(\text{null}(T))^\perp$ onto $\text{range}(T)$. I.e: $$\text{range}(T|_{(\text{null}(T))^\perp}) = \text{range}(T)$$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>We recall that: $$(\text{null}(T))^\perp = \{v \in V: \forall \: u \in \text{null}(T), \langle u,v \rangle = 0\}$$Now suppose $v \in (\text{null}(T))^\perp$ and $T|_{(\text{null}(T))^\perp} (v) = 0$. From Theorem 1 in [[Orthogonal Complement]], since $V$ is finite-dimensional, we have: $$V = \text{null}(T) \oplus (\text{null}(T))^\perp$$Clearly $v \in V$. But since $v \in (\text{null}(T))^\perp$ and $T|_{(\text{null}(T))^\perp} (v) = 0$ we must have that: $$v  \in \text{null}(T) \oplus 0 \implies v \in \text{null}(T)$$hence $Tv = 0$. Thus: $$v \in (\text{null}(T)) \cap (\text{null}(T))^\perp$$which by a property of the [[Orthogonal Complement]] means that $v = 0$ (which comes from the fact that $\text{null}(T) \; \land \; (\text{null}(T))^\perp$ form a [[Direct Sum]]). Thus: $$\text{null}(T|_{(\text{null}(T))^\perp}) = \{0\}$$Which means that $T|_{(\text{null}(T))^\perp}$ is injective as desired.
>>
>>Now we must show that its an injective map onto the $\text{range}(T)$. It is already clear that $T|_{(\text{null}(T))^\perp} \subseteq \text{range}(T)$. But the other direction does need more thinking.
>>
>>Suppose $w \in \text{range}(T)$. Then $\exists \: v \in V: w = Tv$. Since: $$V = \text{null}(T) \oplus (\text{null}(T))^\perp$$there must exists $u \in \text{null}(T) \; \land \; x \in (\text{null}(T))^\perp$ such that $v = u+x$. Clearly: $$T|_{(\text{null}(T))^\perp} (x) = Tx$$Which holds since $x \in (\text{null}(T))^\perp$. Now $v = u + x \implies x = v-u$, hence: $$Tx = T(v-u) = Tv - Tu = w-0 = w$$Which holds by linearity of $T$ and since $u \in \text{null}(T)$. This shows that: $$w \in \text{range}(T|_{(\text{null}(T))^\perp})$$Thus: $$\text{range}(T) \subseteq \text{range}(T|_{(\text{null}(T))^\perp})$$Since we have shown inclusion both ways, we conclude: $$\text{range}(T|_{(\text{null}(T))^\perp}) = \text{range}(T)$$
>> `\end{proof}`


