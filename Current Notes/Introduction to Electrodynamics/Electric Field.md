Suppose we had a system of several point charges $q_1, \dots, q_n$, at distances $\tau_1, \dots, \tau_n$ from $Q$, then the total force on $Q$ by [[Coulomb’s Law]] is: $$F = F_1 + F_2+\dots = \; \frac{Q}{4 \pi \epsilon_0}(\frac{q_1}{\tau_1^2}\hat{\tau_1} \; + \;\frac{q_2}{\tau_2^2}\hat{\tau_2} \; +\dots)$$
>[!definition|*] Discrete Electric Field
>From the above expression, we can have $F = QE$ where:$$E = \frac{1}{4 \pi \epsilon_0} \sum_{i=1}^n \frac{q_i}{\tau_i^2}\hat{\tau_i}$$And thus $E$ is the electric field of the source charges. 

But most often, we find ourselves working with objects (such as lines, surfaces  or volumes) that have a continuous charge distribution. Thus, we use our trusty friend, the integral to find the electric field:

>[!definition|*] Continuous Electric Field
>Essentially, the summation sign is changed for an integral sign:$$E = \frac{1}{4 \pi \epsilon_0} \int \frac{1}{\tau^2}\hat{\tau} \; dq$$Where depending on the type of the shape, $dq$ changes:
>- Line: $dq = \lambda dl$ where $\lambda$ is the charge per unit length.
>- Surface: $dq = \sigma da$ where $\sigma$ is the charge per unit area.
>- Volume: $dq = \rho dv$ where $\rho$ is the charge per unit volume.

>[!definition|*] Charges and Electric Field Lines
>The following two facts are crucial to know:
>- Positive charges repel, thus the Field Lines point away from the charge.
>- Negative charges attract, thus the Field Lines converge towards the charge.

With this, we are, in principle, done with electrostatics. We have a formula for discrete and continuous charges, so why need anything more? It turns out that nasty integrals can appear, some being incredibly difficult to solve analytically. Thus, the rest of electrostatics will be devoted towards assembling tools and tricks to avoid this situation. 
##### Examples
>[!exercise] Finding the Discrete Electric Field
>Find the electric field a distance $z$ above the midpoint between two equal charges $q$ that are a distance $d$ apart from each other.
>>[!claim|*]- Solution
>>If we draw out the problem, by symmetry, we will see that $E_x$ cancels out. Thus the only remaining component to calculate is $E_z$.
>>Now recall our definition of E:$$E = \frac{1}{4 \pi \epsilon_0} \sum_{i=1}^n \frac{q_i}{\tau_i^2}\hat{\tau_i}$$We have two charges of equal magnitude, thus our equation becomes::$$E = \frac{2q}{4 \pi \epsilon_0} (\frac{1}{\tau_1^2}\hat{\tau_1}\;+\;\frac{1}{\tau^2_2}\hat{\tau_2})$$We need only find $\tau_1, \tau_2, \hat{\tau_1}, \hat{\tau_2}$. We use the Pythagorean theorem and recall that $\hat{\tau}$ is the normalized vector, thus:$$\tau_1 = \tau_2 = \sqrt{(\frac{d}{2})^2\;+\;(z^2)}$$For $\hat{\tau}_1 \; \land \; \hat{\tau}_2$, since we are working in $E_z$, $\vec{\tau} =(0,0,z)$, then we have:$$\hat{\tau}_1 = \hat{\tau}_2 = \frac{\vec{\tau}}{\tau} = \frac{z}{\sqrt{(\frac{d}{2})^2\;+\;(z^2)}} \; \hat{z}$$We can now combine everything to get the following:$$E = \frac{1}{4 \pi \epsilon_0}[\frac{2qz}{[(\frac{d}{2})^2\;+\;(z^2)]^{\frac{3}{2}}}]\;\hat{z}$$Which is the solution. 

>[!Exercise] (Finding the Continuous Electric Field for a Rod)
>Find the electric field a distance $z$ above the midpoint of a straight line segment of length $2L$ with uniform charge $\lambda$.
>>[!claim|*]- Solution
>>Again, we notice that the symmetry of the problem tells us that we only need to focus on the $E_z$ component. Thus:$$E = \frac{1}{4 \pi \epsilon_0} \int \frac{1}{\tau^2}\hat{\tau} \; \lambda dl$$Now, imagine we have set this rod on the $x$-axis, then $dl = dx$. Now unlike the discrete problem, we will integrate over the rod, thus for a segment $dx$ of the rod, the distance $\tau$ will change. We conclude there will be the variable $x \in \tau$. Using the Pythagorean theorem, we have:$$\tau = \sqrt{x^2\;+\;z^2}$$Similarly, for $\hat{\tau}$, we have:$$\hat{\tau} = \frac{\vec{\tau}}{\tau} = \frac{z}{\sqrt{x^2\;+\;z^2}}\; \hat{z}$$Before combining, assume we have centered our rod so that the midpoint lies at the origin (this drastically simplifies things) and that $Q$ is a distance $z$ above the midpoint. Thus our integral bounds are from $-L$ to $L$. Combining, we get:$$E = \frac{1}{4 \pi \epsilon_0} \int_{-L}^L \frac{\lambda}{(z^2+x^2)^\frac{3}{2}}\hat{z} \; dx$$The integral is left as an exercise to the reader (the usual tricks will not suffice to solve this one, a change to [[Spherical Coordinates in Physics]] will be needed). Solving it nets us:$$E = \frac{\lambda z}{4 \pi \epsilon_0} [ \frac{1}{z^2}\frac{x}{\sqrt{x^2+z^2}}]_{-L}^L \; \;\hat{z}$$Which simplifies to:$$E = \frac{1}{4 \pi \epsilon_0}  \frac{2L}{z\sqrt{L^2+z^2}} \;\hat{z}$$
>>Which is the solution.

#### Links
[[Flux (Phys)]]
[[Gauss’s Law]]
[[Electric Potential]]





