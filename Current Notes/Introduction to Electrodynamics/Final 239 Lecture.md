
>[!exercise|5]
>A square loop of wire (side $a$) lies on a table, a distance $s$ from a very long (infinite) straight wire, which carries a current $I$. 
>1. Find the flux of $B$ through the loop.
>2. If someone now pulls the loop directly away from the wire, at speed $v$, what emf is generated in the square loop?
>3. In what direction (clockwise or counterclockwise) does the current flow around the square loop?
>4. What if the loop is instead pulled to the right at speed $v$?

>[!claim|*]- Solution
>**Part 1 and 2**:
>We recall: $$\epsilon = -\frac{\partial \Phi}{dt} \; \land \; \Phi = \int B \cdot da \; \land \; B = \hat \phi \frac{\mu_0I}{2a} \frac{1}{S}$$We have: $$\Phi = a \frac{\mu_0I}{2 \pi} \int_s^{s+a} \frac{1}{s} \: ds = \frac{a\mu_0I}{2\pi}\big(ln(s+a)-ln(s)\big)$$Now we take the negative of the time derivative: $$\frac{d}{dt} ln(s+a) = \frac{\dot s}{s+a} = \frac{v}{s+a} \; \land \; \frac{d}{dt}ln(s) = \frac{\dot s}{s} = \frac{v}{s}$$Thus: $$\epsilon = \frac{-av\mu_0I}{2\pi}\left( \frac{1}{s+a} - \frac{1}{s}\right) $$
>**Part 3**:
>By Len’s Law, the current will flow counterclockwise. 
>
>**Part 4**:
>If it is pulled to the right, there is no change in the flux. Thus there is no electromotive force (emf). 
>
>**Bonus**:
>What happens if it moves at angle $\alpha$? It will move at $\text{sin}\: \alpha$. 

>[!exercise|6]
>An infinite cylinder with radius $R$ carries a time dependent volume current: $$K(t) = K_0 \text{sin} \: (\omega t) \hat \phi$$
>1. Find the magnetic field $B(t)$, both inside and outside the cylinder, in the quasistatic approximation.
>2. Find the electric field $E(t)$, both inside and outside the cylinder, in the quasistatic approximation.
>3. Find the displacement current $J_d(t)$, both inside and outside the cylinder (the displacement current is the term added by Maxwell to Ampere’s Law). 

>[!claim|*]- Solution
>**Part 1**:
>Clearly, we know the magnetic field outside of an infinite solenoid is $0$. Hence $B_{out} = 0$. Now for the inside, we define the Amperian loop to be a rectangle going inside the solenoid: $$\int \vec B \cdot \vec dl = \int B \cdot dl = Bl = I_{tot}=\mu_0K(t)l \implies B_{in} = \hat z \; \mu_0 \vec K(t)$$
>**Part 2**:
>Recall: $$\int \vec E \cdot dl = -\frac{\partial \Phi}{\partial t}$$ And recall: $$\int \nabla \times \vec E \cdot da = -\frac{\partial }{dt} \int \vec B \cdot da$$The electric field will be wrapping around the cylinder in the same direction as $K(t)$. 
>For $S<R$: $$2 \pi sE = -\frac{d\Phi}{dt} = \pi s^2 \frac{\partial B}{dt} = -\pi s^2 \mu_0 \frac{dK}{dt} = \implies E_{in} = - \left( -\frac{s}{2}\mu_0 \: \frac{dK}{dt} \right) \: \hat \phi $$Also: $$E_{s>R} = \left( -\frac{a^2}{2s}\mu_0 \frac{dK}{dt} \right) \: \hat \phi$$
>**Part C**:
>Recall: $$\vec J_d = \epsilon_0 \frac{dE}{dt}$$and it will be parallel to the electric field. Thus: $$\epsilon_0 \mu_0 \omega^2=\frac{\omega^2}{c^2}$$

