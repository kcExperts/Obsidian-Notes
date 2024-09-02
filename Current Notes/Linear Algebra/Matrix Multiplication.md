Arguably the most important operation for [[Matrices]]; matrix multiplication.

>[!def|*] Matrix Multiplication
>Given two [[Matrices]] defined by $A: \mathbb{F}^n \rightarrow \mathbb{F}^m \; \land \; C: \mathbb{F}^p \rightarrow \mathbb{F}^n$. The matrix multiplication of these two matrices, denoted $A \; \text{x} \; C$ $\lor$ $AC$ is the composition of the two function: $AC = A \circ C$. $$ \left[ \begin{array}{ccc} A_{11} & \dots & A_{1n} \\ \vdots  & \ddots & \vdots\\ A_{m1} & \dots & A_{mn} \end{array} \right] \text{X} \left[ \begin{array}{ccc} C_{11} & \dots & C_{1n} \\ \vdots  & \ddots & \vdots\\ C_{m1} & \dots & C_{mn} \end{array} \right] = \left[ \begin{array}{ccc} (A_{11}C_{11} + \dots+A_{1n}C_{m1}) & \dots & (A_{11}C_{1n} + \dots+A_{1n}C_{mn}) \\ \vdots  & \ddots & \vdots\\ (A_{m1}C_{11} + \dots+A_{mn}C_{m1}) & \dots & (A_{m1}C_{1n} + \dots+A_{mn}C_{mn}) \end{array} \right] $$The entry $(AC)_{j,k} = \sum_{r=1}^n A_{j,r}C_{r,k}$.

Given $AB$, the multiplication can be thought of as taking $A_{1, \cdot}$ and multiplying it with every column of $B$ to get the first row of $AB$. Repeating this step for every $A_{j,\cdot}$ will give the correct $AB$. 

