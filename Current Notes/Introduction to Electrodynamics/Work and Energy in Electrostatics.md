---
aliases:
  - Work (Electrostatics)
---
Recall that work is described as the total force being exerted. Now recall that $F = QE$ and the $W = \int_a^b F \cdot dl$.
 
>[!definition|*] Work and Energy in Electrostatics
>The work $W$ is given by: $$W = -Q\int_a^b E\cdot dl = Q[V(b)-V(a)]$$If the reference point $\mathcal{O}$ from the [[Electric Potential]] is set to $\infty$, then:
>$$W = QV(r)$$Where $r$ is the distance from the charge. In this definition, $W$ is also the amount of potential that you would get back if you dismantled the system of charges.

Now you ask yourself, how much work will be needed to bring more than two charges from infinity into a specified configuration? For the first charge $q_1$, the work will be $0$ as there is no field $E$ to work against. For the second charge $q_2$, it must work against the field $E_1$ produced by $q_1$. For a third charge $q_3$, it must work against both $E_1 \; \land \; E_2$. Hopefully, you notice the pattern: $$W = \frac{1}{4 \pi \epsilon_0} \sum_{i=1}^n \sum_{j > i}^n \frac{q_iq_j}{\tau_{i,j}}$$Where the $j>i$ tells us that we should not count the same pair of charges twice. A nicer way to do this is to count both pairs twice and divide by 2. Also rearranging the sum to get: $$W = \frac{1}{2} \sum_{i=1}^n(\sum_{i \ne j}^n \frac{1}{4 \pi \epsilon_0} \frac{q_j}{\tau_{i,j}})$$We note inside the parenthesis is the expression for $V$ for a specific $\tau_i$. Thus:

>[!definition|*] Work and Energy in a System of Discrete Charges
>The work in a system of point charges is given by: $$W = \frac{1}{2} \sum_{i=1}^n q_i V(\tau_i)$$Where we count combinations twice. Without counting them twice, the $\frac{1}{2}$ can be ignored.

##### Exercises
>[!exercise|1]
>Two parts:
> 1. Three charges are situated at the corners of a square (side $a$), as shown below. How much work does it take to bring in another charge, $+q$, from far away and place it in the fourth corner?
> 2. How much work does it take to assemble the whole configuration of four charges?
>
>![[Pasted image 20240228172459.png]]
>>[!claim]- Solution
>>**Part 1**: We recall that work (I will not count combinations twice) is defined as: $$W = \sum_{i=1}^n q_i V(\tau_i)$$In our case, our charge is fighting against $3$ other point charges. Since these are point charges, the [[Electric Potential]] is determined by: $$V = \frac{1}{4 \pi \epsilon_0}  \frac{q}{\tau} $$Thus: $$W = \frac{1}{4 \pi \epsilon_0}[\frac{-q^2}{a} + \frac{-q^2}{a} + \frac{q^2}{\sqrt2 \:a}]$$Which gives: $$W = \frac{q^2}{4 \pi \epsilon_0 a} [-2 + \frac{1}{\sqrt 2}]$$
>>**Part 2**: To find how much work is in the entire system, we use the same formula counting pairs once, thus: $$W = \sum_{i=1}^n q_i V(\tau_i)$$Giving us: $$W = \frac{1}{4\pi \epsilon_0}[\frac{-q^2}{a} + \frac{-q^2}{a} + \frac{q^2}{a\sqrt 2} + \frac{-q^2}{a} + \frac{q^2}{a \sqrt 2}+ \frac{-q^2}{a}]$$Thus: $$W = \frac{q^2}{4 \pi \epsilon_0 a}[-4 + \sqrt 2]$$Which is the correct answer.
