
>[!def|*] Ampère’s Law
>The equation for the curl of $B$ given by: $$\nabla \times B = \mu_0 J$$is called Ampère’s Law (in differential form). It can be converted to integral form: $$\oint B \cdot dl = \mu_0 I_{enc}$$Both of these always hold for **steady** [[Current]].
>$I_{enc}$ is the current enclosed by the Amperian loop.
>For the integral form, it is important to find the direction of $B$ before doing an Amperian loop.

>[!rmk|*]
>Following from Ampère’s Law, we have that: $$\nabla \cdot B = 0$$

One can consider this the magnetostatics version of [[Gauss’s Law]]. Let us now see examples on the power of Ampère’s Law.

>[!exm|1] Infinite Line
>Find the magnetic field a distance $s$ from a long straight wire, shown below, carrying a steady current $I$. (This is the Ampère’s Law equivalent of Example 1 in [[Biot-Savart Law]]).
>![[Pasted image 20240320170458.png]]
>>[!claim|*]- Solution
>>By the RHR, the [[Biot-Savart Law|Magnetic Field]] $B$ circles around the straight wire. By symmetry, the magnitude of $B$ is constant around an Amperian loop of radius $s$, centered on the wire. So Ampère’s Law gives: $$\oint B \cdot dl = \mu_0I_{enc} \implies B(2\pi s) = \mu_0 I$$Hence: $$B = \frac{\mu_0I}{2 \pi s}$$Which is the answer we got in the infinite case of Example $1$ (shown in Remark $1$ of [[Biot-Savart Law]]).

>[!exm|2] Infinite Surface
>Find the magnetic field of an infinite surface current: $$K = K \hat x \; \; \text{travels in +x direction}$$flowing over the $xy$ plane.
>![[Pasted image 20240320171253.png]]
>>[!claim|*]- Solution
>>We first (as always) find the direction of $B$. We note $B$ can only have a $y$ component (no $x$ as $B$ must be perpendicular to $K$, no $z$ as any filament in $y$ would be cancelled by its $-y$ piece). 
>>
>>Thus we draw our Amperian loop parallel to the $yz$ plane and extending an equal distance above and below the surface. Applying Ampère’s Law: $$\oint B \cdot dl = \mu_0 I_{enc} \implies 2Bl = \mu_0 Kl$$Where $2Bl$ comes from one contribution on the top and another from the bottom. Hence: $$B = \begin{cases} +(\mu_0/2)K \; \hat y & z < 0\\ -(\mu_0/2)K \; \hat y & z > 0\end{cases}$$

>[!exm|3] Long Solenoid
>Find the magnetic field of a very long solenoid, consisting of n closely wound turns per unit length on a cylinder of radius $R$, each carrying a steady current $I$ shown below. (The point of making the windings so close is that one can pretend each turn is circular).
>![[Pasted image 20240320182610.png]]
>>[!claim|*]- Solution
>>As always, we grapple with the existential crisis that is finding the direction of $B$. Does it have component $B_s$? No (reversing the direction of the current should make the field negative, but flipping the current is equivalent to flipping the solenoid, thus nothing should change). What about a $B_\phi$ component? Again, no (it would be constant around an Amperian loop concentric with the solenoid). Hence: $$\oint B_\phi \cdot dl = \mu_0 I_{enc}\implies B_\phi (2\pi s) = \mu_0 0$$Hence $B_\phi = 0$. The only option left here is that the magnetic field on an infinite, closely wound solenoid runs parallel to the axis. By the RHR, we expect it to run upwards. It also will certainly go to $0$ as we move far away from it (use an Amperian loop to see this). Thus, let us apply two Amperian loops: 
>>![[Pasted image 20240320182656.png]]
>>
>>**Loop 1**: This loop lies outside the solenoid, hence: $$\oint B \cdot dl = [B(a) - B(b)] L = \mu_0 I_{enc} = 0$$So: $$B(a) = B(b)$$But wait a second, we just said it does not depend on distance from the axis, hence it must be that the field outside is $0$ everywhere!
>>
>>**Loop 2**: 
>>Here it is half out and half in, hence: $$\oint B \cdot dl = BL = \mu_0 I_{enc} = \mu_0 N IL$$So: $$B = \begin{cases} \mu_0 n I \; \hat z & \text{inside the solenoid} \\ 0 & \text{outside the solenoid} \end{cases}$$Where $N$ is the number of loops (that the wire makes).

