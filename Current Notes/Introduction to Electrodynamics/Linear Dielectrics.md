---
aliases:
  - Electric Susceptibility
---

>[!rmk|*]- On the topic of Polarization and Linear Dielectrics
>For [[Polarization]], it is proportional to the field, provided $E$ is not too strong:
>$$P = \epsilon_0 \mathcal X_e E$$Where $\mathcal X_e$ is the electric susceptibility of the medium (constant that depends on many factors). Materials that obey the above equation are called linear [[Dielectrics]].
> - Note that $E$ in the equation is the total field, which is not at all easy to find directly.

To begin solving, the simplest approach is to find $D$ (in cases where we can): $$D = \epsilon_0 E + P = \epsilon_0 E + \epsilon_0 \mathcal X_e E = \epsilon_0(1+\mathcal X_e) E$$Hence $D$ is also proportional to $E$: $$D = \epsilon E$$where $\epsilon$ is the [[Permittivity]] of the material.

>[!rmk|*]
>Note that the dielectric constant $\epsilon_r$ is given by: $$\epsilon_r \equiv 1 + \mathcal X_e = \frac{\epsilon}{\epsilon_0}$$

>[!exm|1]
>A metal sphere of radius $a$ carries a charge $Q$. It is surrounded, out to radius $b$, by a linear dielectric material of permittivity $\epsilon$. Find the potential at the center (relative to infinity).
>>[!claim|*]- Solution
>>To compute $V$, we need $E$. To find $E$, we might calculate $P$, but we can’t do that unless we know $E$. What we do know is the free charge $Q$ and fortunately the arrangement is spherically symmetric, so we calculate $D$ using [[Gauss’s Law in Dielectrics]]. We know $D$: $$D = \frac{Q}{4 \pi r^2} \; \hat r \; \; \text{for all points} \; r > a$$(Inside the metal sphere, of course, $E = P = D = 0$). With $D$, it is trivial to obtain $E$: $$E = \begin{cases} \frac{Q}{4 \pi \epsilon r^2} & a < r < b\\ \frac{Q}{4 \pi \epsilon_0 r^2}  & r > b \end{cases}$$Then using the standard formula for the [[Electric Potential]], we have: $$V = -\int_\infty^0 E \cdot dl = -\int_\infty^b(r>b)\;dr -\int_b^a(a<r<b)\;dr-\int_a^0 0\;dr$$Giving us: $$V = \frac{Q}{4 \pi}\left(\frac{1}{\epsilon_0 b} + \frac{1}{\epsilon a} + \frac{1}{\epsilon b} \right) $$

>[!exm|2]
>A parallel-plate capacitor is filled with insulating material of dielectric constant $\epsilon_r$. What effect does this have on its capacitance?
>>[!claim|*]- Solution
>>Since the field is confined to the space between the plates, the dielectric will reduce $E$, and hence also the potential difference $V$, by a factor of $\frac{1}{\epsilon_r}$. Accordingly, the capacitance $C = \frac{Q}{V}$ is increased by a factor of the dielectric constant. Thus: $$C = \epsilon_r C_{vac}$$This is, in fact, a common way to beef up a capacitor.

>[!exm|3]
>The space between the plates of a parallel-plate capacitor is filled with two slabs of linear dielectric material. Each slab has thickness $a$, so the total distance between the plates is $2a$. Slab $1$ has a dielectric constant of $2$, 
