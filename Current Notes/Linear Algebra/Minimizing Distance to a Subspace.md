---
aliases:
  - Approximating Functions
---
Suppose we wanted to minimize the distance to a subspace, then the following theorem gives us an important answer. (see the Intuition remark in [[Orthogonal Projection]]).

>[!theorem|*]
>Suppose $U$ a is [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Vector Subspace|Subspace]] of $V$ with $v \in V \; \land \; u \in U$. Then: $$||v-P_U(v)|| \le ||v-u||$$Furthermore, the inequality becomes an equality $\iff u = P_U(v)$.
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>By definition of the [[Norm]], we must have $0 \le ||P_U(v) - u||^2$. Thus: $$||v-P_U(v)||^2 \le ||v - P_U(v)||^2 + ||P_U(v) - u||^2$$Using the [[Pythagorean Theorem]], we get: $$= ||(v- P_U(v) + (P_U(v) - u)||^2 = ||v - u||^2$$Taking the square root of both sides gives: $$||v - P_U(v)|| \le ||v-u||$$If we let $P_U(v) = u$, we clearly have: $$||v - P_U(v)|| = ||v-u||$$as desired.
>> `\end{proof}`

This may seem like yet another useless tool. However, if we combine this result with property $9$ of the [[Orthogonal Projection]], being: $$P_U(v) = \langle v,e_1 \rangle e_1 + \dots + \langle v,e_m \rangle e_m$$Then we can get explicit solutions to minimization problems.

>[!example|1] The Power of Linear Algebra
>Suppose we want to find a polynomial $u$ with real coefficients and of degree at most $5$ that approximates the sine function as well as possible on the interval $[-\pi, \pi]$. Essentially, we want: $$| \text{sin}(x) - u(x)|$$to be minimized. What we can do is force this under the integral: $$\int_{-\pi}^\pi | \text{sin}(x) - u(x)| \; dx$$which is what we want to be minimized. Let $C[-\pi, \pi]$ denote the real [[Inner Product Space]] of continuous real-valued functions on $[-\pi, \pi]$ with [[Inner Product]]: $$\langle f,g \rangle = \int_{-\pi}^\pi fg$$Let now $v \in C[-\pi, \pi]$ be such that $v = \text{sin}(x)$. Let $U$ be a [[Vector Subspace|Subspace]] of $C[-\pi, \pi]$ consisting of the polynomials with real coefficients and of degree at most $5$. Thus our problem is once again reformulated (for the last time), as: $$\text{Find} \; u \in U : ||v-u|| \; \text{is minimized}$$To find the answer, we must first apply the [[Gram-Schmidt Procedure]] to find the [[Orthonormal Basis]] of $\{1,x,x^2,x^3, x^4, x^5\}$. Then we compute $P_U(v)$ using: $$P_U(v) = \langle v,e_1 \rangle e_1 + \dots + \langle v,e_6 \rangle e_6$$(Clearly $\langle v,e_1 \rangle = 0 \; \land \; \langle v,e_3 \rangle = 0 \; \land \; \langle v,e_6 \rangle = 0$) 
>Thus we are tasked with finding:  $$P_U(v) = \langle v,e_1 \rangle e_1  + \langle v,e_3 \rangle e_3 + \langle v,e_5 \rangle e_5\; \;  \text{with} \; v(x) = \text{sin}(x)$$
>Skipping over the integrals that must be done and simplifying, we get that: $$u(x) \approx 0.987862x - 0.155271x^3 + 0.00564312x^5$$Which gives the graph:
>![[Pasted image 20240310140120.png]]
>where $u(x)$ is blue and $\text{sin}(x)$ is red.
>Recall that [[Taylor Series]] expansion of degree $5$ for sine: $$\text{sin}(x) \approx x - \frac{x^3}{3!} + \frac{x^5}{5!}$$Comparing this to $u(x)$ produces:
>![[Pasted image 20240310140338.png]]
>Where our Taylor Expansion is in green. You can clearly see that $u(x)$ is a much better approximation then the Taylor expansion when the degrees match each other. In a computer, $u(x)$ would be the better approximation.



