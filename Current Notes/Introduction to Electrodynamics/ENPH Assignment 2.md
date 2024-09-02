
>[!exercise|1]
>A hollow ball with inner radius $a$ and outer radius $b$ is filled with dielectric material with dielectric permittivity $\epsilon$ and has volume free charge density $\rho_f$. 
>1. Find the displacement $D$ in $(r < a), (a<r<b),(r>b)$
>2. Find the electric field $E$ in all three regions.
>3. Find the polarization $P$ in all three regions.
>4. Find the volume and surface bound charges.
>5. Using volume and surface bound charges, find the electric field using Gauss’s law for electric fields.
>
>NOTE: I AM USING $\rho_f$ TO DENOTE THE VOLUME FREE CHARGE.

>[!claim|1]- Solution to Q1 P1
>To find the displacement, we use: $$\oint \vec D \cdot dl = Q_{f_{enc}}$$
>**r < a**:
>Here we clearly have $Q_{f_{enc}} = 0$ as it is a hollow ball. Hence: $$D_{r<a} = 0$$
>
>**a<r<b**:
>First, we find $Q_{f_{enc}}$ $$\rho_f = \frac{Q_{f_{enc}}}{V} \; \; \text{where} \; V = \frac{4}{3}\pi r^3 - \frac{4}{3}\pi a^3 = \frac{4}{3}\pi(r^3-a^3)$$Hence: $$Q_{f_{enc}} = \frac{4}{3}\pi(r^3-a^3) \rho_f$$Thus: $$D4 \pi r^2 =  \frac{4}{3}\pi(r^3-a^3) \rho_f \implies D_{a<r<b}= \frac{(r^3-a^3)\rho_f}{3r^2} \; \hat r$$
>**r>b**:
>Clearly: $$Q_{f_{enc}} = \frac{4}{3}\pi(b^3-a^3)$$Thus: $$D4 \pi r^2 = \frac{4}{3}\pi(b^3-a^3) \implies D_{r>b} = \frac{ (b^3-a^3) \rho_f}{3 r^2} \; \hat r$$We conclude: $$\vec D = \begin{cases} 0 & r<a\\ \frac{(r^3-a^3)\rho_f}{3r^2} \; \hat r & a<r<b \\\frac{ (b^3-a^3) \rho_f}{3 r^2} \; \hat r & r>b\end{cases}$$

>[!claim|2]- Solution to Q1 P2
>Here we want to find the electric field $E$ in all the regions. We will use the following formula: $$D = \epsilon E \implies E=\frac{D}{\epsilon}$$Where $\epsilon$ is the permittivity of the material.
>
>**r<a**:
>Here we recall $D_{r<a} = 0$. Hence $E_{r<a} = 0$. 
>
>**a<r<b**:
>Recall: $$D_{a<r<b}= \frac{(r^3-a^3)\rho_f}{3r^2} \; \hat r$$Since this area has electric permittivity $\epsilon$, then: $$E_{a<r<b} =\frac{(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r$$
>**r>b**:
>Recall: $$D_{r>b} = \frac{ (b^3-a^3) \rho_f}{3 r^2} \; \hat r$$We are no longer in the region of permittivity $\epsilon$, hence we use the permittivity of free space $\epsilon_0$: $$E_{r>b} = \frac{ (b^3-a^3) \rho_f}{3 r^2 \epsilon_0} \; \hat r $$
>We conclude: $$\vec E = \begin{cases} 0 & r<a\\ \frac{(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r & a<r<b \\\frac{ (b^3-a^3) \rho_f}{3 r^2 \epsilon_0} \; \hat r & r>b\end{cases}$$

>[!claim|3]- Solution to Q1 P3
>Here we want to find the polarization $P$ in all three regions, we use: $$\vec P = \epsilon_0 \mathcal X_e \vec E$$
>**r < a**:
>Recall $E_{r<a} = 0$, hence $P_{r<a} = 0$.
>
>**a<r<b**:
>Here the electric susceptibility is non-zero. Recall: $$E_{a<r<b} =\frac{(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r$$Hence: $$P_{a<r<b} = \frac{\epsilon_0 \mathcal X_e(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r$$
>**r>b**:
> Now here we recall that $\epsilon \equiv \epsilon_0 (1 + \mathcal X_e)$. Since we are outside the metal sphere, we already came to the conclusion that $\epsilon = \epsilon_0$. For this to hold, we must have $\mathcal X_e = 0$. Thus $P_{r>b} = 0$.
> 
> We conclude: $$\vec P = \begin{cases} 0 & r<a\\ \frac{\epsilon_0 \mathcal X_e(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r & a<r<b \\ 0 & r>b\end{cases}$$

>[!claim|4]- Solution to Q1 P4
>Here we want to find the volume and surface bound charges. We use: $$\begin{array}{ccc} \sigma_b = \vec P \cdot \hat n \\ \rho_b=-\vec \nabla \cdot \vec P \end{array}$$
>**Surface Bound Charge**:
>Here we have two bound surfaces, one at $r = a$ and the other at $r = b$ (coming from the fact that it is a hollow sphere filled with dielectric material between $a$ and $b$). Let us solve for both of these regions. Denote $\sigma_{b_a}$ as the surface bound charge at $r = a$ and $\sigma_{b_b}$ as the surface bound charge at $r = b$. Then: $$\sigma_{b_a} = \left( \frac{\epsilon_0 \mathcal X_e(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r \right) \cdot -\hat r = \frac{\epsilon_0 \mathcal X_e(a^3-a^3)\rho_f}{3a^2 \epsilon} \; (\hat r \cdot -\hat r) = 0$$Which holds as we must evaluate $r$ at $a$. Now: $$\sigma_{b_b} = \left( \frac{\epsilon_0 \mathcal X_e(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r \right) \cdot \hat r = \frac{\epsilon_0 \mathcal X_e(b^3-a^3)\rho_f}{3b^2 \epsilon}$$Which holds as we must evaluate $r$ at $b$. Thus our overall bound charge is simply: $$\sigma_b = \frac{\epsilon_0 \mathcal X_e(b^3-a^3)\rho_f}{3b^2 \epsilon}$$Which I will use for simplicity.
>
>**Volume Bound Charge**:
>Since we are working with a sphere, we have symmetry in $\theta$ and $\phi$ (thank goodness). Thus, we only need concern ourselves with the $\hat r$ component. We use the spherical definition of divergence: $$\rho_b =-\frac{1}{r^2} \left( \frac{\partial}{\partial r} r^2 \frac{\epsilon_0 \mathcal X_e(r^3-a^3)\rho_f}{3r^2 \epsilon} \right) =-\frac{1}{r^2} \frac{\epsilon_0 \mathcal X_e3r^2\rho_f}{3 \epsilon} = \frac{-\epsilon_0 \mathcal X_e\rho_f}{\epsilon}$$

>[!claim|5]- Solution to Q1 P5
>Here we will use our answer from part $4$ to find the electric field $E$ in all three regions using Gauss’s Law: $$\oint \vec E \cdot dl = \frac{1}{\epsilon} Q_{enc}$$Here we will have to use the fact that $\rho = \rho_f + \rho_b$.
>**r < a**:
>Clearly $Q_{enc} = 0$ hence $E = 0$ which is what was expected.
>
>**a<r<b**:
>Firstly: $$Q_{enc} = \frac{4}{3}\pi(r^3-a^3) \rho = \frac{4}{3}\pi(r^3-a^3) \left(\rho_f - \frac{\epsilon_0 \mathcal X_e\rho_f}{\epsilon} \right)$$Simplifying: $$\left(\rho_f - \frac{\epsilon_0 \mathcal X_e\rho_f}{\epsilon} \right) = \rho_f \left(\frac{\epsilon - \epsilon_0 \mathcal X_e}{\epsilon} \right) = \rho_f\left(\frac{\epsilon(1+ \mathcal X_e)-\epsilon_0 \mathcal X_e}{\epsilon} \right) = \rho_f\frac{\epsilon_0}{\epsilon} $$Hence: $$\oint E \cdot dl = E 4 \pi r^2 = \frac{1}{\epsilon_0}Q_{enc} = \frac{4}{3}\pi(r^3-a^3) \rho_f\frac{\epsilon_0}{\epsilon} \frac{1}{\epsilon_0}$$Rearranging for $E$ nets: $$E = \frac{4 \pi(r^3-a^3) \epsilon_0 \rho_f}{3 (4 \pi r^2)\epsilon \epsilon_0} = \frac{(r^3-a^3) \rho_f}{3r^2 \epsilon} \; \hat r$$Which is what we expected.
>
>**r>b**:
>For this, we note that $\rho_b$ and $\sigma_b$ will cancel each other out. This means that $\rho = \rho_f + 0 = \rho_f$ when using Gauss’s Law. Hence: $$\oint E \cdot dl = E 4 \pi r^2 = \frac{1}{\epsilon_0}Q_{enc} = \frac{4}{3}\pi(b^3-a^3) \rho_f \frac{1}{\epsilon_0}$$Rearranging for $E$ nets: $$E = \frac{4 \pi (b^3-a^3)\rho_f}{3(4 \pi r^2) \epsilon_0} = \frac{(b^3-a^3)\rho_f}{3 r^2 \epsilon_0} \;\hat r$$
>Which is, again, what we expected. 
>
>We conclude: $$E = \begin{cases} 0 & r<a\\ \frac{(r^3-a^3)\rho_f}{3r^2 \epsilon} \; \hat r & a<r<b \\\frac{ (b^3-a^3) \rho_f}{3 r^2 \epsilon_0} \; \hat r & r>b\end{cases}$$

>[!exercise|2]
>A hollow cylinder (infinite length) with inner radius $a$ and outer radius $b$ is filled with magnetic material with magnetic susceptibility $\mathcal X_m$. The cylinder is subject to free volume current density $J = J \hat \phi$.
>1. Find the auxiliary field $H$ in all regions.
>2. Find the magnetic field $B$ in all $3$ regions.
>3. Find the magnetization $M$ in all $3$ regions.
>4. Find surface $K_b$ and volume $J_b$ bound currents in all $3$ regions.
>5. Using bound currents, use Ampere’s law to find the magnetic field.
>
>NOTE: We will work in cylindrical coordinates. 

>[!claim|1]- Solution to Q2 P1
>We need to find the auxiliary field $H$ in all three regions. To do so, we use: $$\oint \vec H \cdot dl = I_{f_{enc}}$$
>Firstly, note since $J = J \hat \phi$, then the current $I$ will wrap around the cylinder. By the RHR, we must have that $H$ will point in the $\hat z$ direction. 
>
>**s < a**:
>Here we cannot take a circular Amperian loop on the inside as $J = J \hat \phi$. Instead we will take rectangular loops that intersect the outside and inside (much like we would for a solenoid). Suppose it has length (perpendicular to $\hat z$) $L$. Hence for $s < a$, the rectangular loop will be in the entire region between $a$ and $b$ hence: $$I_{f_{enc}} = bLJ-aLJ = (b-a)LJ$$Thus: $$HL = (b-a)LJ \implies H_{s<a} = (b-a)J \; \hat z$$
>**a<s<b**:
>We will do a similar loop. This time, since $s$ is between the region, we have: $$I_{f_{enc}} = bLJ - sLJ = (b-s)LJ$$Thus: $$HL = (b-s)LJ \implies H_{a<s<b} = (b-s)J \; \hat z$$
>**s>b**:
>Here our rectangular loop is no longer in the region that contains a free volume charge. Hence: $$H_{s>b} = 0$$
>We conclude: $$\vec H = \begin{cases} (b-a)J \; \hat z & s< a\\ (b-s) J \; \hat z & a<s<b \\0 & s>b\end{cases}$$

>[!claim|2]- Solution to Q2 P2
>Here we find $B$ in all regions. To do so, we use: $$\vec B = \mu \vec H$$Now recall $\mu \equiv \mu_0 (1+ \mathcal X_m)$. 
>
>**s < a**:
>In this region, there is no magnetic susceptibility, hence $\mathcal X_m = 0$ telling us that $\mu = \mu_0$. Thus: $$B_{s<a} = \mu_0(b-a)J \; \hat z$$
>**a<s<b**:
>In this region, there is now a magnetic susceptibility. Hence: $$B_{a<s<b} = \mu(b-s)J \; \hat z$$
>**s>b**:
>Since $H = 0$ in this region, then: $$B_{s>b} = 0$$We conclude: $$\vec B = \begin{cases} \mu_0(b-a)J \; \hat z & s< a\\ \mu(b-s) J \; \hat z & a<s<b \\0 & s>b\end{cases}$$

>[!claim|3]- Solution to Q2 P3
>Here we find the magnetization $M$. For this, we use (the thankfully easy formula): $$\vec M = \mathcal X_m \vec H$$
>**s<a**:
>Like we stated in part $2$, the magnetic susceptibility $\mathcal X_m$ in this region must be $0$ as $\mu = \mu_0$. Hence: $$M_{s<a} = 0$$
>**a<s<b**:
>Here, by definition of the problem, the magnetic susceptibility is given by $\mathcal X_m$. Thus: $$M_{a<s<b} = \mathcal X_m(b-s)J \; \hat z$$
>**s>b**:
>Here we have $H = 0$, thus: $$M_{s>b} = 0$$
>We conclude: $$\vec M = \begin{cases} 0 & s<a \\ \mathcal X_m(b-s)J \; \hat z & a<s<b\\0 & s> b \end{cases}$$

>[!claim|4]- Solution to Q2 P4
>Here we will use the following two formulas: $$\begin{array}{ccc} K_b = M \times \hat n  \\ J_b = \nabla \times M \end{array}$$
>**Surface Bound Current**:
>For this, we must calculate it for both surfaces. One at $s= a$ and the other at $s=b$. Denote $K_{b_a}$ as the bound current for $s=a$ and $K_{b_b}$ as the bound current for $s=b$.
>
>For $s=a$: $$K_{b_a} = \mathcal X_m (b-s) J \; (\hat z \times \hat s)|_{s=a} = \mathcal X_m (b-a) J \; \hat \phi$$
>For $s=b$: $$K_{b_b} = \mathcal X_m (b-s) J \; (\hat z \times \hat s)|_{s=b} = 0$$Which holds as $(b-s)|_{s=b} = 0$. Thus, our overall bound current is: $$K_b = \mathcal X_m (b-a) J\; \hat \phi$$Which I will use for simplicity.
>
>**Volume Bound Current**:
>We recall for cylindrical coordinates: $$\vec{\nabla}\times \vec{v} = (\frac{1}{s} \frac{\partial \vec{v}_s} {\partial s}- \frac{\partial \vec{v}_\phi} {\partial z})\hat{s} + (\frac{\partial \vec{v}_s} {\partial \phi} - \frac{\partial \vec{v}_z} {\partial s})\hat{\phi} + \frac{1}{s}(\frac{\partial } {\partial z}(s\vec{v}_\phi)- \frac{\partial \vec{v}_s} {\partial \phi}) \hat{z}$$
>Hence, by definition of the curl for cylindrical coordinates: $$J_b = -\frac{\partial}{\partial s} \left(\mathcal X_m(b-s)J \right) \;\hat \phi = \mathcal X_m J \; \hat\phi$$

>[!claim|5]- Solution to Q2 P5
>Here we need to use our previous results and Ampere’s law: $$\oint \vec B \cdot dl = \mu_0 I_{enc}$$To recalculate our magnetic field $\vec B$ and (hopefully) get the same answer.
>
>**s<a**:
>Here we note that: $$I_{enc} = L(b-a)(J+\vec J_b) - \vec K_b = L(b-a)(1+\mathcal X_m )J-\mathcal X_m(b-a)J$$Which we simplify to: $$I_{enc} = L(b-a)J[1+\mathcal X_m - \mathcal X_m] = L(b-a)J$$Since our rectangular loop still holds here, then: $$BL = \mu_0L(b-a)J \implies B_{s<a} = \mu_0L(b-a) J \; \hat z$$Which is what we expected.
>
>**a<s<b**:
>Again, we note: $$I_{enc} = L(b-s)(J+J_b) = L(b-s)(1 + \mathcal X_m)J$$Again, the rectangular loop implies: $$BL = \mu_0 L(b-a)(1+\mathcal X_m)J = L(b-a)\mu_0(1 + \mathcal X_m)J$$Since $\mu = \mu_0 (1+ \mathcal X_m)$, then: $$B_{a<s<b} = \mu L(b-a)J \; \hat z$$Which is also what we wanted.
>
>**s>b**:
>Since the Amperian rectangular loop lies completely outside, $I_{enc} = 0$. We conclude: $$B_{s>b} = 0$$Which is also what we needed.
>
>Overall, we get: $$\vec B = \begin{cases} \mu_0(b-a)J \; \hat z & s< a\\ \mu(b-s) J \; \hat z & a<s<b \\0 & s>b\end{cases}$$






