In a conductor, one or more electrons per atom are free to move around. For physics, we will generally assume that we are working with perfect conductors where all electrons can move freely. 

>[!definition|*] Basic Properties of Conductors
>In a conductor, the following hold:
>- **$E = 0$ inside a conductor**: Suppose we put a field next to a conductor, then the electrons will move, creating [[Induced Charges]], which will work towards cancelling the field. In an almost instantaneous amount of time, the electrons move in such a way to cancel the field. Thus $E= 0$ inside a conductor.
>-  **$\rho = 0$ inside a conductor**: This follows from [[Gauss’s Law]] and the above fact.
>-  **Any net charge resides on the surface**: Since the field is $0$ within, the only place left for charges to accumulate is on the surface of the conductor.
>-  **E is perpendicular to the surface, just outside a conductor**: Otherwise, any non-perpendicular component would be killed off by the induced electric field produced by the movement of electrons inside the conductor.

But why does the charge on the conductor flow to the surface? Since $W$ in electrostatics is a measure of energy, just like any other form of energy, the charges seek to place themselves in the conductor in such a way to minimize $W$. We note that $W$ of a charged spherical shell is less than $W$ of a charged sphere. Thus the surface area proves to be the best place to minimize $W$.

##### Exercises
>[!exercise|1]
>A metal sphere of radius $R$, carrying charge $q$, is surrounded by a thick concentric metal shell (inner radius $a$, outer radius $b$: $a,b > R$). The shell carries no net charge. Answer the following: 
>1. Find the surface charge density $\sigma$ at $R$, at $a$, and at $b$.
>2. Find the [[Electric Potential]] at the center, using infinity as the reference point.
>3. Now the outer surface is touched to a grounding wire, which drains off charge and lowers its potential to zero (same as at infinity). How do your answers to part $1$ and $2$ change?
>
>>[!claim|*]- Solution
>>**Part 1**: Here we note that the metal sphere has a positive charge $+q$. However, the electrons and protons inside the metal shell with no net charge will move in response to this positive charge. The electrons will move towards the surface of $a$ and the protons towards the surface of $b$. With this, the charge $+q$ in the metal sphere will move towards the surface of the sphere. This is why it is appropriate to talk about $\sigma$ instead of $\rho$. 
>>Now recall $q = \sigma \cdot A$. With this: $$\sigma_R = \frac{q}{4 \pi R^2}, \; \; \sigma_a = \frac{-q}{4\pi a^2}, \; \; \sigma_b= \frac{q}{4 \pi b^2}$$
>>**Part 2**: We use the standard formula: $$V = - \int_\infty^0 E \cdot dl$$Now we will obviously need to break up our integral: $$V = -\int_\infty^b E_1 dr - \int_b^a E_2 dr - \int_a^R E_3 dr - \int_R^0 E_4 dr$$Now we note that there is indeed a field $E_1$ that is produced as the surface charge lies on $b$ (this can easily be seen by applying [[Gauss’s Law]]).  Since the concentric metal shell has no net charge, then $E_2$ must be $0$ (again, use Gauss’s Law). $E_3$ must be non-zero by Gauss’s Law since the charge lies on the surface of the sphere. Finally, $E_4$ is $0$ as the charge lies on the surface. Thus Gauss’s Law would give $0$. Skipping the calculations for $E$ (which should be trivial) nets us: $$V = -\int_\infty^b \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} dr - \int_a^R \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} dr = - \frac{q}{4 \pi \epsilon_0}[\int_\infty^b \frac{dr}{r^2} + \int_a^R \frac{dr}{r^2}$$Solving this nets: $$V = \frac{q}{4 \pi \epsilon_0}[\frac{1}{b}+\frac{1}{R} - \frac{1}{a}]$$Which is the answer.
>>
>>**Part 3**: If we touch a grounding wire to the outside part of the metal shell, then the surface charge that resides on $\sigma_b$ would be drained. $\sigma_a$ would remain unaffected as the charge on the solid sphere would keep them on the surface of $a$. Thus: $$\sigma_b \rightarrow 0$$Now in terms of the potential, $E_1$ will actually go to $0$ as the surface charge $\sigma_b$ disappears, thus: $$V = \frac{q}{4 \pi \epsilon_0}[\frac{1}{R} - \frac{1}{a}]$$I would like to end this off by noting the idea behind finding $E_1$. Since our system acts like a conductor, the inside field is hidden from us. All that is left is the outside surface charge $\sigma_b$. Thus, when $\sigma_b$ was not being drained, there was a surface charge that Gauss’s Law could take advantage of to get a non-zero $E_1$. But when $\sigma_b \rightarrow 0$, there is no more “visible” charge and so the electric field $E_1$ is zero.

