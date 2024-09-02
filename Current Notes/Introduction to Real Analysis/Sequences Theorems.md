The following are all theorems that hold: 

#### Theorem 1:
>[!tip] Uniqueness of a [[Limits|Limit]]
>Let $a_n$ be a sequence. If $a_n$ converges $\implies$ Its limit is unique.
>>[!success]- Proof
>>Suppose $\exists \; \alpha, \lambda \in \mathbb{R}: \; a_n \rightarrow \alpha \; \land \; a_n \rightarrow \lambda$. Then $$\forall \epsilon > 0, \; \exists \; N_{\alpha} \in \mathbb{N}: \; |a_n - \alpha| < \frac{\epsilon}{2} \; \forall \; n \ge N_\alpha$$
>>Similarly: $$\forall \epsilon > 0, \; \exists \; N_{\lambda} \in \mathbb{N}: \; |a_n - \lambda| < \frac{\epsilon}{2} \; \forall \; n \ge N_\lambda$$ Let $N = \text{max}\{N_\alpha , N_\lambda\}$ so that both inequalities hold for $n \ge N$. Then for $n \ge N$, we have:$$|\alpha - \lambda| =|-a_n+\alpha+a_n-\lambda | \le |a_n-\alpha| + |a_n-\lambda| < \frac{\epsilon}{2}+\frac{\epsilon}{2} = \epsilon $$ which holds by the [[Triangle Inequality]] $\; \land \; |-1| = 1$. Recall:$$\forall \;\alpha,\lambda \in \mathbb{R}, \alpha = \lambda \iff \forall \; \epsilon > 0, \; |\alpha - \lambda| < \epsilon$$We already have that $|\alpha - \lambda| < \epsilon \implies \alpha = \lambda$. Thus the limits are unique.

#### Theorem 2:
>[!tip] [[Converging Sequences]] imply it is a [[Bounds of a Sequence|Bounded Sequence]].
>>[!success]- Proof
>>Since $a_n$ converges, it has a [[Limits|Limit]] $L \in \mathbb{R} \; \land \; \exists \; |a_n - L| < 1 \;\;\forall \; n \ge N$ (The value $1$ is achieved by setting \epsilon to $1$ in the definition of [[Converging Sequences]]). This is valid or equivalent to:$$L-1 < a_n < L+1$$ Let $a_{max} = \text{max}\{a_0,a_1,\dots,a_N\} \; \land \; a_{min} = \text{min}\{a_0,a_1,\dots,a_N\}$. Let: $$U = \text{max}\{a_{max}, L +1\} \implies U \ge a_n \; \; \forall \; n \in \mathbb{N}$$Similarly, let:$$ W= \text{min}\{a_{min}, L -1\} \implies W \le a_n \; \; \forall \; n \in \mathbb{N}$$We conclude that $\text{range}(a_n)$ is bounded.



