More complicated problems in electrostatics can boiled down to simpler configurations as a consequence of the [[Uniqueness Theorems]].

>[!exm|1]
>Suppose a point charge $q$ is held a distance $d$ above an infinite grounded conducting plane. What is the [[Electric Potential]] in the region above the plane? *Hint: Solve using [[Poisson’s Equation]] and [[Boundary Conditions (Electromagnetism)]].*
>>[!claim|*]- Solution
>>We need to solve Poisson’s Equation in the region above the plane (the part with the charge $q$), thus: $$\nabla^2 V = -\frac{\rho}{\epsilon_0}$$Where the equation is subject to the following boundary conditions:
>> - $V = 0$ at $z = 0$ (As the conducting plane is grounded)
>> - $V = 0$ at $\infty$ (Far away from the charge $q$)
>>
>>By the [[Uniqueness Theorems]], solving a question with identical boundary conditions will give us our answer. As the name suggests, we will create a mirror image of the charge $q$ and study that problem instead:
>>
>>Consider a charge $+q$ at $(0,0,d)$ and a charge $-q$ at $(0,0,-d)$. From the [[Principle of Superposition]] (and a little thinking), we have that: 
>>- $V - 0$ at $z = 0$ (The potentials cancel out as they are opposite charges)
>>- $V = 0$ at $\infty$ (As in any problem involving point charges)
>>
>>Thus solving for the electric potential of this system will give us our desired $V$. This is simple enough: $$V = \frac{1}{4 \pi \epsilon_0}[ \frac{q}{\tau_+} - \frac{q}{\tau_-}]$$All that is left to do is to determine $\tau$. For simplicity, we use cartesian coordinates. Consider any point on the plane, then the distances are given by:$$\tau_+ = \sqrt{x^2+y^2+(z-d)^2}$$$$\tau_- = \sqrt{x^2+y^2+(z+d)^2}$$Note: You might be asking yourself why the $d$ in $\tau_+$ is negated. The idea is that we need to shift our “origin” up by $d$ so that the vector starts at $q$. Now remember that shifting is defined by $z-h$, thus shifting upwards by some positive $d$ leaves us with $z-d$. The same story holds for $\tau_-$ where we shift down by $-d$.
>>
>>With this, the answer to our problem is trivially given: $$V = \frac{1}{4 \pi \epsilon_0}[\frac{q}{\sqrt{x^2+y^2+(z-d)^2}} - \frac{q}{\sqrt{x^2+y^2+(z+d)^2}}]$$Which is the answer to our problem. By the Uniqueness Theorems, this is also the solution to our original problem.

>[!example|2] 
>Find the induced surface charge $\sigma$ on the conductor of Example 1.
>>[!claim|*]- Solution
>>With the potential in hand, all we need do is solve: $$\sigma = - \epsilon_0 \frac{\partial V} {\partial n}$$Since the conductor is an infinite plane in the $x,y$ direction, the normal vector $n$ points in the $z$ direction: $$ -\epsilon_0 \frac{\partial V}{\partial z}|_{z=0} = -\frac{1}{4 \pi} \frac{\partial}{\partial z}[\frac{q}{\sqrt{x^2+y^2+(z-d)^2}} - \frac{q}{\sqrt{x^2+y^2+(z+d)^2}}]$$Thus: $$\frac{\partial V} {\partial z} = \frac{1}{4 \pi \epsilon_0}[\frac{-q(z-d)}{(x^2+y^2+(z-d)^2)^\frac{3}{2}}+ \frac{q(z+d)}{(x^2+y^2+(z+d)^2)^{\frac{3}{2}}}]$$Which gives: $$\sigma(x,y) = \frac{-qd}{2\pi (x^2+y^2+d^2)^{\frac{3}{2}}}$$
>>While were at it, we may as well find the total induced charge: $$Q = \int \sigma \; da$$We integrate using polar coordinates: $$Q = \int_0^{2\pi} \int_0^\infty \frac{-qd}{2\pi (r^2+d^2)^\frac{3}{2}}r\;drd\phi = \frac{qd}{\sqrt{r^2+d^2}}|_{0}^\infty = -q$$
>>And we are done.
>>

>[!rmk|*] On the topic of the method of images
>When solving using the method of images, you cannot place your imaginary charge on the area where we wanted to calculate $V$. Doing so would change the charge density and you would be solving a completely different system.
>
>Furthermore, if the question involves multiple charges, take the mirror of those charges (do not try and make $1$ “global” charge).

##### Exercises
>[!exercise|1]
>Find the force on the charge $+q$ in the following figure:
>![[Pasted image 20240229093300.png]]
>>[!claim|*]- Solution
>> Here, by the method of images, we study the following:
>> 
>> - $q$ at $(0,0,3d)$
>> - $-2q$ at $(0,0,d)$
>> - $2q$ at $(0,0,-d)$
>> - $-q$ at $(0,0,-3d)$
>>
>>Clearly, by the [[Principle of Superposition]], $V = 0$ at $z = 0$. Since it is also a system of point charges, $V = 0$ at $\infty$. Thus our boundary conditions are satisfied. Since these are point charges, the force on $q$ at $(0,0,3d)$ is given by: $$F = qE$$Here $E$ is the total [[Electric Field]] produced by the $3$ other charges. Thus, all we need do is find the $E$: $$E = \frac{1}{4 \pi \epsilon_0}[\frac{-2q}{(2d)^2} + \frac{2q}{(4d)^2}+\frac{-q}{(6d)^2}] \; \hat z$$Where $\hat z$ comes from the fact that only the $E_z$ component concerns us. Thus: $$F = \frac{q}{4 \pi \epsilon_0} [\frac{-2q}{(2d)^2} + \frac{2q}{(4d)^2}+\frac{-q}{(6d)^2}] \; \hat z$$Which is the desired answer (you may simplify this further if you wish).


