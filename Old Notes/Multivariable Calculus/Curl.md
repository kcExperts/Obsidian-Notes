
>[!rmk|*] Notation
>Recall that the cross product is a measure of how perpendicular two vectors are. Then the cross product (see [[Divergence]] notation section) of the step with the difference $\vec d$ tends to be positive in regions with positive curl and vice-versa. Think of it as the average of all possible infinitesimal step and difference cross products. 


>[!definition|*] Curl
>Let $\vec{F}$ be a vector function, the curl of $\vec{F}: \; \vec{\nabla} \times \vec F$ is a measure of how much $\vec{F}$ swirls around the point $p$ in question: $$\vec{\nabla} \times \vec{F} =det \left[ \begin{array}{ccc} \hat{x} & \hat{y} & \hat{z} \\ \frac{d}{dx} & \frac{d}{dy} & \frac{d}{dz}\\ F_x & F_y & F_z \end{array} \right]$$Note: If, around the point $p$, the vectors are straight but change direction, there is still a positive curl.

>[!theorem|*] Irrotational Fields
>Let $\vec{F}$ be irrotational, then the following are equivalent:
>- $\vec{\nabla} \times \vec{F} = 0$
>- $\int_a^b \vec{F} \cdot dl$ is [[Path Independent]].
>- $\oint \vec{F} \cdot dl = 0 \; \forall$ closed loops.
>- $\vec{F} =\vec{\nabla}f$. In physics, we would have $\vec{F} = -\vec{\nabla}V$ where $V$ is the [[Electric Potential]].

Do note that it is fine to drop the vector symbol above $\nabla$.
#### Physics Spherical and Cylindrical Curl
>[!definition|*] Gradient in Different Coordinate Systems
>Let $\vec{v}$ be a vector, then in [[Cylindrical Coordinates in Physics]], we have:$$\vec{\nabla}\times \vec{v} = (\frac{1}{s} \frac{\partial \vec{v}_s} {\partial s}- \frac{\partial \vec{v}_\phi} {\partial z})\hat{s} + (\frac{\partial \vec{v}_s} {\partial \phi} - \frac{\partial \vec{v}_z} {\partial s})\hat{\phi} + \frac{1}{s}(\frac{\partial } {\partial z}(s\vec{v}_\phi)- \frac{\partial \vec{v}_s} {\partial \phi}) \hat{z}$$For [[Spherical Coordinates in Physics]], we have:$$\vec{\nabla}\times \vec{v} = \frac{1}{rsin(\theta)} [\frac{\partial } {\partial \theta}(sin(\theta)\vec{v}_\phi) - \frac{\partial \vec{v}_\theta} {\partial \phi}]\hat{r} + \frac{1}{r}[\frac{1}{rsin(\theta)}\frac{\partial \vec{v}_r} {\partial \phi} - \frac{\partial} {\partial r}(r\vec{v}_\phi)] \hat{\theta} + \frac{1}{r}[\frac{\partial } {\partial r}(r\vec{v}_\theta)- \frac{\partial \vec{v}_r} {\partial \theta}] \hat{\phi}$$



