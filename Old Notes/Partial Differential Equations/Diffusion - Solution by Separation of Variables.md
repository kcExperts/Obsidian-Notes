>[!def|*] The Question
>We continue to consider a bar of length $L$ (that we consider one-dimensional), that at time $t = 0$ is kept at constant temperature $u_0$. Thereafter, the end point $x=0$ is kept at the same temperature $u_0$ while the other end $x = L$ is kept at a constant temperature $u_1 > u_0$. How does the temperature evolve inside the bar?

>[!hyp|*] What might happen
>It is always good to try and think about what would happen in any situation before solving directly. Given that $u_1 > u_0$, heat will start flowing from the hotter end, raising the temperature inside the bar and causing a heat outflow into the cold boundary. The interior increase of temperature causes the hot inflow to decrease in time, while the outflow increases. Sooner or later, we expect the two fluxes to balance out and the temperature to reach a steady distribution. 

#### Problem Reformulation
Let us show that this behavior is exactly predicted by our model: $$u_t - Du_{xx} = 0 : t>0 \; \land \;0<x<L$$with the initial-Dirichlet conditions: $$\begin{array}{ccc} u(x,0) = u_0 : 0 \le x \le L \\ u(0,t) = u_0,  \; \;\;u(L,t) = u_1 : t > 0\end{array}$$(Notice at $x=L$ that there is a jump discontinuity). 

Firstly, let us introduce some dimensionless variables. We shall rescale space, time and temperature with respect to quantities that are characteristic of our problem. 
- **Space**: For the space variable, we use the length $L$ of the rod so as to squish it between $0$ and $1$. Set: $$y = \frac{x}{L}$$doing so makes a dimensionless variable such that $0 \le y \le 1$.
- **Time**: Recall that the diffusion coefficient $D$ has dimensions $[\text{length}]^2 \times [\text{time}]^{-1}$. Thus we introduce a constant $\tau = L^2/D$: $$s = \frac{t}{\tau}$$giving us dimensionless time.
- **Temperature**: To rescale our temperature so it fits between $u_1$ and $u_0$, we have: $$z(y,s) = \frac{u(Ly,\tau s)-u_0}{u_1-u_0}$$
We have done this to fit everything nicely between $0$ and $1$. Indeed, our reformulation of our initial condition nets: $$z(y,0) = \frac{u(Ly,0)-u_0}{u_1-u_0} = \frac{u_0-u_0}{u_1-0_0}=0: \; \;\; 0 \le y \le 1$$With the boundary conditions being: $$z(0,s) = \frac{u(0,\tau s) - u_0}{u_1-u_0} = 0 , \;\;\; z(1,s) = \frac{u(L,\tau s) - u_0}{u_1 - u_0}=1$$Our goal here is to reformulate our problem into one fitting of the rod. Based off the changes we have done, the original differential equation $u_t - Du_{xx} =0$ must also change. Skipping some steps (that I did not understand), we have the following problem to solve: $$\begin{array}{ccc}  z_s - z_{yy} = 0 \\ z(y,0) = 0\\ z(0,s) = 0, \;\;\; z(1,s) = 1 \end{array}$$
#### Steady State Solution
We solve our reformulated problem: $$\begin{array}{ccc}  z_s - z_{yy} = 0 \\ z(y,0) = 0 \; \text{(Initial)}\\ z(0,s) = 0, \;\;\; z(1,s)  = 1  \;\text{(Boundary)}\end{array}$$Notice that $z_s = z_{yy}$. Thus the solution should have matching first order time derivative and second order space derivatives (scaled by some constants that were handled in the above section). To begin solving the problem, let us determine the steady state solution that satisfies the equation $z_{yy} = 0$ with the boundary conditions. Since some derivatives must match up, we consider an exponential function to be our solution. We write $z^{St}$ to be our trial answer. A computation shows: $$z^{St}(y) = y$$

