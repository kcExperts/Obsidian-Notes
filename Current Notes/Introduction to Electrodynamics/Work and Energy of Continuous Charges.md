Recall that from [[Work and Energy in Electrostatics]] that for a system of point charges: $$W = \frac{1}{2} \sum_{i=1}^n q_i V(\tau_i)$$Since the amount of work taken is the amount of energy stored in the system, turning this to a continuous sum would give us what we need:

>[!definition|*] Work and Energy of Continuous Charges
>Consider a continuous charge (volume in this case), then we have: $$W = \frac{1}{2} \int_\mathcal{V} \rho V \; dv$$However, using [[Gauss’s Law]], we can rewrite this in terms of $E$: $$W = \frac{\epsilon_0}{2} \int_\mathcal{V} |E|^2 dv$$Where this integral is over all space.

##### Example
>[!exm] Energy of a Spherical Shell
>Find the energy of a uniformly charged spherical shell of total charge $q$ and radius $R$.
>>[!claim|*]- Solution
>>We have two possible methods we can use, however, we are not given $V$ and calculating $E$ for a charged spherical shell is a trivial matter, thus we use the following formula: $$W = \frac{\epsilon_0}{2} \int_\mathcal{V} E^2 dv$$Thus, all we need to find is $E$. Using [[Gauss’s Law]], we have: $$\oint E \cdot dl = \frac{1}{\epsilon_0} Q_{enc}$$We have radial symmetry and that $Q_{enc} = q$. Thus: $$E4\pi r^2 = \frac{q}{\epsilon_0} \implies E = \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} \; \hat{r} \implies E^2 = \frac{1}{(4 \pi \epsilon_0)^2} \frac{q^2}{r^4}$$
>>We recall that $E_{in} = 0$. Thus we only concern ourselves with the outside field. Recall that our definition of $W$ is over all space. We can now substitute $E^2$ into $W$:$$W = \frac{\epsilon_0}{2}\int \frac{1}{(4 \pi \epsilon_0)^2} \frac{q^2}{r^4} dv = \frac{q^2}{2(4\pi)^2\epsilon_0} \int_0^{2\pi} \int_0^\pi \int_R^\infty\frac{sin\theta}{r^2}\;dr d\theta d\phi$$Which gives: $$W = \frac{1}{8\pi\epsilon_0} \frac{q^2}{R}$$
>>Which is what we were looking for. 
>

##### Exercises
>[!exercise|1]
>Find the energy stored in a uniformly charged solid sphere of radius $R$ and with charge $q$. 
>>[!claim|*]- Solution
>>Clearly, we would have a much easier time finding $E$ than $V$, thus, by [[Gauss’s Law]], we have: $$\oint E \cdot da = \frac{Q_{enc}}{\epsilon_0}$$We first find $Q_{enc}$. To do so, recall $Q_{enc} = \rho \cdot \mathcal V_{enc}$. Now $\rho = \frac{q}{\frac{4 \pi R^3}{3}}$. Isolating: $$Q_{enc} = \frac{q}{\frac{4 \pi R^3}{3}} \cdot \frac{4 \pi r^3}{3} = q(\frac{r}{R})^3$$Now we can apply Gauss’s Law. As always, we take advantage of the spherical symmetry: $$E 4 \pi r^2 = \frac{qr^3}{R^3 \epsilon_0}$$Isolating for $E$ nets us: $$E_{in} = \frac{qr}{4 \pi \epsilon_0R^3} \hat r$$Thankfully, the outside [[Electric Field]] is easy to find: $$\oint E \cdot da = \frac{Q_{enc}}{\epsilon_0} \implies E 4 \pi r^2 = \frac{q}{\epsilon_0}$$Which gives: $$E_{out} = \frac{q}{4 \pi r^2 \epsilon_0} \hat r$$
>>With this, we may now calculate the energy in the system. We use (and its obvious why I calculated $E$): $$W = \frac{\epsilon_0}{2} \int_\mathcal{V} |E|^2 dv$$We need to separate our integral as the field changes (and remember that we are integrating in [[Spherical Coordinates in Physics]]), thus: $$W = \frac{\epsilon_0}{2}[ \int_0^R \frac{q^2r^2}{4^2\pi^2\epsilon_0^2R^6} \; 4 \pi r^2dr + \int_R^\infty \frac{q^2}{4^2 \pi^2 r^4 \epsilon_0^2} \; 4\pi r^2 dr]$$(The above result does skip some steps, notably, I already integrated away the $\theta \; \land \; \phi$ terms). Simplifying: $$W = \frac{q^2}{8 \pi \epsilon_0}[ \int_0^R \frac{r^4dr}{R^6} + \int_R^\infty \frac{dr}{r^2}] = \frac{q^2}{8 \pi \epsilon_0}[\frac{1}{5R} + \frac{1}{R}] = \frac{q^2}{8\pi \epsilon_0}\frac{6}{5R}$$Thus: $$W = \frac{3q^2}{20 \pi R \epsilon_0}$$Which is the correct answer.



