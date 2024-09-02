*Boundary conditions are needed to properly describe any partial differential equation. In terms of heat flow, boundary conditions are needed as the second derivative measures the change in the average of the neighboring points. Boundary points will not have neighbors and thus we need to describe how they work. If we did not, then a simple straight line (when $f = 0$) would be a “solution” to the equation but would fail completely to describe the actual heat flow*. 

Different initial conditions to $u_t - D\triangle u = f$ corresponds to different evolutions of the temperature along the bar. Given our function $u(x,t)$, we need to set some $u(x,0) = g(x)$ where $g$ models the initial temperature profile. We also need to know how the outsides affect the inside.

Consider a cylinder with length $L$ and cross-sectional area $A$ such that $L >> A$ **and that has perfect lateral thermal insulation**. Since the length is much greater than its cross-sectional area, we can view this as a one-dimensional problem where heat travels up or down the bar. Thus: $$u_t -Du_{xx} = f$$where $u$ is the heat and $D$ encodes the thermal properties. Applying certain boundary conditions ensures that our problem is well-posed.

#### Recap
>[!def|*] The three main boundary conditions
>The boundary conditions may be:
>- Dirichlet: $$u(0,t) = h_1(t), \;\;\; u(L,t) = h_2(t)$$
>- Neumann: $$-u_x (0,t) = h_1(t), \;\;\; u_x(L,t) = h_2(t)$$
>- Robin/radiation: $$-u_x(0,t)+\alpha u(0,t) =h_1(t), \; \;\; u_x(L,t)+ \alpha u (L,t) = h_2(t)$$
#### Boundary Conditions

>[!def|*] Dirichlet Boundary Conditions
>The Dirichlet boundary conditions amount to having the heat flux at the ends of the bar either vary or remain constant. Mathematically, we have: $$u(0,t) = h_1(t), \;\;\; u(L,t) = h_2(t)$$at any time $t \in (0,T]$. 

>[!def|*] Neumann Boundary Conditions
>The Neumann boundary conditions amount to prescribing the heat flux at the end points but applying [[Fourier Law of Heat Conduction]]: $$-u_x(0,t)=h_1(t), \;\;\;u_x(L,t)=h_2(t)$$at any time $t \in (0,T]$.

>[!def|*] Robin/Radiation Condition
>The Robin/radiation condition consists of the surroundings being kept at some temperature $U$ and assume that the *inward* heat flux from one end of the bar depends linearly on the difference $U-u$. Mathematically: $$\kappa u_x = \gamma (U-u) \;\;\;\; (\gamma > 0)$$Letting $\alpha = \frac{\gamma}{\kappa} > 0 \; \land \; h = \frac{\gamma U}{\kappa}$. At $x = L$, we have: $$u_x + \alpha u = h$$

