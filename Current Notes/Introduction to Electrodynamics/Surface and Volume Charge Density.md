
>[!def|*] Surface Charge Density
>When charge flows over a surface it is called the surface charge density $K$: $$K \equiv \frac{dI}{dl_\perp}$$
>Where $K$ is the current per unit width. If the mobile charge density is $\sigma$ and its velocity $v$, then: $$K = \sigma v$$

>[!rmk|*]- What exactly is $dl_\perp$?
>It would be quicker to explain using an image:
>![[Pasted image 20240319171321.png]]

Similarly, we can define the same concept for a volume charge.
>[!def|*] Volume Current Density
>When charge flows through a three-dimensional region, we use the volume current density $J$: $$J \equiv \frac{dI}{da_\perp}$$
>Where $J$ is the current per unit area. If the mobile volume charge density is $\rho$ with velocity $v$, then: $$J = \rho v$$

>[!rmk|*]- But what exactly is $da_\perp$?
>Again, image:
>![[Pasted image 20240319171937.png]]

>[!def|*] Magnetic Force on a volume current
>It is given by: $$F_{mag} = \int (v \times B) \rho \;d\tau = \int(J \times B) \; d\tau$$

>[!def|*] Continuity Equation
>The precise mathematical statement of local charge conservation is: $$\nabla \cdot J = - \frac{\partial \rho}{\partial t}$$
##### Examples
>[!example|1]
>A current $I$ is uniformly distributed over a wire of circular cross section, with radius $a$. Find the volume current density $J$.
>![[Pasted image 20240319172026.png]]
>>[!claim|*]- Solution
>>Here we have that $I$ is uniformly distributed over the wire. Now $J$ is defined as the current per unit area. Hence it is: $$J = \frac{I}{A_\perp}$$Where $A)\perp$ is our unit area. Since we are interested in the area perpendicular to the flow, it will obviously take the shape of a circle of radius $a$. Hence: $$A_\perp = \pi a^2$$Thus: $$J = \frac{I}{\pi a^2}$$

>[!example|2]
>Following from Example $1$. Suppose the current density in the wire is proportional to the distance from the axis: $$J = ks$$(for some constant $k$). Find the total current in the wire.
>>[!claim|*]- Solution
>>Because $J$ varies with $s$, we must integrate: $$J = \frac{dI}{da_\perp}$$Separating, we get: $$\begin{array}{ccc} \int dI =\int J da_\perp  \\ I = \int (ks) (s \; ds \; d\phi)\\ I = 2\pi k \int_0^a s^2 \;ds \end{array}$$Hence: $$I = \frac{2\pi k a^3}{3}$$

##### Exercises
>[!exercise|1]
>Suppose that the magnetic field in some region has the form: $$B = kz \; \hat x$$(where $k$ is constant). Find the force on a square loop (side $a$), lying in the $yz$ plane and centered at the origin, if it carries a current $I$, flowing counterclockwise, when you look down the $x$ axis.
>>[!claim|*]- Solution
>>Essentially, we solve:
>>![[Pasted image 20240319181332.png]]
>>
>>By the RHR, if we focus on the segments running of the loop running down the $z$ axis. We can see that the field will cancel out the force produced (the $z$ component will force the field to switch mid way through cancelling out the force produced). Hence we only focus on the components parallel to the $y$ axis. 
>>
>>**Part in the + z region**:
>>By the RHR, the force vector will point upwards. Since $I$ is uniform and is perpendicular to $B$, we are left with: $$F_{mag1} = IaB = Ia \left(\frac{ka}{2} \right)  = \frac{Ika^2}{2} \; \hat z$$
>>Where we have $\frac{a}{2}$ as that part of the rod is $\frac{a}{2}$ above $z = 0$.
>>
>>**Part in the - z region**:
>>By the RHR, the force vector will also point upwards (see Image). Then: $$F_{mag2} = IaB = Ia \left(\frac{ka}{2} \right)  = \frac{Ika^2}{2} \; \hat z$$
>>**Combining**:
>>Putting both answers together, we get a net force: $$F_{mag} = F_{mag1} + F_{mag2} = Ika^2 \; \hat z$$

