Since the electric field $E$ is irrotational, one of its properties is that $E = -\nabla V$. We also have that $E$ is path independent. Thus we define $V$. 

>[!definition|*] Electric Potential
>The electric potential from a point $\mathcal{O}$ to a point a distance $r$ away is given by: $$V = -\int_\mathcal{O}^r E \cdot dl$$We note that the arbitrary reference point $\mathcal{O}$ will usually be assumed to be $\infty$ for most system of charges. This is done as we assume $V(\infty) = 0$. However, this convention fails when the charge extends to infinity, such as the infinite plane. In such instanced, a different $\mathcal{O}$, such as a point on the plane, should be chosen. $V$ is also defined as: $$E = -\nabla V$$
>For a point charge, we have: $$V = \frac{1}{4 \pi \epsilon_0}\frac{Q}{r}$$

With this, we can transform [[Gauss’s Law]] into a form that used $V$, as shown in [[Poisson’s Equation]] and [[Laplace’s Equation]].

##### Examples
>[!exm] Potential of a Spherical Shell
>Find the potential inside and outside a spherical shell of radius $R$ that carries a uniform surface charge $q$. Set $\mathcal{O} = \infty$.
>>[!claim|*]- Solution
>>We first focus on the potential outside the spherical shell. First we find $E$ that is generated by the uniform surface charge $q$. By [[Gauss’s Law]], we have: $$\oint E\cdot da = \frac{1}{\epsilon_0}Q_{enc} \implies E4\pi r^2 = \frac{1}{\epsilon_0}q \implies E = \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} \hat{r}$$$R$ is not used here as we are focusing on the potential outside the spherical shell. Thus we have $r > R$. Now that we have $E$, we set up our integral for the electric potential $V$: $$V_{out}= -\int_\infty^r \frac{1}{4 \pi \epsilon_0} \frac{q}{r^2} \hat{r} \cdot dl$$Since we are working in spherical coordinates and we are doing a [[Line Integral]], we have that $dl = dr$ (or technically $dl = \hat{r}dr + \hat{\theta}rd\theta + \hat{\phi}rsin\theta d \phi$  but since $E$ is only radial, we set it to $dr$ and drop the dot product). Thus:$$V_{out} =-\int_\infty^r \frac{1}{4 \pi \epsilon_0} \frac{1}{r^2} \;dr = \frac{q}{4 \pi \epsilon_0} [\frac{1}{r}]_\infty^r$$Solving this gets us: $$V_{out} = \frac{1}{4 \pi \epsilon_0}\frac{q}{r}$$Which is what we were looking for. 
>>Now we search for the electric potential inside the sphere $V_{in}$. We cannot simply reuse our expression for $E$ as the spherical shell had all its surface charge placed at a distance $R$. Suppose we consider $r < R$. Then: $$\oint E \cdot da = \frac{1}{\epsilon_0}Q_{enc}$$But $\oint da$ is the gaussian surface inside the hollow spherical shell, we have that $Q_{enc} = 0$ and thus $E = 0$. Now to find the electric potential, we still need to take our point from infinity that still has the outside $E$ acting on it. Its just that the inside integral will be $0$. Thus: $$V_{in} = -\int_\infty^R \frac{1}{4 \pi \epsilon_0} \frac{q}{r} dr - \int_R^r0\;dr$$Solving this gets us: $$V_{in} = \frac{1}{4 \pi \epsilon_0}\frac{q}{R}$$Which is what we were looking for. Now note that even though $E = 0$ inside the shell does not imply that $V$ will be $0$ as well. Intuitively, $V$ is a scalar and the expression $E = -\nabla V$ will give $E=0$ even if $V \ne 0$. 
>>The important thing to remember is if we need to find the inside electric potential, do not forget to include the outside potential (as $\mathcal{O}$ is usually set to $\infty$).
>>


