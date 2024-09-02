Following from our calculations done to find the [[Flux (Phys)]] for a point charge. We consider what would happen if we had many charges scattered around. By the [[Principle of Superposition]], we have that:$$\oint E\cdot da = \sum_{i=1}^n(\oint E_i\cdot da) = \sum_{i=1}^n(\frac{1}{\epsilon_0}q_i)$$We note that this result holds for any closed surface (since $E$ is [[Path Independent]]). Then writing all the charges $q$ as $Q_{enc}$ nets us:

>[!definition|*] Gauss’s Law
>There are two expressions for Gauss’s Law. The first one:$$\oint E\cdot da = \frac{1}{\epsilon_0}Q_{enc}$$And the second one, in differential form, is given by: $$\nabla \cdot E = \frac{1}{\epsilon_0}\rho$$
>>[!rmk|*]- Derivation of the Differential Form
>>Since we do a surface integral over a closed surface, we can use the [[Divergence Theorem]]: $$\oint_\mathcal{S}E\cdot da = \int_\mathcal{V}(\nabla \cdot E)\;dv$$Substituting the left side and rewriting $Q_{enc}$ in terms of $\rho$, we have: $$\int_\mathcal{V} (\frac{\rho}{\epsilon_0})\;dv = \int_\mathcal{V}(\nabla \cdot E)\; dv  $$Since this holds for any volume, the integrands must be equal, thus: $$\nabla \cdot E = \frac{1}{\epsilon_0}\rho$$Which is what we were after.

##### Applications of Gauss’s Law
Gauss’s law is extremely powerful when symmetry permits. In total, there are three cases where we would apply Gauss’s Law:
- Spherical Symmetry: Make the gaussian surface a concentric sphere.
- Cylindrical Symmetry: Make the gaussian surface a coaxial cylinder.
- Plane symmetry: Use a pillbox (cylinder with small height and radius) that straddles the surface.

>[!exm|*] Gaussian Surfaces
>Here you can find images representing how a gaussian should be done depending on the symmetry.
>>[!exm|*]- Spherical Symmetry
>>![[Pasted image 20240203181607.png]]
>
>>[!exm|*]- Cylindrical Symmetry
>>![[Pasted image 20240203181816.png]]
>
>>[!exm|*]- Plane Symmetry
>>![[Pasted image 20240203181928.png]]

##### Examples
>[!exm] Spherical Case
>Find the electric field outside a uniformly charged solid sphere of radius R and total charge $q$.
>>[!claim|*]- Solution
>>Consider a surface at a distance $r$ away: $r > R$. Thus we apply Gauss’s Law: $$\oint E \cdot da = \frac{1}{\epsilon_0}Q_{enc}$$Since our sphere is enclosed, $Q_{enc} = q$. But we still have the electric field $E$ that is underneath the integral. To fix this, we must note that $E$ points radially outwards. If we were to rotate the solid sphere, $E$ would remain constant and since our Gaussian Surface is also a concentric sphere, we can bring $E$ out of the integral. We note that the surface area of a sphere is $4\pi r^2$. Thus: $$E4\pi r^2 = \frac{1}{\epsilon_0}q \implies E = \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} \hat{r}$$Which is the answer we are looking for. 

>[!exm] Cylindrical Case
>A long cylinder carries $\rho = ks$ (proportional from distance to axis) for some constant $k$. Find the electric field inside the cylinder.
>>[!claim|*]- Solution
>>To solve this, we construct a cylindrical gaussian surface of radius $s$ and of length $l$ (where the end of one side of the cylinder lies exactly at the origin) We now recall Gauss’s Law: $$\oint E \cdot da = \frac{1}{\epsilon_0}Q_{enc}$$Here we have that $Q_{enc}$ varies based on the distance from the center of the cylinder. Thus we need to integrate over the charge per unit volume to get our $Q_{enc}$. Recalling $\rho = ks$, we have: $$Q_{enc} = \int_\mathcal{V} ks \; dv = \int_0^{2\pi} \int_0^l \int_0^s ks \;dsdzd\phi = \frac{2}{3}\pi ls^3k$$Now, for $E$, we have radial symmetry again assuming that our length $l$ is very big (but it makes for good approximations). Thus we can pull $E$ out of the integral and in the end write the answer in terms of $\hat{s}$: $$E \oint da = \frac{1}{\epsilon_0}(\frac{2}{3}\pi ls^3k) \implies E2\pi ls = \frac{2}{3}\pi ls^3 k$$Simplifying gets us:$$E = \frac{s^2k}{3\epsilon_0}\hat{s}$$Which is what we were looking for.

>[!exm] Pillbox Case
>An infinite plane carries surface charge $\sigma$. Find its electric field $E$.
>>[!claim|*]- Solution
>>We construct a gaussian pillbox (cylinder) such that the two faces each lie on opposite sides of the plane (**see Plane Symmetry in the Examples above**). We consider our pillbox to have negligeable height. Thus the electric field lines only cross the two surfaces of the pillbox that each have an area $A$. Recall:$$\oint E \cdot da = \frac{1}{\epsilon_0}Q_{enc}$$Now, $Q_{enc}$ is the charge in the given area. We have $\sigma$, the charge per unit length and we have $A$, the area of the surface. Thus $Q_{enc} = \sigma A$. Now for $E$, we have planar symmetry as the field lines will only go in the $\hat{n}$ direction (perpendicular to the surface $A$). Thus $E$ is constant and we can pull it out of the integral: $$E\oint  da = \frac{\sigma}{\epsilon_0}A$$Now we need to handle $\oint da$. Since our pillbox has negligeable height, it only has two surfaces each on opposite sides of the pillbox. Thus the surface area integral will return $2A$. This gives us:  $$E2A = \frac{\sigma}{\epsilon_0}A$$Which we can then simplify into: $$E = \frac{\sigma}{2\epsilon_0} \; \hat{n} $$Which is the answer we were after. Notice the elegance of this result; that the electric field $E$ does not decrease no matter how far away we move from the plane.

>[!exm] Two Infinite Planes of Opposite Charges
>Two infinite parallel planes carry equal but opposite charge densities $\pm \sigma$. We put the plane of $+\sigma$ to the left and the other plane to the right. Find the field in each of the regions described below:
>- To the left of both planes
>- In the middle of both planes
>- To the right of both planes
>
>>[!claim|*]- Solution
>> Recall from the [[Electric Field]] section that positive charges repel field lines (thus $E$ points away) and negative charges attract field lines (thus $E$ points towards). Consider the following image which describes our situation:
>> ![[Pasted image 20240203190655.png]]
>> In the previous problem, we found that the electric field $E$ of a plane does not depend on the distance from the plane. Thus, we use symmetry to solve the problem:
>> - To the left of both planes: $E = 0$
>> - In the middle of both planes: $E = \frac{\sigma}{\epsilon_0}$
>> - To the right of both planes: $E = 0$

##### Exercises
>[!exercise|1]
>Use Gauss’s Law to find the electric field inside and outside a spherical shell of radius $R$ that carries a uniform surface charge density $\sigma$. 
>>[!claim]- Solution
>>We will use Gauss’s Law in integral form as we are working with a spherical shell. 
>>
>>**Inside**: Gauss’s Law states: $$\int E \cdot da = \frac{1}{\epsilon_0}Q_{enc}$$Taking $r < R$, we have that $Q_{enc} = 0$ as it is a spherical shell. Thus: $$E_{in} = 0$$
>>
>>**Outside**: Suppose $r > R$. Since there is an enclosed charge, we need to take the integral. In this case, we take the surface integral of the sphere: $$E\int_0^{2\pi} \int_0^\pi r^2 sin\: \theta \; d\theta d\phi = \frac{1}{\epsilon_0}Q_{enc}$$Here we note that $Q_{enc}$ is the surface area of the sphere times the charge density. Thus $Q_{enc} = 4\pi R^2 \sigma$. $E$ was brought out of the integral as the symmetry of the shape makes $E$ only change as $\vec r$ increases. The integral is also just the surface area of our gaussian sphere, thus is it $4 \pi r^2$ Thus: $$E 4 \pi r^2 = \frac{4 \pi R^2 \sigma}{\epsilon_0}$$Isolating for $E$ gives us: $$E_{out} = \frac{R^2 \sigma}{\epsilon_0 r^2} \hat r$$ 

>[!exercise|2]
>A thick spherical shell carries charge density: $$\rho = \frac{k}{r^2} \; \; (a \le r\ \le b)$$Find the electric field in the regions $(r < a) \; \land \; (a < r < b)\; \land \; (r > b)$.
>>[!claim|*]- Solution
>>$r<a$ case: Since $\rho$ is defined only between $(a \le r \le b)$, we must have that no charge density is inside the sphere for $r < a$. Thus $Q_{enc} = 0$. This implies: $$E_{r < a} = 0$$
>>$a< r< b$ case: There will definitely be an enclosed charge here. Thus we must integrate properly. Skipping the details (which should be fairly obvious by now), we have: $$E\int_0^{2\pi} \int_0^\pi r^2 sin\: \theta \; d\theta d\phi = \frac{1}{\epsilon_0} \int_0^{2\pi} \int_0^\pi \int_a^r \frac{k}{r^2} \;r^2 sin\theta \;\: drd\theta d\phi$$Where $E$ is outside as it increases radially (hence when we rotate the shell, $E$ does not change). Again, the left-side integral is simply the surface area of our gaussian surface, which gives $4\pi r^2$. The right-side integral is finding the volume charge enclosed by our gaussian surface. Overall, we get: $$E4\pi r^2 = \frac{1}{\epsilon_0} k(r-a)4\pi$$Isolating for $E$ nets us: $$E_{a < r< b} = \frac{k(r-a)}{r^2 \epsilon_0} \hat r$$$r > b$ case: We could start from Gauss’s Law and get the correct answer. However, to save time, if $r > b$, we can use our previous expression for $E$ and replace the $r$ in $(r-a)$ with $b$ as that is where the shell ends. Thus: $$E4\pi r^2 = \frac{1}{\epsilon_0} k(b-a)4\pi$$Isolating for $E$ nets us: $$E_{r>b} = \frac{k(b-a)}{r^2 \epsilon_0} \hat r$$Notice how we used our previous result and essentially changed the $dr$ bound of integration netting us what we needed. Such tricks can be used in future problems.
>>

>[!exercise|3]
>A long coaxial cable carries a uniform volume charge density $\rho$ on the inner cylinder (radius $a$), and a uniform surface charge density $\sigma$ on the outer cylindrical shell (radius $b$). This surface charge is negative and is of just the right magnitude so that the cable as a whole is electrically neutral. Find the electric field in each of the three regions:
>- Inside the inner cylinder $(s < a)$
>- Between the cylinders $(a<s<b)$
>- Outside the cable $(s > b)$
>
>>[!claim|*]- Solution
>>$s < a$ case: The inner cylinder has charge density $\rho$ with radius $a$. Thus, setting Gauss’s Law (use surface and volume cylinder formula): $$E\int_0^{2\pi}sl \; d\theta = \frac{1}{\epsilon_0}\int_0^{2\pi} \int_0^s \rho sl \; ds d\theta$$Solving the integrals nets us: $$E 2\pi sl = \frac{1}{\epsilon_0}2 \pi \frac{s^2}{2}l \rho$$Rearranging for $E$ nets:$$E_{s<a} = \frac{s \rho}{2\epsilon_0} \hat s$$$a<s<b$ case: Similar to the previous exercise, we will replace the bound in the left-side integral with $a$ instead of $s$ as our surface surrounds the entirety of the inner cylinder: $$E 2\pi sl = \frac{1}{\epsilon_0}2 \pi \frac{a^2}{2}l \rho$$Thus: $$E_{a<s<b} = \frac{a^2\rho}{2s\epsilon_0} \hat s$$$s > b$ case: By definition of the problem, both the outer and inner cylinders cancel out the field for it to remain electrically neutral. Thus: $$E_{s>b} = 0$$

>[!exercise|4]
>Use Gauss’s Law to find the electric field inside a uniformly charged solid sphere (charge density $\rho$). 
>>[!claim|*]- Solution
>>We use the integral form of Gauss’s Law: $$\oint E \cdot da = \frac{1}{\epsilon_0} Q_{enc}$$Now to find $Q_{enc}$. Recall: $$\rho = \frac{Q_{enc}}{V} \implies Q_{enc} = \rho V \implies Q_{enc} = \frac{4}{3}\pi r^3 \rho$$Taking our gaussian surface to be inside the sphere: $$4 \pi r^2 E_{in} = \frac{4\pi r^3 \rho}{3\epsilon_0}$$Hence: $$E_{in} = \frac{1}{3\epsilon_0} \rho r \; \hat r$$Now suppose we wanted to express this in terms of the total charge $Q_t$ of the sphere. Then: $$\rho = \frac{Q_t}{V} = \frac{Q_t}{\frac{4}{3}\pi R^3} \implies \rho  =\frac{3Q_t}{4 \pi R^3}$$Substituting in nets: $$E_{in} = \frac{Q_t}{4 \pi R^3 \epsilon_0} r \; \hat r$$Which is what we wanted.










