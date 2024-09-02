An inner product is a generalization of the [[Dot Product]] that works for any $\mathbb{F}^n$. However, such a generalization requires consideration for [[Complex Numbers]]. There is no one inner product for all fields or abstract spaces, instead we define rules that it must follow:

>[!def|*] Inner Product
>An inner product on $V$ is a function that takes each ordered pair $(u,v)$ where $u,v \in V$ and maps them to a number $\langle u, v \rangle \in \mathbb{F}$ that satisfy:
> - **Positivity**:$\langle v,v \rangle \ge 0 \; \; \forall \; v \in V$
> - **Definiteness**: $\langle v,v \rangle = 0 \iff v = 0$
> - **Additivity First Slot**: $\langle u+w,v \rangle = \langle u,v \rangle + \langle w,v \rangle \; \; \;forall \; u,v,w \in V$
> - **Homogeneity First Slot**: $\langle  \lambda u,v \rangle = \lambda \langle u,v \rangle \; \; \forall \; \lambda \in \mathbb{F} \; \land \; u,v \in V$.
> - **Conjugate Symmetry**: $\langle u,v \rangle = \overline{\langle u,v \rangle} \; \; \forall \; u,v \in V$
> 	- In $\mathbb{R}$ spaces, we have $\langle u,v \rangle = \langle v,u \rangle$
> 
> Do note that physicists will often define Additivity and Homogeneity to be in the second slot instead of the first (but it truly does not matter, see below). 

>[!rmk|*]- The Inner Product is a Linear Map from $V$ to $\mathbb{F}$
>`\begin{proof}` Since the inner product satisfies additivity and homogeneity, it is clear that it is a [[Linear Maps|Linear Map]].
> `\end{proof}`

Thus we note some basic properties:

>[!rmk|*] Basic Properties
> - $\langle 0,v \rangle = 0 \; \; \forall \; v \in V$
> - $\langle v,0 \rangle = 0 \; \; \forall \; v \in V$
> - $\langle u,v+w \rangle = \langle u,v \rangle + \langle u,w \rangle \; \; \forall u,v,w \in V$
> - $\langle u,\lambda v \rangle = \bar{\lambda} \langle u,v \rangle \; \; \forall \lambda \in \mathbb{F} \; \land \; u,v \in V$

>[!exm]- Euclidean Inner Product
>The Euclidean inner product on $\mathbb{F}^n$ is defined as: $$\langle (w_1, \dots, w_n),(z_1, \dots, z_n) \rangle = w_1 \bar{z_1} + \dots + w_n \bar{z_n}$$$\forall \; (w_1, \dots, w_n), (z_1, \dots, z_n) \in \mathbb{F}^n$

>[!exm]- Sample Inner Product on $\mathcal{P}(\mathbb{R})$
>We can define an inner product on $\mathcal{P}(\mathbb{R})$ as: $$\langle p,q \rangle = \int_0^\infty p(x)q(x)e^{-x}dx$$$\forall \; p,q \in \mathcal{P}(\mathbb{R})$

We note every inner product space is a normed space and in turn, every normed space is a [[Metric Space]]. 

Inner products allow us to define the [[Norm]].

