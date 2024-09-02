
>[!def|*] Cauchy-Schwarz Inequality
>Suppose $u,v \in V$, then: $$| \langle u,v \rangle| \le ||u|| \: ||v|| $$The inequality is an equality $\iff$ $u,v$ are scalar multiples of each other. The inequality also reads as: $$\langle u,v \rangle^2 \le \langle u,u \rangle \langle v,v \rangle$$Which follows directly from the definition of the [[Norm]].
>>[!claim]- Proof
>>`\begin{proof}` Firstly, if $v = 0$, both sides become $0$. Now suppose $v \ne 0$. We consider the [[Orthogonal Decomposition]]: $$u = \frac{\langle u,v \rangle}{||v||^2}v+w$$where $w$ is orthogonal to $v$. By the [[Pythagorean Theorem]], we have $$||u||^2 = \left| \left|\frac{\langle u,v \rangle}{||v||^2}v\right| \right|^2+||w||^2 = \frac{| \langle u,v \rangle|^2}{||v||^2}+||w||^2 \ge \frac{| \langle u,v \rangle|^2}{||v||^2}$$Multiplying both sides by $||v||^2$ and taking the square root gives the correct answer.
>>  `\end{proof}`

>[!example|*]- Sample Cauchy-Schwarz over $\mathcal P (\mathbb{R})$
>Let $f,g \in C_{[-1,1]}(\mathbb{R}, \mathbb{R})$, then: $$\left | \int_{-1}^1 fg \;\right| \le \left( \int_{-1}^1 f^2 \right)  \left(  \int_{-1}^1 g^2 \right) $$

With this powerful inequality, other inequalities can be derived, such as the [[Triangle Inequality]]. 

##### Exercises
>[!exercise|1] 
>Suppose $a,b,c,d \in \mathbb{R}_+$. Prove that $(a+b+c+d) \left( \frac{1}{a} + \frac{1}{b} + \frac{1}{c} + \frac{1}{d} \right)  \ge 16$
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Define $v = (\sqrt a, \sqrt b, \sqrt c, \sqrt d)$, and use the [[Euclidean Inner Product]]. Then we have: $$\langle v,v \rangle \langle \frac{1}{v},\frac{1}{v} \rangle \ge 16$$Clearly: $$|\langle v,\frac{1}{v} \rangle| = |4|$$Then by the Cauchy-Schwarz Inequality, we have: $$|\langle v,\frac{1}{v} \rangle| \le ||v||\cdot ||\frac{1}{v}||$$Squaring both sides: $$|\langle v,\frac{1}{v} \rangle|^2 \le ||v||^2 \cdot ||\frac{1}{v}||^2$$But recall that $|\langle v,\frac{1}{v} \rangle| = 4 \implies |\langle v,\frac{1}{v} \rangle| = 16$. Thus: $$16 \le ||v||^2 \cdot ||\frac{1}{v}||^2$$Finally, by the definition of the [[Norm]], we have: $$16 \le \langle v,v \rangle \langle \frac{1}{v},\frac{1}{v} \rangle$$Which by our definition of $v$ gives: $$(a+b+c+d) \left( \frac{1}{a} + \frac{1}{b} + \frac{1}{c} + \frac{1}{d} \right)  \ge 16$$As desired.
>> `\end{proof}`

