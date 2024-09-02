
>[!def|*] Convex Set
>Let $V$ be a [[Vector Space]] over $\mathbb{F}$. A set $C \subseteq V$ is convex if the line segment joining the two points $x,y \in C$ is contained in $C$. That is: $$tx + (1-t)y \in C \; \; \forall \: x,y \in C \; \land \; \forall \: t \in [0,1]$$

>[!def|*] Convex Combination
>A convex combination of $x,y$ is given by $tx + (1-t)y$. Convex combinations are linear combinations but using positive scalars summing to 1.  
##### Exercises
>[!exercise|1]
>Show that any arbitrary [[Vector Space]] is convex.
>>[!claim|*]- Solution
>>Let $V$ be a vector space and let $x,y \in V$. Let $t \in [0,1]$. Since $V$ is closed under addition, $tx + (1-t)y \in V$. Thus $V$ is convex.

>[!exercise|2]
>Show that each of the quadrants in $\mathbb{R}^2$ are convex.
>>[!claim|*]- Solution
>>If we find that one of the quadrants is convex, then they all must be convex. Thus consider $Q_1$, the quadrant in the $+ x, y$ region. To show convexity, we must precisely define what $Q_1$ is. Consider: $$Q_1 = \{(x,y) \in \mathbb{R}^2: x \ge 0 \; \land \; y \ge 0\}$$Now consider $v_1, v_2 \in Q_1: v_1 = (x_1, y_1) \; \land \; v_2 = (x_1, y_2)$. Thus: $$tx_1 + (1-t)y_1 = tx_1+y_1 - ty_1 = y_1 +t(x_1-y_1)$$Clearly $\forall t \in [0,1], y_1 \ge t(x_1 - y_1)$. Thus $y_1 + t(x_1-y_1) \ge 0$. The same holds for $x_2 \; \land \; y_2$. Thus we conclude that $Q_1$ is convex.
>>

>[!exercise|3]
>Show that the ball in metric spaces are convex: $$B_r(x) = \{y \in V: ||x-y|| < r\}$$
>>[!claim|*]- Solution
>>Consider $a,b \in B_r(x)$. Then $||x-a|| < r\; \land \; ||x-b|| < r$. Our goal is to show that $||x-(ta +(1 - t)b)|| <r$. To do so, notice that since $t \in [0,1] ,\exists r>0$: $$||x-ta|| < \frac{r}{4} \; \land \; ||x-tb|| < \frac{r}{4}$$Then by the [[Triangle Inequality]], we have: $$||t(a-b)|| = ||ta-tb|| \le ||x-ta|| + ||x-tb||  < \frac{r}{4} + \frac{r}{4} = \frac{r}{2}$$Thus $||t(a-b)|| < r$. We also have that $\exists r >0:$ $||x-b|| < \frac{r}{2}$. Thus: $$||x-(ta+(1-t)b)|| = ||x-b+t(a-b)|| \le ||x-b|| + ||t(a-b)||$$$$||x-b|| + ||t(a-b)|| < \frac{r}{2} + \frac{r}{2} = r$$Hence: $$||x-(ta+(1-t)b)|| < r \implies ta+(1-t)b \in B_r(x)$$We conclude that $B_r(x)$ is convex.


