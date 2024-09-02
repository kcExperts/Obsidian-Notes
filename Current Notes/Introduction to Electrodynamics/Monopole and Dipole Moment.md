---
aliases:
  - Dipole Moment
---

>[!def|*] Monopole Moment
>The monopole moment $Q$ is given by: $$Q = q_{total}$$Essentially, $Q$ is the total charge of the system.

>[!def|*] Dipole Moment
>The dipole moment of a distribution is given by: $$p = \int r^{'} \rho (r^{'}) d\tau^{'}$$**This is a vector quantity**
>For discrete distributions: $$p =\sum^n_{i=1} q_i \vec r_i^{'}$$Our $r^{'}$ is likely going to be our source point (so for discrete configurations, it will be the origin).
>>[!rmk]- Meaning of the variables
>![[Pasted image 20240229105824.png]]


>[!def|*] Dipole Contribution
>A dipole contributes to the potential, which is given by: $$V_{dip}(r) = \frac{1}{4 \pi \epsilon_0} \frac{p \cdot \hat r}{r^2}$$

>[!rmk|*] Physical Dipole Moment
>The physical dipole moment is given by: $$p = qd$$Where $d$ is the **vector** from the **negative** charge to the **positive** charge.

##### Exercises
>[!exercise|1]
>Four particles are placed as shown below, each at a distance $a$ from the origin. Find a simple approximate formula for the potential, valid at points **far from the origin**. 
>
>![[Pasted image 20240229111047.png]]
>>[!claim|*]- Solution
>>Let us first calculate the monopole term, as if it is non-zero, that it will serve as a good approximation (see [[Multipole Expansion]]): $$V_{mon} = \frac{1}{4 \pi \epsilon_0} \frac{3q+q-2q-2q}{r} = \frac{1}{4 \pi \epsilon_0} \frac{0}{r} = 0$$Thus we need a better approximation. We find the dipole contribution. We have a formula for the discrete dipole contribution given by: $$p =\sum_{i=1}^n q_i \vec r_i^{'}$$Now we can do any combination of pairs of dipoles for this. But the best way is to use the distance vectors that lie on the $y,z$ axes. Thus: $$p = (3qa-qa) \hat z + (-2qa -2q(-a)) \hat y = 2qa \hat z $$Thus: $$V_{dip}(r) = \frac{1}{4 \pi \epsilon_0} \frac{2qa \hat z \cdot \hat r}{r^2}$$Now: $$2qa \hat z \cdot \hat r =  2qa \:cos \theta$$Which is the result of dotting these two specific unit vectors. Thus: $$V_{dip}(r) = \frac{1}{4 \pi \epsilon_0} \frac{2qa\: cos\theta}{r^2}$$Which is the desired answer.

>[!exercise|2]
>Two point charges, $3q \; \land \; -q$, are separated by a distance $a$. For each arrangement, find the:
> - Monopole moment
> - Dipole Moment
> - Approximate Potential (spherical coordinates) at large $r$ (by including both the monopole and dipole contributions)
>
>![[Pasted image 20240229114420.png]]
>>[!claim|*]- Solution
>>**Part a**: The monopole moment is given by: $$Q = q_{total} = 2q$$
>>The dipole moment is given by: $$p =\sum^n_{i=1} q_i \vec r_i^{'} =(3qa - q(0)) \hat z = 3qa \hat z$$Which holds as $q$ at the origin has distance $0$ from the origin. Finally, the approximate potential is given by: $$V_{approx} = V_{mon} + V_{dip} = \frac{1}{4 \pi \epsilon_0}[\frac{Q}{r} + \frac{p \cdot \hat r}{r^2}] = \frac{1}{4 \pi \epsilon_0}[\frac{2q}{r} + \frac{3qa \: cos \theta}{r^2}]$$**Part b**: The monopole moment is given by: $$Q = q_{total} = 2q$$The dipole moment is given by: $$p =\sum^n_{i=1} q_i \vec r_i^{'} = (3q(0) -(-q(-a)) \hat z = qa \hat z$$Finally, the approximate potential is given by: $$V_{approx} = V_{mon} + V_{dip} = \frac{1}{4 \pi \epsilon_0}[\frac{Q}{r} + \frac{p \cdot \hat r}{r^2}] = \frac{1}{4 \pi \epsilon_0}[\frac{2q}{r} + \frac{qa \: cos\theta}{r^2}]$$
>>**Part c**: Again, the monopole term is given by: $$Q = q_{total} = 2q$$This time, the dipole moment will be with $\hat y$: $$p =\sum^n_{i=1} q_i \vec r_i^{'} = (3qa - q(0)) \hat y = 3qa \hat y$$Before we continue, it is important to note the following: $$\hat y \cdot \hat r = sin \theta \: sin \phi$$Thus: $$V_{approx} = V_{mon} + V_{dip} = \frac{1}{4 \pi \epsilon_0}[\frac{Q}{r} + \frac{p \cdot \hat r}{r^2}] = \frac{1}{4 \pi \epsilon_0}[\frac{2q}{r} + \frac{3qa \: sin \theta \: sin \phi}{r^2}]$$And that completes the question.








