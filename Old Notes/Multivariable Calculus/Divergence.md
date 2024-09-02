The divergence of a field essentially takes in an input and spits out a number representing the “flow” at that point. Positive means that more flows into the point then out and negative is the opposite. It measures this by taking an infinitely small change in the field to measure how the flow changes (hence why derivatives come into play). 

>[!rmk|*] Notation
>Recall that the [[Dot Product]] $\vec x \cdot \vec y$ represents how much $\vec y$ points in the direction of $\vec x$. Now why do we denote the divergence as $\nabla \cdot F$? 
>
>Suppose you had a vector $\vec z_1$ associated to some point $(x,y)$ that lies in a vector field. Taking a step in any direction will (most likely) generate a new $\vec z_2$ that (generally) would vary a tiny bit depending on the step and $F$. Now imagine you have the difference between those two vectors as $\vec d = (\vec z_2 - \vec z_1)$. Then the dot product of the **step vector** with the **difference** $\vec d$ tends to be positive where the divergence is positive and vice versa. 
>
>In a sense, the divergence is the **average value** of all possible dot products involving an infinitesimal step in some direction with the corresponding difference (assuming proper scale). 

>[!definition|*] Divergence
>Let $\vec{F}$ be a vector function, the divergence of $\vec{F}: \; \vec{\nabla} \cdot \vec{F}$ is a measure of how much $\vec{F}$ spreads out (diverges) from a point $p$: $$\vec{\nabla}\cdot\vec{F} = \frac{\partial F_1} {\partial x_1} + \dots + \frac{\partial F_n} {\partial x_n}$$By definition, we have the following important observations:
>- $\vec{\nabla} \cdot \vec{F} = + \implies$ $\vec{F}$ spreads out from the point $p$.
>- $\vec{\nabla} \cdot \vec{F} = 0 \implies$ Equal rate in and out from the point $p$.
>- $\vec{\nabla} \cdot \vec{F} = - \implies$ $\vec{F}$ converges more towards the point $p$.

Do note that it is fine to drop the vector symbol above $\nabla$.
#### Physics Spherical and Cylindrical Divergence
>[!definition|*] Gradient in Different Coordinate Systems
>Let $\vec{v}$ be a vector, then in [[Cylindrical Coordinates in Physics]], we have:$$\vec{\nabla}\cdot \vec{v} = \frac{1}{s} \frac{\partial } {\partial s}(s\vec{v}_s)\hat{s} + \frac{1}{s} \frac{\partial} {\partial \phi}(\vec{v}_{\phi}) \hat{\phi} + \frac{\partial } {\partial z}(\vec{v}_z) \hat{z}$$For [[Spherical Coordinates in Physics]], we have:$$\vec{\nabla} \cdot\vec{v} =\frac{1}{r^2} \frac{\partial} {\partial r}(r^2\vec{v}_r)\hat{r} + \frac{1}{rsin(\theta)} \frac{\partial} {\partial \theta}(sin(\theta)\vec{v}_{\theta}) \hat{\theta} + \frac{1}{rsin(\theta)} \frac{\partial} {\partial \phi} (\vec{v}_{\phi})\hat{\phi}$$

