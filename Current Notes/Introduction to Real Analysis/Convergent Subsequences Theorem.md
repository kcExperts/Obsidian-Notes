
>[!theorem|*] Convergent Subsequences Theorem
>A sequence $a_n \rightarrow L \iff$ every subsequence $a_{n_k} \rightarrow L$.
>>[!claim]- Proof
>>`\begin{proof}` We must show $\implies \; \land \; \impliedby$
>>
>>$\implies$: Suppose $a_n \rightarrow L \implies \forall \; \epsilon > 0, \exists \; N \in \mathbb{N}: |a_n - L| < \epsilon$ when $n \ge N$. Let $a_{n_k}$ be an arbitrary subsequence of $a_n$. Since $n_k \ge k$, we have $n_k \ge N$ and $|a_{n_k} - L| < \epsilon \; \forall \; k \ge N$ since $a_{n_k}$ corresponds to $a_n$ for some $n \ge N$.
>> 
>> $\impliedby$: Since $a_{n_k}$ converges to $L$, the subsequence with $n_k = k \; \forall \; k \in \mathbb{N}$ converges to $L$. Thus $a_n \rightarrow L$. 
>> `\end{proof}`

This result may not be too surprising, but it is the key ingredient for understanding when [[Infinite Sums]] are [[Associative]]. We can also use this theorem in a clever way to calculate the values of limits. 

>[!exm|*]- Let $0<b<1$. If $b_n = \{b^n: n \in \mathbb{N}\}$, find $b^n \rightarrow \infty$
>Firstly, it is clear that $b_n$ is a monotone decreasing sequence that is bounded below as $b > b^2 > b^3 >\dots > 0$. Thus, the [[Monotone Convergence Theorem]] allows us to say that $b_n$ converges. Thus $b_n \rightarrow L$.
>Now consider the subsequence $b_{2n}$. Since $b_n \rightarrow L$, by the above theorem, $b_{2n} \rightarrow L$. Clearly, $b_{2n} = \{b^{2n}: n \in \mathbb{N}\}$. However, $b^{2n} = b^n \cdot b^n$. Thus $b_{2n} \rightarrow L \cdot L$. By the [[Algebraic Limit Theorem]], we have $L^2 = L$ . This is only true if $L = 0$.

The astute reader might have noticed that the [[Contrapositive]] of the theorem would also hold some value. Indeed, the [[Divergence Criterion]] proves to be a useful corollary. 