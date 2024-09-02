>[!def|*] Electric Field of a (perfect) dipole
>The electric field of a dipole is given by taking the negative gradient of $V$, as defined in the [[Electric Potential]] section: $$E_{dip}(r, \theta) = \frac{p}{4 \pi \epsilon_0 r^3} (2 cos \theta \; \hat r + sin \theta \; \hat \theta)$$There is no $\phi$ contribution as $\frac{\partial V} {\partial \phi} = 0$.
>The formula can also be written in coordinate free form: $$E_{dip}(r) = \frac{1}{4 \pi \epsilon_0} \frac{1}{r^3}[3(p \cdot \hat r) \hat r -p]$$
##### Exercises
>[!exercise|1]
>A “pure” dipole $p$ is situated at the origin, pointing in the $z$ direction.
>1. What is the force on a point charge $q$ at $(a,0,0)$ (Cartesian)?
>2. What is the force on $q$ at ($0,0,a)$?
>3. How much work does it take to move $q$ from $(a,0,0)$ to $(0,0,a)$?
>
>>[!claim|*]- Solution
>>**Part 1**: To find the force, we must find the electric field $E$, thus: $$E_{dip}(r, \theta) = \frac{p}{4 \pi \epsilon_0 r^3} (2 cos \theta \; \hat r + sin \theta \; \hat \theta)$$Firstly, since our dipole is point upwards and $q$ is at $(a,0,0)$, in spherical coordinates, this amounts to it being located at $(a, \frac{\pi}{2},0)$ (We shall simply ignore the $\phi$ component as it is not required). Thus: $$E_{dip} = \frac{p}{4 \pi \epsilon_0 a^3} \hat \theta$$In cartesian, since $\hat \theta = -\hat z$, thus: $$E_{dip} = \frac{p}{4 \pi \epsilon_0 a^3} (-\hat z)$$Now $F = qE$, thus: $$F =\frac{qp}{4 \pi \epsilon_0 a^3} (-\hat z)$$Which is what we needed.
>>
>>**Part 2**: Here we must find the new [[Electric Field]]. We first note our new “coordinates” that we need for the equation are: $(a,0,0)$ Thus: $$E_{dip} = \frac{p}{4 \pi \epsilon_0 r^3} (2 cos \theta \; \hat r + sin \theta \; \hat \theta) = \frac{p}{4 \pi \epsilon_0 a^3} 2\hat r$$In cartesian form, we have $\hat r = \hat z$ in this case since our dipole was located at $(0,0,a)$ (positive $z$ axis). Thus: $$E_{dip} = \frac{2p}{4 \pi \epsilon_0 a^3} \hat z$$Thus: $$F = \frac{2qp}{4 \pi \epsilon_0 a^3} \hat z$$**Part 3**: We need to find the [[Work and Energy in Electrostatics|Work (Electrostatics)]]. We recall one definition is: $$W = -q \int_a^b E \cdot dl = q[V(0,0,a) - V(a,0,0)] = \frac{qp}{4 \pi \epsilon_0 a^2}$$Which is the answer.

