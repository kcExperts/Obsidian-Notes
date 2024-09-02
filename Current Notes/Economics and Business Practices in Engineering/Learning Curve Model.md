This technique is a mathematical model that explains the phenomenon of increased worker efficiency and improved organizational performance with repetitive production of a good or service. After all, if you do a task $1\:000$ times, you’re definitely going to be able to complete it quicker than when you first started.

If we had a $90\%$ learning curve, then every unit produced would have a $10\%$ decrease in time compared to the previous one. Assuming constant percentage reduction in input resources each time the output quantity is doubles, we can compute the resource requirement: $$Z_u = K(u^{n})$$Where:
- $u$ is the output unit number
- $Z_u$ is the number of input resource units needed to produce output unit $u$
- $K$ is the number of input resource units needed to produce the first output unit
- $n = \frac{\log s}{\log 2}$ is the learning curve exponent
- $s$ is the learning curve slope parameter expressed as a decimal ($90\% \implies s = 0.9$)

>[!exm|*]
>It takes a mechanic $9.5$ hours to change the oil in a car for the first time. If the learning rate is $80\%$ for this task, how long would it take for him to change the oil on his fifth car?

>[!claim|*]- Solution
>Clearly, we see that $80\%$ learning rate $\implies s= 0.8$. Thus: $$n = \frac{\log 0.8}{\log 2} \approx -0.3219$$
>(Recall that any logarithm will work as long as they are identical). Now notice that we are talking in hours here, so hours are the “input units” and thus $K = 9.5$. Since we need to know $Z_u$ which represents the hours needed to change the oil of the fifth car, we have that $u = 5$. Thus: $$Z_u = 9.5 \left(  5^{-0.3219} \right) = 5.6588 \; \text{hours}$$Which is what we were looking for. 



 