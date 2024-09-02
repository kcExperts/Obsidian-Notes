We need to transform [[Poisson’s Equation]] in such a way that if we know $\rho$, we may calculate $V$. 
>[!definition|*] Potential of a Localized Charge Distribution
>Calculating $V$ in terms of $\rho$ is given by: $$V = \frac{1}{4 \pi \epsilon_0} \int_\mathcal{V} \frac{\rho}{\tau} \;dv$$
>Note that this formula hinges on the reference point $\mathcal{O}$ being set to $\infty$. Using this formula in problems involving charges extending to infinity will have the integral diverge.
>>[!rmk|*]- Derivation
>>Since the [[Electric Potential]] $V$ follows the [[Principle of Superposition]], we may simply start by considering a single point charge located at the origin. Since $V$ is given by: $$V = -\int_\infty^r E\cdot dl$$
>>We need to find $E \cdot dl$. Since we have a point charge, we work in spherical coordinates and use the standard expression for $E$: $$E\cdot dl = \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} \;\hat{r}\cdot \hat{r}dr = \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} \;dr$$Thus our expression for $V$ becomes: $$V = -\int_\infty^r \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2}\;dr$$
>>Solving the integral leaves us with: $$V = \frac{1}{4 \pi \epsilon_0} \frac{q}{r}$$
>>Using the principle of superposition, we have:$$V = \frac{1}{4 \pi \epsilon_0} \sum_{i=1}^n \frac{q_i}{r_i}$$Turning this into a continuous charge gives us: $$V = \frac{1}{4 \pi \epsilon_0} \int \frac{1}{r} \; dq$$Now we replace $r$ for the more general symbol $\tau$. The above equation for a volume charge will then have that $dq$ = $\rho \;dv$, thus: $$V = \frac{1}{4 \pi \epsilon_0} \int_\mathcal{V} \frac{\rho}{\tau} \; dv$$
>>Which is what we were looking for.

>[!rmk|*] Important
>If you have the [[Electric Field]] $E$, it would definitely be easier to apply the standard [[Electric Potential]] formula as it works for continuous charge distributions.
#### Examples
>[!exm] Potential of a Uniformly Charged Spherical Shell
>Find the potential in a uniformly charged spherical shell of radius R.
>>[!claim|*]- Solution
>>Since this is a spherical shell, we must slightly modify the equation of $V$ in terms of $\rho$ to get it in terms of the surface charge $\sigma$. This is easily done by changing the volume integral to a surface integral: $$V = \frac{1}{4 \pi \epsilon_0} \int \frac{\sigma}{\tau} \; da$$Naturally, [[Spherical Coordinates in Physics]] would work best here to solve the problem, thus $da = r^2 sin \theta \;d\theta d\phi$. Since the shell is of radius $R$, we set $r = R$. Now the tricky part is finding $\tau$. For the sake of simplicity, let us place a point $P$ (does not correlate at all to $\mathcal{O}$) on the $z$-axis. Thus we use the law of cosines to get $\tau^2 = R^2 + z^2 -2Rz cos \theta$:
>>![[Pasted image 20240204110126.png]]
>>Giving us the following integral: $$V = \frac{1}{4 \pi \epsilon_0} \int_0^{2\pi} \int_0^\pi \frac{\sigma R^2 sin \theta}{\sqrt{R^2+z^2-2Rzcos{\theta}}}d\theta d\phi$$Solving this integral will be left to the reader but it is much easier than it appears. Pulling $\sigma$ and the $R^2$ on the numerator out of the integrand then setting $u = R^2+z^2-2Rzcos \theta$ will allow you to trivially solve the problem: $$V = \frac{R\sigma}{4 \pi \epsilon_0}[\sqrt{(R^2+z^2)}-\sqrt{(R^2-z^2)}]$$From here, we must be careful. If the point $P$ is inside the sphere, then $z < R$ and for $\sqrt{(R^2-z^2)}$, we take $R-z$ as it will give a positive number. If $z>R$, we take $z-R$ for similar reasons. Thus our potential $V$ will be a function of $z$ and will be split into: $$V(z) = \begin{cases} \frac{R^2\sigma}{\epsilon_0 z} & z > R\\ \frac{R\sigma}{\epsilon_0} & z \le R \end{cases}$$Note that this is result lines up with [[Electric Potential#Examples]] where the calculated electric field was separated into $V_{in} \; \land \; V_{out}$.

##### Exercises
>[!exercise|1] The Big One
>Find the [[Electric Potential]] on the axis of a uniformly charged solid cylinder, a distance $z$ from the center. The length of the cylinder is $L$, its radius $R$, and the charge density is $\rho$. Use the result to calculate the [[Electric Field]] at this point. (Assume that $z > \frac{L}{2}$).
>>[!claim|*]- Solution
>>The tricky part here is figuring out how to integrate over this cylinder. It is not a straightforward task. For this problem, we will integrate using:
>>![[Pasted image 20240227212239.png]]
>>Now we need to find out how to even set up this integral. To do so, focus on a slice $dx$ so small that we get the following: 
>>![[Pasted image 20240227212620.png]]
>>If we could find the [[Electric Potential]] for the above configuration and then integrate it over our cylinder, we would be well off. The configuration does not have charge density $\rho$, but instead $\sigma$. It will fix itself when integrating over the cylinder. Thus: $$V_{circ} = \frac{1}{4 \pi \epsilon_0} \int \frac{\sigma}{\tau} d\tau = \frac{1}{4 \pi \epsilon_0} \int_0^{2\pi} \int_0^R \frac{\sigma r}{\sqrt{r^2+z^2}} = \frac{1}{4 \pi \epsilon_0} \int_0^R \frac{\sigma 2\pi r}{\sqrt{r^2+z^2}}$$Let $u = r^2 + z^2 \implies du = 2r \;dr$. Ignoring the bounds for a second nets us: $$\frac{\sigma}{4 \epsilon_0}\int_{u_1}^{u_2} \frac{1}{\sqrt u} du = \frac{\sigma}{4 \epsilon_0} [2 \sqrt u]_{u_1}^{u_2} = \frac{\sigma}{2 \epsilon_0} [\sqrt{r^2+z^2}]_0^R$$Thus $$V_{circ} = \frac{\sigma}{2 \epsilon_0}[\sqrt{R^2+z^2}-z]$$With this result, we can now return to our original problem.
>>
>>To do so, we recall:
>>![[Pasted image 20240227212239.png]]
>>Which will serve to guide us. If we integrate $V_{circ}$ over the length of the cylinder, we should be well-off. We note that $\sigma$ will change to the density charge $\rho$, and that $z$ will change to $x$ (as per the diagram): $$V_c = \frac{\rho}{2 \epsilon_0} \int_{z-\frac{L}{2}}^{z+\frac{L}{2}} \sqrt{R^2 + x^2}-x \;dx$$Integrating this will give the correct answer. 















