
>[!claim|*] Solution
>The cash flow diagram is shown below, note that $M$ means millions.
>![[Pasted image 20240520152556.png]]
>As the pool has an infinite life, we will need the following formula that represents an annuity to present value with $N$ being infinite: $$P = \frac{A}{i}$$Where $i$ is the interest rate which is $0.05$. Before we apply this formula, we must transform the annuity into its equivalent yearly one, instead of every $10$ years. To do so, we consider the first $\$200\:000$ to be a future value over the first $10$ year period. Hence: $$A_1 = 200\:000(A/F,5\%,10) = 200\:000(0.0795) = \$15\:900$$Where $A_1$ is what we were looking for. We note that it begins at year $2$. Turning $A_1$ into a present cost will set that value at year $1$, which we will denote as $F_1$. We then turn $F_1$ into the present cost. Using the formula for infinite $N$, we have: $$P = F_1(P/F,5\%,1) = \frac{A}{i}(0.9524) = \frac{15\:900}{0.05}(0.9524) = \$302\:863.2$$Which gives us the present cost of the infinite annuity payment. 
>
>For the single payment of $1.5M$, we use the table to turn it into present value: $$P= 1\:500\:000(P/F,5\%,2) = 1\:500\:000(0.9070) = \$1\:360\:500$$Lastly, the two annual payments of $2M$ can be easily made into the present cost: $$P = 2\:000\:000(P/A,5\%,2) = 2\:000\:000(1.8594) = \$3\:718\:800$$Thus the overall present cost $C$ is: $$C = 302\:863.2+1\:360\:500+3\:718\:800 = \$5\:382\:163.2$$  


