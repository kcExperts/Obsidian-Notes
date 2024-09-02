Typically, engineers are given an observed, or actual, MARR. There are three methods to evaluate:
1. Work with real cash flows and find the real MARR using an estimated inflation.
2. Adjust the real cash flows for inflation and apply the actual MARR.
3. Work with mixed cash flows (requires good analysis skills).

>[!exm|*]
>Consider the following:
>![[Pasted image 20240603142118.png]]
>
>(Think of the actual cash flows being there as we know for a fact what it will be whereas the real cash flows are estimates of what the actual flow will be).
>
>**Important**: For a gradient, the conversion will set it $1$ year before the dotted line that intercepts the time axis. So in the example above, the gradient, when looking in the interest table, would be got using $N = 11$. We would then need to transform that to a present value.

>[!claim|*]- Solution using Method 1
>Here we will convert everything to [[Real and Actual Dollars|Real Dollars]]. Hence we must convert everything to a real amount. From the example diagram, $S$ and $G$ will need to be converted as they are stated in [[Real and Actual Dollars|Actual Dollars]]. We use: $$R_N = \frac{A_N}{(1+f)^N}$$For a single cash flow, this is simple, but for $G$, it is more complicated as we have to do it **year by year**. For example, $G_A(2) = 27000$. Thus: $$G_R(2) = \frac{G_A(2)}{(1+f)^2} = \frac{27000}{(1+0.018349)^2} \approx \$26\:036$$Skipping the math, $S_R \approx \$15\:686$. From here, we proceed with a normal analysis and get the answer (using PW or AW).

>[!claim|*]- Solution using Method 2
>Here we convert to actual dollars. Thus the initial cost is good and so is $G$ and $S$. Now we need only convert the $20\:000$ annuity. Recall: $$A_N = R_N(1+f)^N$$For example, $A_R(2) = 20\:000$ so: $$A_A(2) = A_R(2)(1+f)^N = 20000(1+0.018349)^2 \approx \$20\:741$$Repeating this for each one will then give us what we need to do our actual analysis. Use the excel interest spreadsheet to speed this up as: $$(1+f)^N = (F/P,f,N)$$We also need to find the actual MARR: $$\text{MARR}_A=\text{MARR}_R+f+(\text{MARR}_R \cdot f)$$

>[!claim|*]- Solution using Method 3
>Here we need to find the actual MARR: $$\text{MARR}_A=\text{MARR}_R+f+(\text{MARR}_R \cdot f) \approx 0.11 = 11\%$$Now we proceed with a normal cash flow analysis, but this time vary whether we use the actual or real MARR depending on if the cash flow is actual or real.




