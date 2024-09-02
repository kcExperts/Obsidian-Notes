---
aliases:
  - L.I
  - Linear Independence
---
>[!definition|*] Linearly Independent
A list of vectors $v_1, \dots, v_n$ is called linearly independent if: $$\lambda_1 v_1 + \dots + \lambda_n v_n = 0 \implies \lambda_1 = \dots = \lambda_n = 0 $$
We will often denote Linearly Independent with L.I.

>[!lemma]- $v_1, \dots, v_n$ is L.I $\implies$ $v_1, \dots, v_{n-1}$ is L.I. 
>`\begin{proof}`Suppose $v_1, \dots, v_n$ is L.I, then: $$\lambda_1 v_1 + \dots + \lambda_n v_n = 0 \implies \lambda_1 = \dots = \lambda_n = 0$$Suppose we consider $v_1, \dots, v_{n-1}$, this is the same as:$$\lambda_1 v_1 + \dots + \lambda_{n-1}v_{n-1} +0 v_n = 0$$Since $v_1, \dots, v_n$ is L.I, then we must have that $\lambda_1 = \dots = \lambda_{n-1}$ which means that $v_1, \dots, v_{n-1}$ is L.I as desired.
>  `\end{proof}`
