---
aliases:
  - L.D
  - Linear Dependence
---
>[!definition|*] Linearly Dependent 
A list of vectors $v_1, \dots, v_n$ is called linearly dependent if it is not [[Linearly Independent|L.I]]. Thus: $$\lambda_1 v_1 + \dots + \lambda_n v_n = 0 \implies \exists \; \lambda_i : i \in [1,\dots,n]: \lambda_i \ne 0$$We will often denote Linearly Dependent with L.D.

>[!lemma]- $v_1, \dots, v_n$ is L.D $\implies v_n \in span(v_1, \dots, v_{n-1})$
>`\begin{proof}` Let $v_1, \dots, v_n$ be L.D, then $\exists \; \lambda_i : i \in [1,\dots,n]: \lambda_i \ne 0$:$$\lambda_1 v_1 + \dots + \lambda_n v_n = 0$$Suppose $\lambda_n \ne 0$. Then $$\frac{\lambda_1}{-\lambda_n} v_1 + \dots+\frac{\lambda_{n-1}}{-\lambda_n} = v_n$$Let $\frac{\lambda_i}{-\lambda_n} = a_i$, then:$$a_1v_1 + \dots+a_{n-1}v_{n-1} = v_n$$Thus $v_n \in \text{span}(v_1, \dots, v_{n-1})$ as desired.
> `\end{proof}`

>[!lemma]- $v_1, \dots, v_n$ is L.D $\implies$ If the $j^{th}$ term is removed from $v_1, \dots, v_n$ , the span of the remaining list equals the $span(v_1, \dots, v_n)$
>`\begin{proof}` Consider: $\lambda_1 v_1 + \dots + \lambda_n v_n = 0$. By definition of L.D, $\exists \; \lambda_i : i \in [1,\dots,n]: \lambda_i \ne 0$. Let $u \in \text{span}(v_1, \dots, v_n)$, then: $$u = \lambda_1v_1 + \dots+\lambda_n v_n$$Recall from Lemma 1 that $v_j = \frac{\lambda_1}{-\lambda_j}v_1 + \dots$. Then replacing $v_j$ with the above definition removes $v_j$ but keeps $u \in \text{span}(v_1 ,\cdots ,v_n)$ as desired. 
> `\end{proof}`
