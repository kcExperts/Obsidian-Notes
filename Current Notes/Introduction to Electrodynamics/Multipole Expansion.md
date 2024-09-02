>[!rmk|*] Potential for any localized charge distribution
>The formula: $$V(r) = \frac{1}{4 \pi \epsilon_0} \sum_{n=0}^\infty \frac{1}{r^{(n+1)}} \int (r^{'})^nP_n(cos \;\alpha)\rho (r^{'})dv $$Where $P_n$ is the [[Legendre Polynomials]]. Note that $\alpha$ is the angle between the vector $r$ (distance away) and $r^{'}$ (distance from $r$ to $dv$). The formula gives the multipole expansion of $V$ in powers of $\frac{1}{r}$. We have that:
> - $n=0$ is the monopole contribution.
> - $n = 1$ is the dipole contribution.
> - $n = 2$ is the quadrupole contribution.
> - $n = 3$ is the octupole contribution
> 
> The monopole term is given by: $$V_{mon} = \frac{1}{4 \pi \epsilon_0} \frac{Q}{r}$$
> 
> So on so forth. The higher $n$ you use, the better the approximate. For our purposes, unless told otherwise, stop at the $n$ that gives you a non-zero answer. 

>[!exm] Problem 3.27
>A sphere of radius $R$, centered at the origin, carries charge density: $$\rho (r, \theta) = k \frac{R}{r^2}(R-2r)sin \; \theta$$Where $k$ is a constant, and $r, \theta$ are the usual [[Spherical Coordinates in Physics]]. Find the approximate potential for points on the $z-axis$, far from the sphere. 
>>[!claim|*]- Solution
>>Since $r$ is on the $z-axis$, the angle $\alpha$ is the polar angle $\theta$. Thus our formula becomes the following (we drop $r^{'}$ for simplicity): $$V(r) = \frac{1}{4 \pi \epsilon_0} \sum_{n=0}^\infty \frac{1}{r^{(n+1)}} \int (r)^nP_n(cos \;\theta)(k \frac{R}{r^2}(R-2r)sin \; \theta )\;dv$$Before we go about doing the entire formula, let us find the $n$ such that the integral is non-zero. For $n = 0$, our integral reads as (in spherical): $$\int_0^{2\pi} \int_0^\pi \int_0^R k \frac{R}{r^2}(R-2r) sin \; \theta \; (r^2sin \;\theta )\; dr d\theta d \phi$$However, the $r$ integral part is: $$\int_0^R R-2r \; dr = [Rr-r^2]_0^R = R^2 - R^2 = 0$$Thus we need to choose another $n$. As an exercise, it can be shown that $n=1$ for the $\theta$ integral is $0$. Thus we move to $n = 2$ (the quadrupole term): $$\int_0^{2\pi} \int_0^\pi \int_0^R r^2\frac{(3cos^2 \; \theta - 1)}{2}k \frac{R}{r^2}(R-2r) sin \; \theta \; (r^2sin \;\theta )\; dr d\theta d \phi$$Which simplifies to: $$\frac{k\pi^2R^5}{48}$$Putting this in the multipole expansion formula gives: $$V(r) = \frac{1}{4 \pi \epsilon_0} \frac{1}{r^2} \frac{k\pi^2R^5}{48}$$Since we are finding the approximate [[Electric Potential]] on the $z-axis$, we take $r$ to be $z$, thus: $$V(z) = \frac{1}{4 \pi \epsilon_0} \frac{k\pi^2R^5}{48r^2}$$Which is exactly what we were looking for.




