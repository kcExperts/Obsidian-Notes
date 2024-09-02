
>[!def] Nonlinear PDE
>If $F$ is not [[Linear PDE|Linear]] with respect to $u$ and all its derivatives, then it is a nonlinear PDE.

There exists multiple distinctions between nonlinear PDE’s

>[!def] Semilinear
>$F$ is said to be semilinear if $F$ is nonlinear with respect to $u$ but is linear with respect to all its derivatives.

>[!def|] Quasi-linear
>$F$ is said to be quasi-linear if $F$ is linear with respect to the highest order derivatives of $u$.

>[!def] Fully nonlinear 
>$F$ is said to be fully nonlinear if $F$ is nonlinear with respect to the highest order derivatives of $u$.

>[!exm|*]- Examples of nonlinear PDE’s
>Consider the following:
>1. The following is **quasi-linear**: $$\frac{\partial^2 u}{\partial x_1^2} + u \frac{\partial^2 u}{\partial x_2^2} = 0$$
>2. The following is **semilinear**: $$\frac{\partial u}{\partial x_1}u^2 + \frac{\partial u}{\partial x_2} = x_3$$
>3. The following is **fully nonlinear**: $$\frac{\partial u}{\partial x_1} + \left(  \frac{\partial u}{\partial x_2} \right)^2 = 0$$In this case, even though the partial with respect to $x_1$ is linear, the partial of $x_2$ is the same order as $x_1$ and is nonlinear, hence the entire equation is fully nonlinear.

The following are important nonlinear PDE’s:
- [[Burger’s Equation]]
- [[Fisher’s Equation]]
- [[Porous Medium Equation]]
- [[Minimal Surface Equation]]
- [[Eikonal Equation]]



