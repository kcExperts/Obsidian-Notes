
>[!rmk|*]- Motivation of Orthogonal Decomposition
>Suppose $u,v \in V: v \ne 0$. We would like a way to write $u$ as a scalar multiple of $v$ plus some vector $w \in V$ that is orthogonal to $v$, as suggested in the image below:
>>[!claim|*]- Image
>>![[Pasted image 20240304192757.png]]
>
>To do this, let us write ($c \in \mathbb{F}$): $$u = u +cv-cv = cv +(u-cv)$$We need to choose $c$ so that $v$ is orthogonal to $u-cv$. Thus: $$0 = \langle cv,u-cv \rangle = \langle v,u-cv \rangle =-\langle v,cv \rangle + \langle v,u \rangle = \langle u,v \rangle - c||v^2||$$(I get rid of the first $c$ by putting it in the denominator of $0$)
>Rearranging suggests that: $$c = \frac{\langle u,v \rangle}{||v^2||}$$Thus: $$u = \frac{\langle u,v \rangle}{||v^2||} v + \left( u-\frac{\langle u,v \rangle}{||v^2||} v\right)  $$

>[!def|*] Orthogonal Decomposition
>Suppose $u,v \in V: v \ne 0$, then: $$\text{Set} \;c = \frac{\langle u,v \rangle}{||v||^2} \; \land \; w = u - \frac{\langle u,v \rangle}{||v||^2} \implies u = cv + w \; \land \; \langle w,v \rangle = 0$$

With this tool, we can prove one of the most important inequalities in mathematics; the [[Cauchy-Schwarz Inequality]].
