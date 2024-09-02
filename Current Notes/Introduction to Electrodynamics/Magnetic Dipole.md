The magnetic monopole term is always $0$. This reflects the fact that no magnetic monopoles exist in nature (as seen by $\nabla \cdot B - 0$). 

>[!def|*] Magnetic Dipole Moment
>The magnetic dipole moment $m$ is defined as: $$m \equiv I \int da = Ia$$where $a$ is the “vector area” of the loop. The direction of $m$ is given by the “curled” RHR. Hence make your thumb face the direction of the current and your hand facing the enclosed area. The curl of your hand will be the direction.

>[!def|*] Magnetic Dipole
>We have: $$A_{dip}(r) = \frac{\mu_0}{4\pi} \frac{m \times \hat r}{r^2}$$

>[!rmk|*]- Pure and Physical Magnetic Dipoles
![[Pasted image 20240320191355.png]]

The pure dipole only has a use when in the $m = Ia$, we crank $I$ to infinity to make up for the infinitesimally small loop. The magnetic field of our pure dipole is given by: $$B_{dip}(r) = \nabla \times A = \frac{\mu_0 m}{4\pi r^3}(2 cos \theta \; \hat r + sin \theta \; \hat \theta)$$
>[!exm|1]
>Find the magnetic dipole moment of the “bookend-shaped” loop shown below. All sides have length $w$, and it carries a current $I$.
>![[Pasted image 20240320191923.png]]
>Hint: Consider the problem as two separate loops.
>>[!claim|*]- Solution
>>We can consider this problem to be a superposition of two plane square loops.
>>![[Pasted image 20240320192402.png]]
>>Now the “extra” side will just cancel out as the currents will go opposite ways. Now the magnetic dipole moment is essentially the area of these two square planes. For the vertical one, we have: $$m = I a = Iw^2 \;\hat y$$For the horizontal one: $$m = Ia = Iw^2 \; \hat z$$Hence the net magnetic dipole moment is: $$m = Iw^2 \; \hat y + Iw^2 \;\hat z = Iw^2(\hat y + \hat z)$$

