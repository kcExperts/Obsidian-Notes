The [[Contrapositive]] of the [[Convergent Subsequences Theorem]] leads to a corollary of such significance that we give it its own page. 
 
>[!cor|*] Divergence Criterion
>If $a_n$ has two or more different subsequential limits, it is divergent

Such a tool can be used to show that select [[Bounds|Bounded]] sequences diverge, as shown in the example below.

>[!exm|*]- Prove $a_n = \{1,-1,1,-1, \dots\} = \sum_{k=0}^n (-1)^k$ diverges
> `\begin{proof}` Consider $a_{2n} = \{1, 1, 1, \dots \} \; \land \; a_{2n+1} = \{-1,-1,-1, \dots \}$. It is clear that both of these are [[Subsequences]] of $a_n$. However, we can immediately see that $a_{2n} \rightarrow 1 \; \land \; a_{2n+1} \rightarrow -1$. By the divergence criterion, we conclude that $a_n$ diverges.
>  `\end{proof}`

 Now we ask ourselves a question; when is it possible to find a convergent subsequence? The [[Bolzano-Weierstrass Theorem]] gives us our answer. 