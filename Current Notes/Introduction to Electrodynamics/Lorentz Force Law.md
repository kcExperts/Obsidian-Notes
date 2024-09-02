---
aliases:
  - Magnetic Force
---

>[!def|*] Lorentz Force Law
>The magnetic force on a charge $Q$, moving with velocity $v$ in a magnetic field $B$ is given by: $$F_{mag} = Q(v \times B)$$
>In the presence of an [[Electric Field]] $E$, we have: $$F = Q[E + (v \times B)]$$
>See [[Current]] for the Force Law in terms of $I$.

It would be worthwhile to examine the Lorentz Force Law
>[!exm|1] Cyclotron Motion
> The typical motion of a charged particle in a field is circular. The magnetic force provides the centripetal acceleration. Suppose a uniform magnetic field $B$ points into the page while a charge $Q$ moves counterclockwise around (in the $2D$ plane) with a speed $v$ and radius $R$. By the right hand rule, the magnetic force points inwards (thumb is $v$ and hand is $B$, the curled hand will then be $F$) and has a fixed magnitude $QvB$: $$QvB = m \frac{v^2}{R}$$Giving us the cyclotron formula: $$p = QBR = mv$$Where $m$ is the mass of the particle and $p$ its momentum. The cyclotron frequency is given by: $$\omega \equiv \frac{QB}{m}$$

An implication of the Lorentz force law deserves attention:
>[!rmk|*] Magnetic Fields do no Work
>

##### Exercises
>[!exercise|1]
>A particle of charge $q$ enters a region of uniform magnetic field $B$ (pointing into the page). The field deflects the particle a distance $d$ above the original line of flight, as shown below. Is the charge positive or negative? In terms of $a,d,B \; \land \; q$, find the momentum of the particle.
>![[Pasted image 20240319152433.png]]
>>[!claim|*]- Solution
>>**Part 1**: 
>>We want to determine the sign of the charge $q$. To do so, let us consider instead the same deviation except only in the presence of an [[Electric Field]] $E$. From this, we have $F = qE$. If $E$ is in the upwards direction, then $q$ must be positive or else $F$ would be negative. Now consider the magnetic field $B$. It points into the page and so by the RHR, the force points upwards. Hence $q$ must be $+$ or else $F = q(v \times B)$ would give a downwards force. $$q \; \text{is positive}$$
>>**Part 2**:
>>When the particle enters the magnetic field, it will begin to move in a cyclotron motion. However, it leave the field before it can start rotating. Now: $$p = qBR$$All we need do is find $R$. This essentially boils down to solving: ![[Pasted image 20240319153408.png]]
>>To do so, apply the [[Pythagorean Theorem]]: $$\begin{array}{ccc} (R-d)^2 + a^2 = R^2  \\ R^2 - 2dR +d^2 + a^2 = R^2 \\ 2dR = d^2 + a^2 \\ R = \frac{d^2+a^2}{2d}\end{array}$$Hence: $$p= qB \left( \frac{d^2+a^2}{2d}\right) $$Which is what we wanted.




