In metric topology, we will need the idea of a sort of “neighborhood”. This is given by the following definition:

>[!def|*] The $r$ Ball
>Let $\vec{x} \in \mathbb{R}^d \; \land \; \rho : \mathbb{R}^d \times \mathbb{R}^d \rightarrow \mathbb{R}_+$ be a metric space on $\mathbb{R}^d$. Then the ball of radius $r >0$ centered at $\vec{x}$ is given by: $$B_r(\vec x) = \{y \in \mathbb{R}^d: \rho(x,y) < r\}$$

>[!exm|*]- Balls
>The following are examples of some “balls“:
>- In $\mathbb{R}$ with $\rho (x,y) = |x-y|$, we have $B_r(x) = (x-r,x+r)$
>- In $\mathbb{R}^2$ with $\rho(\vec x, \vec y) = \sqrt{(x_1-y_1)^2+(x_2-y_2)^2}$, we take a circle with radius $r$.
>- In $\mathbb{R}^2$ with $\rho_T (x,y) = |x_1-y_1| + |x_2-y_2|$, we have that our “ball” will in fact be a diamond with distance from center to edge being $r$.
>- In $\mathbb{R}^2$ with $\rho_m (\vec x, \vec y) = \text{max} \{|x_1-y_1|, |x_2-y_2|\}$, this has a shape of a square around the point.

