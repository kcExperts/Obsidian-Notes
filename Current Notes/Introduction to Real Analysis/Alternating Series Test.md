
>[!theorem|*] Alternating Series Test
>Suppose $a_k$ is a sequence satisfying:
> - $\lim_{k \rightarrow \infty} a_k = 0$ (Required by divergence criterion)
> - $|a_k| \ge |a_{k+1}|$ $\forall \; k > K \in \mathbb{N}$
> - $\frac{a_{k+1}}{a_k} < 0 \; \forall \; k \in \mathbb{N}$ (Guarantees Alternating)
> 
> Then $\sum_{k=1}^\infty a_k$ converges.
>>[!claim|*]- Proof
>>`\begin{proof}` Let $a_0 >0$ without loss of generality. Then by property $3$, $a_{2k} > 0 \; \land \; a_{2k+1} < 0$. Then $S_0 = a_0, S_1 = a_0 + a_1 < S_0$. Since $a_1 < 0$ and since $|a_1| \le |a_0|$, we have $S_1 \ge 0$…
>>Define $I_0 = [0,S_0]$ which has length $L_0 = a_0$.
>> Define $I_1 = [S_1, S_0]$ with length $L_1 = -a_1 = |a_1|$.
>> Inductively, $I_n = [S_n, S_{n-1}]$ with length $L_n = |a_n|$.
>> The intervals are nested. Thus $|a_n| \rightarrow 0$ as $n \rightarrow 0$ by property $1$ of $a_n$. 
>> PROOF NOT FINISHED
>> 
>>  `\end{proof}`

