>[!definition|*] Flux
>The flux of $E$ through a surface $\mathcal{S}$ is given by:$$\Phi_E = \int_\mathcal{S} E\cdot da$$Thus we have a [[Surface Integral]].
>

Without going through much of the details, the flux $\Phi_E$ is proportional to the number of field lines passing through an infinitesimal area $da$. This suggests that for a closed surface, the flux $\Phi_E$ is a measure of the total inside charge. Since $E$ for a point charge spreads outwards radially, it is natural to consider our closed surface to be a sphere and make use of [[Spherical Coordinates in Physics]].  $$\oint E\cdot da = \int \frac{1}{4 \pi \epsilon_0}(\frac{q}{r^2} \hat{r}) \cdot (r^2sin\theta \;d\theta \;d\phi \;\hat{r}) = \frac{1}{\epsilon_0}q$$Notice that $(r^2sin\theta \;d\theta \;d\phi \;\hat{r})$ reflects the fact that we calculating the surface element of the sphere, not the volume, which we must do by definition of $\Phi_E$. This expression leads us to a very important finding called [[Gauss’s Law]]. 
