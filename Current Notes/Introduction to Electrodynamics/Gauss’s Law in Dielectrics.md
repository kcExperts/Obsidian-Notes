---
aliases:
  - Electric Displacement
---
>[!rmk|*]
>Within [[Dielectrics]], the total charge density can be written: $$\rho = \rho_b + \rho_f$$
>Where $\rho_f$ is the **free charge** (consists of any charge that is not a result of polarization).
>Recall $\rho_b = - \nabla \cdot P$.

>[!def|*] Gauss’s Law in Dielectrics (Divergence Form)
>[[Gauss’s Law]] in divergence form in [[Dielectrics]] reads as: $$\epsilon_0 \nabla \cdot E =\rho = \rho_b+\rho_f = -\nabla \cdot P + \rho_f$$Where $E$ is the total field.

>[!def|*]- Electric Displacement $D$
>We define the electric displacement $D$ as: $$D \equiv \epsilon_0 E+P$$

>[!def|*] Gauss’s Law in Dielectrics (Integral Form)
>[[Gauss’s Law]] in integral form reads as: $$\oint D \cdot da = Q_{f_{enc}}$$Where $Q_{f_{enc}}$ is the total free charge enclosed in the volume.

The integral form is useful as it only mentions free charges, which is the stuff we can control. 

>[!exm|1]
>A long straight wire, carrying uniform line charge $\lambda$, is surrounded by rubber insulation out to a radius $a$. Find the electric displacement inside and the electric field outside. (Notice that the field inside cannot be determined as we are not given a value for $P$)
>>[!claim|*]- Solution
>>Since we are searching for the electric displacement, we simply use Gauss’s Law in Dielectrics (integral form): $$\oint D \cdot da = Q_{f_{enc}}$$Here $Q_{f_{enc}}$ is given by $\lambda L$ where $L$ is the length that we take our gaussian cylinder on. Similarly, we notice radial symmetry on $D$ allowing us to take it out of the integral (as we would in any cylindrical [[Gauss’s Law]] problem). Thus: $$2 \pi s L D = \lambda L \implies D = \frac{\lambda}{2 \pi s} \hat s$$which is what we were after (we cannot calculate $E$ as we do not know what $P$ is).
>>Now suppose we were looking outside the insulator. Clearly, we would have $P = 0$, hence: $$D \equiv \epsilon_0 E+P$$turns into: $$E = \frac{1}{\epsilon_0}D = \frac{\lambda}{2 \pi s \epsilon_0} \hat s$$as desired.



