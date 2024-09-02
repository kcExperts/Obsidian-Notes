

>[!def|*] Bessel’s Inequality
>Suppose $e_1, \dots, e_n$ is an orthonormal list in $V$. If $v \in V$, then: $$| \langle v,e_1 \rangle|^2 + \dots + | \langle v,e_n \rangle|^2 \le ||v||^2$$
>>[!claim|*]- Proof
>>`\begin{proof}` Suppose $v \in V$. Then: $$v =| \langle v,e_1 \rangle|e_1 + \dots + | \langle v,e_n \rangle|e_n + v - | \langle v,e_1 \rangle|e_1 - \dots - | \langle v,e_n \rangle|e_n$$Let the linear combination to the left of $v$ be $u$ and let the right side linear combination be $w$. (which includes the $v$ term). If $k \in \{1, \dots,n\}$, then: $$\langle w,e_k \rangle = \langle v,e_k \rangle - \langle v,e_k \rangle \langle e_k,e_k \rangle = 0$$This implies that $\langle w,u \rangle =0$. The [[Pythagorean Theorem]] tells us that: $$||v||^2 = ||u||^2 + ||w||^2 \ge ||u||^2 = | \langle v,e_1 \rangle|^2 + \dots + | \langle v,e_n \rangle|^2$$where the last part comes from the [[Vector Linear Combination of an Orthonormal Basis]].
>> `\end{proof}`



