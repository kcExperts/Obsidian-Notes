#### Brief Overview
>[!def|*] Heat Equation
>The diffusion equation (also called the heat equation): $$u_t - D \triangle u = f$$It tells us that the change of the heat distribution $u(x,t)$ with respect to time is proportional with the second partial derivative with respect to $x$. The idea here is that points where the temperature distribution curves, it tends to change more quickly in the direction of that curvature. 

#### Introduction (One Dimension)
The one dimensional diffusion equation is the linear second order PDE: $$u_t - Du_{xx} = f$$where $u = u(x,t)$ and $D > 0$ is called the diffusion coefficient.

>[!rmk|*]- Homogeneous
>When $f = 0$, the equation is homogeneous and the superposition principle holds. Hence, if $u,v$ are solutions, then $\forall \: a,b \in \mathbb C$, $au+bv$ is also a solution. More generally, if $u_k(x,t)$ is a family of solutions depending on the parameter $k \in \mathbb{N} \lor \mathbb{R}$, and $g = g(k)$ is a function that rapidly vanishes at infinite, then: $$\sum_{k=1}^\infty u_k(x,t)g(k) \; \land \; \int_{-\infty}^\infty u_k(x,t)g(k) dk$$are still solutions (notice the sum and integrals are all in terms of $k$, thus then sum and integral will produce something akin to the idea of $au+bv$).

The diffusion equation represents the transport of a substance due to the molecular motion of the surrounding medium. Thus $u$ could represent the concentration of a polluting substance or even a probability density. 

>[!rmk|*]- Heat Equation
>The diffusion equation can be used to describe the transfer of heat through a medium. In that case, $D$ would be a coefficient describing thermal properties of the material, $u$ would be the heat and $f$ would represent the intensity of an external distributed source.

Using the diffusion equation, we explore connections between probabilistic and deterministic models, according to: $$\text{diffusion processes} \iff \text{probability density} \iff \text{differential equations}$$
Under equilibrium conditions (when there is no time evolution), the solution $u$ depends only on the space variable and satisfies the stationary version of the diffusion equation ($D = 1$): $$-u_{xx} = f$$In higher dimensions, the equation is read as $- \triangle u = f$ and is called the Poisson equation. With $f = 0$, it is Laplace’s equations and its solutions are called the harmonic functions.



#### Heat Conduction (Mathematical Model)
As mentioned previously, the diffusion equation can represent the flow of heat in an object. 

>[!rmk|*] Units
>Heat is a form of energy that is convenient to consider as separated from other forms. For historical reasons, the term **calories** instead of Joules are used as units of measurement: $$1 \;\text{calorie} \approx 4.182 \; \text{Joules}$$ 

>[!asm|*] Mathematical Model
>To derive our model, we will make some assumptions:
>- The body is homogenous (material is equally spread out everywhere - uniform composition);
>- The body is isotropic (physical properties do not differ regardless of where the object is examined);
>- The mass density $\rho$ is constant;
>- The body can receive energy from external sources;
>- Denote $r$ as the time rate per unit mass at which heat is supplied by the external source.

Since heat is energy, we use the law of conservation of energy that is formulated as such:

*Let $V$ be an arbitrary control volume inside the body (arbitrary selected volume). The time rate of change of thermal energy in $V$ equals the net flux of heat through the boundary $\partial V$ of $V$, due to the conduction, plus the time rate at which heat is supplied by the external sources (not to be confused with $r$).*

Let $e = e(x,t)$ denote the thermal energy per unit mass. Then the total quantity of thermal energy in $V$ is: $$\int_V e \rho \:dx$$(recall the $x$ is the space variable). We do this so that its time rate of change (assuming that the time derivative can be taken inside the integral): $$\frac{d}{dt} \int_V e \rho \; dx = \int_V e_t \rho \; dx$$
Denote $q$ as the heat flux vector, which specifies the heat flow direction and the magnitude of the rate of flow across a unit area. More precisely, if $d \sigma$ is an area element: $d \sigma \subset \partial V$ with outer unit normal $\mu$, then $q \cdot \mu d \sigma$ is the unit energy flow rate through $d\sigma$. The total inner heat flux through $\partial V$ is given by: $$- \int_{\partial V} q \cdot \mu \; d\sigma$$By the divergence theorem, we get: $$-\int_V \nabla\cdot q\; dx$$Finally, the contribution due to the external source is given by: $$\int_V r \rho \; dx$$
By the conservation of energy, we have: $$\int_V e_t \rho \; dx = -\int_V \nabla \cdot q \; dx + \int_V r \rho\; dx$$Since the integrals are over the same volume, we can get a **pointwise** relation: $$e_t \rho = - \nabla \cdot q + r \rho$$
The above equation constitutes a basic law of heat conduction. However, $e$ and $q$ are unknown and additional information is needed:

- In practice, $\kappa$ in [[Fourier Law of Heat Conduction]] may depend on $u,x,t$ but often varies little that we neglect its variation and let it be a constant: $$\nabla \cdot q = - \kappa \triangle u$$
- The thermal energy is a linear function of the absolute temperature $u$ (a temperature scale where $0$ is seen as absolute zero): $$e = c_v u$$where $c_v$ denotes the specific heat (at constant volume) of the material. In many cases, $c_v$ can be considered constant. Hence the relation is reasonably true over a suitable range of temperature.

With these assumptions, $e_t \rho = - \nabla \cdot q + r \rho$ turns into:

>[!def|*] Conducting of heat
> $$u_t = \frac{\kappa}{c_v \rho}\triangle u + \frac{r}{c_v}$$Which is the diffusion equation with $D = \kappa/c_v \rho$ and $f = r/c_v$. Note that $D$, called thermal diffusivity (in the heat case), encodes the thermal response time of the material.


