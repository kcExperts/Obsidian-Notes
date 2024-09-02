If one is very far away from a localized charge distribution, it could appear as a point charge and our classical point charge [[Electric Potential]] formula turns out to be a good approximation. However, what if $Q$ is $0$? You would say that $V$ is approximately $0$, but we need something more precises.

>[!def|*] Physical Electric Dipole
>A physical electric dipole consists of two equal and opposite charges ($\pm q$) separated by a distance $d$.

>[!def|*] Pure Dipole
>A pure dipole is a physical dipole whose $d \rightarrow 0$ but whose charges $q$ is so huge that the [[Monopole and Dipole Moment]] is finite. A pure monopole must be placed at the origin.

>[!exm|*]
>Find the approximate potential at points far from a physical electric dipole.
>>[!claim|*]- Solution
>>Let $\tau_+$ be the distance from $+q$ and $\tau_-$ be the distance from $-q$. Then: $$V = \frac{1}{4 \pi \epsilon_0}[\frac{q}{\tau_+} + \frac{-q}{\tau_-}]$$The two charges are separated by a distance $d$ and we are interested in the potential at some arbitrary point $p$. To find $\tau_\pm$, we construct:
>>![[Pasted image 20240229104833.png]]
>>Which will actually give us the $\pm$ answer. Thus, by the law of cosines: $$\tau_\pm = r^2 + (\frac{d}{2})^2 \mp rd cos \theta = r^2(1 \mp \frac{d}{r} cos \theta + \frac{d^2}{4r^2})$$Since we consider points far from the physical dipole, we have $r >> d$, thus the third term is negligeable: $$\frac{1}{\tau_\pm} \approx \frac{1}{r}(1 \pm \frac{d}{2r} cos \theta)$$Thus: $$\frac{1}{\tau_+} - \frac{1}{\tau_-} \approx \frac{d}{r^2} cos \theta$$Giving us: $$V(r)\approx \frac{1}{4 \pi \epsilon_0} \frac{qd \:cos \theta}{r^2}$$

We may now move on to the [[Multipole Expansion]].