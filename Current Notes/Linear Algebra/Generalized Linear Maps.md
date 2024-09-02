We note that the [[Fundamental Theorem of Linear Maps]] will have important consequences on what we will do next. But before that, we need to express questions about system of linear equations in terms of linear maps. 

>[!definition|*] #Homogeneous
>In this context, homogeneous means that the constant term on the right side of an equation is equal to $0$.

Now suppose we had a system of linear equations. Such a system can be represented by:$$f(x_1,\dots,x_m) = (A_{11}x_1 +\dots+A_{1m}x_mm,\dots,A_{1n}x_1 + \dots+A_{nm}x_n\}$$In the homogeneous case, clearly $0_v$ is a solution. But we would like to know if any other solutions exist. If we think about it, it would be wise to check if the $\text{null}(T) \ne \{0\}$. That would mean that other solutions exist.

>[!rmk|*] Homogeneous System of Linear Equations
>A homogeneous system of linear equations with more variables than equations has nonzero solutions.
>>[!claim|*]- Proof
>>`\begin{proof}` If we rephrase this in the context of linear algebra, we would have a $T\in L(V,W)$ where $\text{dim}(V) > \text{dim}(W)$. By a corollary of the [[Fundamental Theorem of Linear Maps]], we have that $T$ is not injective. Since $T$ is not injective, we have that $\text{null}(T) \ne \{0\}$, thus more solutions exist.
>> `\end{proof}`


A [[Linear Maps|Linear Map]] $T \in L(V,W)$ has the general form: $$f(x_1,\dots,x_m) = (A_{11}x_1 +\dots+A_{1m}x_mm,\dots,A_{1n}x_1 + \dots+A_{nm}x_n\}$$
We typically denote all $A$’s in [[Matrices|Matrix]] form: $$A = \left[\begin{array}{ccc} A_{11} & \dots & A_{1m} \\ \vdots & \ddots & \vdots \\ A_{n1} & \dots & A_{nm} \end{array}\right]$$
### Links
[[Linear Maps]]
