---
aliases:
  - Surface Charge
  - Force on a Conductor
  - Electrostatic Pressure
---

>[!definition|*] $\sigma \; \land \; F$ on a conductor
>Because the field inside [[Conductors]] are $0$ and the field immediately outside is perpendicular to the surface, then:$$E = \frac{\sigma}{\epsilon_0} \hat{n}$$In terms of potential, we have: $$\sigma  = -\epsilon_0 \frac{\partial V} {\partial n}$$ Where: $$\frac{\partial V} {\partial n} = \nabla V \cdot \hat{n}$$

If [[Induced Charges]] appear, then the presence of $q$ makes the conductor feel electrostatic pressure due to the forces exerted on the surface charge.

>[!definition|*] Electrostatic Pressure
>Let $P$ be the electrostatic pressure, then: $$P = \frac{\epsilon_0}{2}E^2$$Where $E = \frac{\sigma}{\epsilon_0}\hat{n}$ is the field outside the surface of the conductor.

>[!def|*] Electrostatic Force
>The force per unit area is given by: $$f = \frac{1}{2 \epsilon_0} \sigma^2 \hat n$$
##### Exercises
>[!exercise|1]
>Two large metal plates (each of area $A$) are held a small distance $d$ apart. Suppose we put a charge $Q$ on each plate; what is the electrostatic pressure on the plates?
>>[!claim|*]- Solution
>>To find the electrostatic pressure, we first need to find $E$. Firstly, $E_{in}$ (electric field in between the plates) is $0$. Why? Because the electric field produced by the charge $Q$ on each plate will travel in equal but opposing directions in between the plates. Thus they cancel out. Now we find $E_{out}$ (which will be the same for both plates).
>>To do so, we use [[Gauss’s Law]] and use a pillbox: $$\oint E \cdot da = \frac{Q_{enc}}{\epsilon_0} \implies EA = \frac{\sigma A}{\epsilon_0} \implies EA = \frac{Q}{\epsilon_0}$$
>>Where $\sigma A = Q$ as the plates are not infinite.
>>Let us pause to explain why the above result is true (left hand side of the equality). Firstly, you might think (for the gaussian surface) that I am forgetting to factor in the other area of the plate. One would expect $2A$ and not $A$. However, we just calculated that $E$ on the side that faces the other plate is $0$, thus there is no contribution from that side, meaning we do not even consider the area $A$ of said side. Anyways, rearranging: $$E_{out} =\frac{Q}{\epsilon_0A}$$Since $E_{in} = 0$, we don’t even need to factor it in the electrostatic pressure formula. Thus: $$P = \frac{\epsilon_0}{2}E^2 = \frac{\epsilon_0}{2}E_{in}^2 = \frac{\epsilon_0}{2}\frac{Q^2}{\epsilon_0^2A^2}$$Thus: $$P = \frac{Q^2}{2 \epsilon_0 A^2}$$Which is what we were after.
>>







