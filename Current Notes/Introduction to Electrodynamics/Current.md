---
aliases:
  - Ampere
---

>[!def|*] Current
>The current in a wide is the charge per unit time passing a given point. By definition:
>- Positive charges moving to the right count the same as negative charges moving to the left.
>
>From here on out, it will be assumed that positive charges do the moving.
>
>Current is measured in coulombs-per-second, or amperes (A): $$1 A = 1 \frac{C}{s}$$

The following gives the [[Lorentz Force Law]] in its current Form

>[!rmk|*] Calculating $F_{mag}$ using $I$
>Assuming $I$ and $dl$ point in the same direction (which is usually the case), then we write: $$F_{mag} = \int I (dl \times B)$$
>If the current is constant in magnitude (which it most likely is), then: $$F_{mag} = I \int (dl \times B)$$

>[!example|1]
>A rectangular loop of wire, supporting a mass $m$, hangs vertically with one end in a uniform magnetic field $b$, which points into the page in the shaded region shown below. For what current $I$, in the loop, would the magnetic force upwards exactly balance the gravitational force downward?
>![[Pasted image 20240319154802.png]]
>$B$ in only present in the shaded region (very important).
>>[!claim|*]- Solution
>>Clearly, the gravitational force points downwards. From this, to get $F_{mag}$ to point upwards, we need $I$ to travel clockwise (hence the part in the field, by the RHR, produces an upwards force). We also need $F_{mag} = mg = F_g$, hence: $$mg = I \int (dl \times B)$$Since $I$ is presumable constant, we pull it out of the integral and since we are given the length of the horizontal part of the loop, $dl = a$ when integrated over. Furthermore, $dl \times B$ are perpendicular, so we get $dlB$. Hence: $$mg = IaB$$Rearranging leaves us with: $$I = \frac{mg}{aB}$$You may ask yourself why the vertical components were not considered. Even if part of it was in the field, the force produced would point wither to the left or the right depending on which side you look at. That will clearly have no effect on countering the gravitational force $F_g$.





