
>[!rmk|*] Why does it point in the direction of steepest ascent?
>It has always been said that the gradient, at some point, produces a vector that points in the direction of steepest ascent. But why does this combination of partial derivatives produce this? Recall the definition for the directional derivative: $$\nabla_{\vec v} f(a,b) = \nabla f(a,b) \cdot \vec v$$where a scalar number that represents the magnitude of the vector of our chosen direction ($\vec v$) is the output. The intuition for the directional derivative follows from the fact that the slope of our $\vec v$ would be given by multiplying each of its component magnitudes by how much the function changes over some small step. 
>
>Fix $|| \vec v|| = 1$. Now suppose we want to maximize the directional derivative ($\text{i.e}$ find the direction of steepest ascent). By the definition of the [[Dot Product]], it is maximized when $\vec v$ points in the same direction as the gradient of $f$. Hence: $$\max (\nabla_{\vec v} f(a,b)) = \nabla f (a,b)$$More generally: $$\max (\nabla_{\vec v} f) = \nabla f$$With this, we can conclude that it points in the direction of steepest ascent.

>[!definition|*] The Gradient
>Let $f \in \mathbb{R}^n$ be a function, then $\vec{\nabla}f$ is defined as: $$\vec{\nabla}f = (\frac{\partial f} {\partial x_1}f_1, \dots, \frac{\partial f} {\partial x_n}f_n) $$Geometrically, $\vec{\nabla}f$ points in the direction of steepest ascent at a given point and $|\vec{\nabla}f|$ gives the magnitude of steepest ascent.

#### Physics Spherical and Cylindrical Gradients
>[!definition|*] Gradient in Different Coordinate Systems
>Let $T$ be a function, then in [[Cylindrical Coordinates in Physics]], we have:$$\vec{\nabla}T = \frac{\partial T} {\partial s}\hat{s} + \frac{1}{s} \frac{\partial T} {\partial \phi} \hat{\phi} + \frac{\partial T} {\partial z} \hat{z}$$For [[Spherical Coordinates in Physics]], we have:$$\vec{\nabla}T = \frac{\partial T} {\partial r}\hat{r} + \frac{1}{r} \frac{\partial T} {\partial \theta} \hat{\theta} + \frac{\partial T} {\partial \phi} \hat{\phi}$$
