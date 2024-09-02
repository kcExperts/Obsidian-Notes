---
aliases:
  - Limit Superior
  - Limit Inferior
---
Consider a bounded sequence $a_n$. Now define the following sequence: $$A_n = \{a_k : n \ge k \}$$This sequence represents what is called the k-tail of $a_n$. It is the sequence obtained by cutting off the first $k$ terms of the sequence. Now suppose we consider the [[Supremum]] and the [[Infimum]] of $A_n$.
 - $M_n = \text{sup}(A_n)$
 - $m_n = \text{inf}(A_n)$

>[!def|*] Limit Superior and Limit Inferior
>The limit superior of $a_n$ is $\lim_{n \rightarrow \infty} M_n = {\lim \text{sup}}_{n \rightarrow \infty} A_n$
>The limit inferior of $a_n$ is $\lim_{n \rightarrow \infty} m_n = {\lim \text{inf}}_{n \rightarrow \infty} A_n$
>

>[!proposition|*] 
>Let $a_n$ be a bounded sequence:
> - $\lim \text{sup}_{n \rightarrow \infty} \; \land \; \lim \text{inf}_{n \rightarrow \infty}$ exist
> - $\lim \text{inf}_{n \rightarrow \infty} a_n = \text{sup}(\text{range}(m_n))$ $\; \land \;$ $\lim \text{sup}_{n \rightarrow \infty} = \text{inf}(\text{range}(M_n))$
> - $\lim \text{inf}_{n \rightarrow \infty} a_n \le \lim \text{sup}_{n \rightarrow \infty}a_n$



