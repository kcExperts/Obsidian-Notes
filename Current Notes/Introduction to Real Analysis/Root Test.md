
>[!theorem|*] Root Test
>Let $a_k$ be a sequence $\; \land \; L = \limsup_{k \rightarrow \infty} \sqrt[k]{|a_k|}$. Then:
>- If $L > 1 \implies \sum_{k=1}^\infty a_k$ diverges
>- If $L<1 \implies \sum_{k=1}^\infty a_k$ converges
>- If $L = 1 \implies$ Nothing can be said
>
>Where the $\limsup$ is the [[Limit Superior and the Limit Inferior|Limit Superior]].
>>[!claim|*]- Proof
>>`\begin{proof}` We prove the first two cases:
>>**$L<1$ case**: If $L = \limsup_{k \rightarrow \infty} \sqrt[k]{|a_k|} < 1$, then by a practice midterm problem, for any $r$ with $L < r<1$, there are finitely many $k: r< \sqrt[k]{|a_k|}$ so, $\exists \; N : \sqrt[k]{|a_k|} < r \; \; \forall k \ge N$. Then $\sum_{k=N+1}^\infty r^k$ is a geometric series and converges since $0<r<1$. 
>>Then since $\sqrt[k]{|a_k|} < r$, we have $|a_k| < r^k \; \forall k \ge N$. Thus $\sum_{k=N+1}^\infty |a_k|$ converges by the comparison test, and since $\sum_{k=0}^\infty |a_k|$ is only different at finitely many terms, it also converges.  
>>
>>**$L>1$ case**: If $L = \limsup_{k \rightarrow \infty} \sqrt[k]{|a_k|} > 1$, by the practice midterm problem, $\exists \;$ an infinite number of $k : \sqrt[k]{|a_k|} > 1$. Therefore $a_k$ does not converge to $0$. 
>>Thus, by the divergence criterion, $\sum_{k=0}^\infty a_k$ diverges.
>>
>>**$L=1$ case**: If $L= 1$, we know $\sum_{k=1}^\infty \frac{1}{k}$ diverges and $\limsup_{k \rightarrow \infty} \sqrt[k]{\frac{1}{k}} = 1$. Furthermore, $\sum_{k=1}^\infty \frac{1}{k^2}$ converges and $\limsup_{k \rightarrow \infty} \sqrt[k]{\frac{1}{k^2}} = 1$. This is just showing both cases can happen.
>>  `\end{proof}`

>[!exm]- $\sum_{k=1}^\infty (\frac{2k+3}{3k+2})^k$
>Consider $\sum_{k=1}^\infty (\frac{2k+3}{3k+2})^k$. We will apply the root test to get rid of the $k$ power. Thus $\sqrt[k]{|a_k|} = (\frac{2k+3}{3k+2})$. It is clear that the limit of this is $\frac{2}{3} < 1$. By the root test, the series is convergent. 

>[!exm]- Piecewise Sum
>Consider: $$\sum_{k=1}^\infty a_k \; \text{where} \; a_k=\begin{cases} (\frac{1}{k})^k & k \; \text{odd}\\ (\frac{1}{2})^k & k \; \text{even} \end{cases}$$Then: $$\sqrt[n]{|a_k|} = \begin{cases} \frac{1}{k} & k \; \text{odd} \\ \frac{1}{2} & k \; \text{even} \end{cases}$$
>Clearly $limsup_{k \rightarrow \infty} \sqrt[k]{|a_k|} = \frac{1}{2} < 1$ This is convergent.



