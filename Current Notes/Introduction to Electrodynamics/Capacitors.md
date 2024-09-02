---
aliases:
  - Capacitor
---
Suppose we have two conductors, one with $+q$ and the other with $-q$. Then the system together makes up a capacitor. The field is proportional to the charge $q$ and $V$.

>[!definition|*] Capacitance
>Let $C$ be capacitance, a purely geometrical quantity in Farads (F): $$C \equiv \frac{Q}{V}$$

>[!definition|*] Work to Charge a Capacitor
>The work needed to charge a capacitor is given by: $$W = \frac12 CV^2$$

>[!def|*] Potential Difference
>The potential difference of capacitors is defined as: $$V = V_+ - V_- = - \int_{(-)}^{(+)} E \cdot dl$$

>[!rmk|*] Potential Difference between $2$ parallel plates
>The potential difference between $2$ parallel plates is given by: $$V = Ed$$
##### Examples
>[!exm|1]
>Find the capacitance of a parallel-plate capacitor consisting of two metal surfaces of area $A$ held a distance $d$ apart.
>>[!claim|*]- Solution
>>Since this is a capacitor, we will (rather arbitrarily) place $+Q$ on the top plate and $-Q$ on the bottom plate. They will spread out uniformly (assuming $A$ is large and $d$ is small enough). The surface charge density is given by $\sigma = \frac{Q}{A}$. Now, recall that the electric field for sufficiently large plates does not decay with distance. Thus, the fields outside the plates cancel and the field inside is given by $E = \frac{Q}{\epsilon_0 A}$ (see Example 4 in [[Gauss’s Law]]). Thus the potential difference between the plates is: $$V =Ed = \frac{Q}{\epsilon_0A}d$$Which ONLY holds for parallel plates (which is a whole other bag of worms). Thus the capacitance is: $$C = \frac{Q}{V} = \frac{\epsilon_0 A}{d} $$As desired.




