#### Intuition
Suppose you had a 3d graph. The input space is the 2d plan on the $x,y$ axis and the output of the function $f(x,y)$ is modeled by the specific $z$ height associated to each point in the input space. The Laplacian $\triangle f$ works something like a second derivative for $f$. The Laplacian is defined as follows: $$\triangle f = \nabla \cdot \nabla f = \text{div(grad}  \; f \text{)}$$
Now recall that the [[Gradient]] of a function at some point produces a vector that essentially tells you in what direction you need to go in to maximize your rate of ascent. Hence:
1. Gradient vectors point towards the local peaks (so called local maximums)
2. Gradient vectors point away from local lows (so called local minimums)
Now recall that the [[Divergence]] of a function $f$ gives a measure of the flow through a point. In a sense, it represents the rate of change of the vectors when an infinitesimally small step is taken. 

From this, we can see some connections to the second derivative. As the gradient gives the direction of steepest ascent and the divergence can measure the change of flow (or how fast the magnitude of our steepest ascent vectors change), then we get an idea of the local curvature of the region. To illustrate this, consider a local maximum at $(x,y)$, then the gradient vectors of surrounding points will point towards this $(x,y)$. Taking the divergence will then measure the flow at that point and since all the points tend to go inwards to $(x,y)$, the divergence will be negative. Hence our Laplacian will be negative which mirrors what the second derivative of a local maximum in single variable calculus would give us. Hence:
1. $\triangle f = + \implies$ the neighbors tend away from the point.
2. $\triangle f = 0 \implies$ all the neighbors altogether balance out. 
3. $\triangle f = - \implies$ the neighbors tend towards the point. 
#### Definition

>[!def|*] Laplacian
>The Laplacian, denoted as $\triangle$ (or as $\nabla^2$) is defined as follows: $$\triangle f = \nabla \cdot \nabla f = \text{div(grad}  \; f \text{)} = \nabla^2 f = \frac{\partial^2 f}{\partial x_1^2} + \frac{\partial^2 f}{\partial x_2^2} + \dots + \frac{\partial^n f}{\partial x_n^2}$$

