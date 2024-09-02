Finding the IRR for mutually exclusive projects is a bit more involved:

>[!claim|*] Steps to find the IRR of mutually exclusive projects
>1. Sort the projects from the lowest to highest **first cost** and start with it as your current best option. 
>2. Challenge the current best option with the next costlier project from the list.
>3. Determine if the incremental investment has an IRR $\ge$ MARR.
>	a. If yes, replace the current best option with the challenger.
>	b. If no, repeat to step $2$.
>Note that the incremental investment rate is calculated using: $$(C_a-C_b)=(P_a-P_b)(\text{factor})$$And then isolating for $i^*$ in the $\text{factor}$ term.

>[!exm|1]
>Assuming a MARR of $70\%$, you could either:
>1. Invest $\$1$ today, and receive $\$2$ in a year.
>2. Invest $\$1000$ today, and receive $\$1900$ in a year.
>Which is the best option?
>
>Clearly the lowest first cost is the first option. We will challenge it with option 2. With a MARR of $70\%$, we get $i^*$ of the first option: $$1 = 2(P/F,i^*,1) \implies 0.5 = \frac{1}{1+i^*} \implies i^* = 1 \implies i_1^* = 100\%$$Skipping the calculations, $i_2^* = 90\%$. Now one would think we would pick option $1$, but since these projects are mutually exclusive, we need to do the steps outlined above.
>
>Let us determine the incremental investment: $$(1000-1)=(1900-2)(P/F, i^*,1) \implies i^* = 89.9\%$$Hence the incremental investment rate is $89.9\%$. This signifies that those extra $\$999$ that could be invested if we chose the second option would net an interest rate of $89.9\%$ as opposed to just choosing the first option and leaving the other $\$999$ in an account with a $70\%$ interest rate (indicated by the MARR). 


