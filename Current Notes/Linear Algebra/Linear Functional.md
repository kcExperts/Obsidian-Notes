---
aliases:
  - Linear Functionals
---

>[!def|*] Linear Functional
>A linear functional on $V$ is a [[Linear Maps|Linear Map]] from $V$ to $\mathbb{F}$. The set of all linear functionals on $V$ is called the [[Dual Space]].

>[!example|1]-
>Consider $f: \mathbb{F}^3 \rightarrow \mathbb{F}$ defined by: $$f(z_1,z_2,z_3) = 2z_1 -5z_2 + z_3$$Then $f$ is linear functional of $\mathbb{F}^3$. Notice that we can write this linear functional using the [[Inner Product]]: $f(z) = \langle (z_1,z_2,z_3),(2,-5,1) \rangle$. (You can notice that it holds for the [[Euclidean Inner Product]]).

Example $1$ shows that the mapping can be thought of as an [[Inner Product]]. But does this fact expand to all linear functionals? Yes it does!

However, if we consider: $$\gamma: \mathcal P _2 (\mathbb{R}) \rightarrow \mathbb{R} : \gamma(p) = \int_{-1}^1 p(t) \left( \text{cos}(\pi t)\right) \: dt$$It is clearly not obvious how you would write this in $\langle p,q \rangle$ (*do not try and take $q = cos(\pi t))$, as such a function does not belong to $\mathcal P_2 (\mathbb{R})$)*. But, the [[Riesz Representation Theorem]] will show us how we can achieve our inner product representation.

