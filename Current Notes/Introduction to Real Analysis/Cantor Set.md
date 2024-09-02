
>[!exm|*] Cantor Set
>Let $C_0 = [0,1]$. We will recursively create the contour set. Let:
> - $C_0 = [0,1]$
> - $C_1 = [0,\frac{1}{3}] \cup [\frac{2}{3},1]$
> - $C_2 = [0,\frac{1}{9}] \cup [\frac{2}{9}, \frac{3}{9}] \cup [\frac{2}{3}, \frac{7}{8}] \cup [\frac{8}{9},1]$
> 
> The Cantor set is defined as: $$C = \cap^\infty_{n=0}C_n$$From this, we note:
> - $C \ne \emptyset$ (if $x$ is an endpoint of one of the intervals in $C_n \implies x \in C$)

>[!rmk|*]- Pictorial Representation of the Cantor Set
>![[Pasted image 20240226155630.png]]

Now ask yourself, does $\frac{1}{4} \in C$? This is **NOT** an easy question to answer. Anyways, let us show that the length of $C$ is in fact $0$.

>[!theorem|1]- Length of $C$ is $0$
>`\begin{proof}` 
>Let $L_n$ be the length of the set removed at each step. We note this set is [[Monotone, Nondecreasing and Nonincreasing|Monotone]] increasing and must be [[Bounds|Bounded]]. Thus, the length of $C$ is: $$1-\sum_{n=1}^\infty L_n$$It turns out that: $$L_n = \frac{2^{n-1}}{3^n}$$Then the length is: $$1- \sum_{n=1}^\infty \frac{2^{n-1}}{3^n} = 1-\frac{(\frac{1}{3})}{(1-\frac{2}{3})} = 0$$Which holds by the [[Geometric Series]] formula. The Cantor set is thus “small” with $0$ length. 
> `\end{proof}` 

The Cantor set might have $0$ length, but it is actually uncountable.

>[!theorem|2]- The Cantor set is Uncountable
>Idea for the proof is as follows (actual proof is very hard):
>
>For any $x \in C$, we can define a corresponding sequence $a_n$ by:
>- If $x$ is in the upper section of $C_1$, then let $a_1 = 1$. If it is un the lower section, we let $a_1 = 0$. 
>- Given which section of $C_{n-1}$ $x$ belongs to, there are only two possible sections of $C_n$ that it can belong to. If $x$ is in the upper of these sections, let $a_n = 1$, if it is in the lower section, let $a_n =0$.
>
>Consider $x = \frac{1}{3}$:
> ![[Pasted image 20240226160649.png]]
>Then the sequence corresponding to $x = \frac{1}{3}$ is $x \rightarrow (0,1,1,1, \dots)$.
>The $\frac{1}{3}$, for $C_1$ is on the right endpoint of the left part, thus it is $0$. Then for $C_2$, it is on the right endpoint of the right part, thus it is $1$, so on so forth. 
> - This establishes a bijection between $C$ and the set of sequences of $0$’s and $1$’s. Given by $A = \{a_n: a_n \in \{0,1\}\}$. We can show $A$ is uncountable. If not, $\exists \; f: \mathbb{N} \rightarrow A$ with $f$ being a bijection.
> - Then $\forall \; n \in \mathbb{N}$, $f(n)$ is a sequence, denote the $k^{th}$ term of this sequence by $f(n)_k$. Define $b_n$ by: $$b_k = \begin{cases} 0 & f(k)_k = 1\\ 1 & f(k)_k = 0 \end{cases}$$
> - So, $b_m \ne f(n) \forall \; n \in \mathbb{N}$ and $\therefore$ $f$ is not a bijection
>
>In essence, this shows that the Cantor Set is “Large”…

