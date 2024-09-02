# Present and Future Value
The present value $PV$ represents the equivalent money that the investment or cost would be worth today. The future value $Fv$ represents the money that an investment or cost would be worth in some $N$ time. The formulas for conversion between a present and future value are shown below:$$[F/P,i,N] = (1+i)^N$$$$[P/F,i,N] = \frac{1}{(1+i)^N}$$
# Annuity
An annuity is a reoccurring cost/profit in such a way that the time intervals between them are equal. Usually a year is the norm, but it can be more or less.
- In the case that the annuity’s payment gap is greater than a year, treat a single one of the payments as a **future value** over the payment gap and then get the annuity amount $[A/F,i,N]$. That amount will be the yearly annuity over the entire period. 
- In the case of an infinite **yearly** annuity where the present amount needs to be found, use: $$P = \frac{A}{i}$$
**Note**: Suppose the first yearly annuity payment starts at year $N$. If you were to turn this into a present value, the cash inflow/outflow obtained would be set in the year $N-1$. 

Formulas are shown below: $$[F/A,i,N] = \frac{(1+i)^N-1}{i}$$$$[A/F,i,N] = \frac{i}{(1+i)^N-1}$$$$[P/A,i,N] = \frac{(1+i)^N-1}{i(1+i)^N}$$$$[A/P,i,N] = \frac{i(1+i)^N}{(1+i)^N-1}$$
# Gradient
The gradient in a cash flow represents an ever increasing **linear** cost/revenue that is added every year since the beginning of it. 
- **Note**: When transferring a gradient to present value, if the first gradient payment is at year $N$, then the present value will be set at year $N-2$. Furthermore, start counting from the $N-1$ year. 

The formulas are shown below: $$[A/G,i,N]=\frac{1}{i}-\frac{N}{(1+i)^N-1}$$$$[P/G,i,N]=\frac{1}{i} \left(\frac{(1+i)^N-1}{i(1+i)^N} - \frac{N}{(1+i)^N}\right) $$
# Interest Rates
>[!def|*] Nominal Interest Rate
>The nominal interest rate is the conventional method of stating the annual interest rate. If we wanted to find the rate of a subperiod $i_s$, we use: $$i_s = \frac{r}{m}$$Where $r$ is the nominal rate and $m$ is the length of the equal subperiods. So a nominal rate of $18\%$ compounded monthly produces: $i_s = 0.18/12 = 1.5\%$.

>[!def|*] Effective Interest Rate
>The effective interest rate $i_e$ is the actual (but usually not stated) interest rate which is stated in a one-year compounding period. It is found using: $$i_e = (1+i_s)^m - 1 = \left(  1+\frac{r}{m} \right)  ^m-1$$

# Indices
An estimate of the cost or selling price of an item in year $n$ can be obtained by multiplying the cost or price of the item at an earlier point in time (year $k$) by the ratio of the index value in year $n$ to the index value in year $k$. Thus: $$C_n = C_k \left(  \frac{I_n}{I_k} \right) $$
Where:
- $k$ is the reference year for which cost or price of item is known.
- $n$ is the year for which cost or price is to be estimated $(n > k$)
- $C_n$ is the estimated cost or price of the item in year $n$
- $C_k$ is the cost or price of the item in year $k$.

# Techniques
>[!def|*] Unit Technique
>The unit technique involves using per unit factors that can be estimated effectively. Essentially, you would be doing unit conversion until you get to a dollar amount. Some common methods are shown below:
>- Capital cost of plant per kilowatt of capacity
>- Revenue per mile
>- Capital cost per installed telephone
>- Revenue per customer served
>- Temperature loss per  feet of steam pipe
>- Operating cost per mile
>- Construction cost per square foot
>
>Multiplying these factors by appropriate units should give you a total estimate cost, saving or revenue.

>[!def|*] Power-sizing Technique
>This technique, also referred as the exponential model, is frequently used for developing capital investment estimates for industrial plants and equipment. This CER recognizes that cost varies as some power of the change in capacity or size. The equation is given by: $$\frac{C_A}{C_B} = \left(  \frac{S_A}{S_B} \right) ^X$$
>Where:
>- $C_A$ is the cost for plant $A$
>- $C_B$ is the cost for plant $B$
>- $S_A$ is the size of plant $A$
>- $S_B$ is the size of plant $B$
>- $X$ is the cost-capacity factor (reflects economies of scale). This factor depends on the type of plant or equipment being estimated (for example $X=0.68$ for nuclear power plants)
>
>Note that $X<1$ indicates decreasing economies of scale and $X > 1$ indicates increasing economies of scale (each additional unit of capacity costs more than the previous unit).

>[!def|*] Learning Curve Model
>This technique is a mathematical model that explains the phenomenon of increased worker efficiency and improved organizational performance with repetitive production of a good or service. After all, if you do a task  times, you’re definitely going to be able to complete it quicker than when you first started.
>
>If we had a  learning curve, then every unit produced would have a  decrease in time compared to the previous one. Assuming constant percentage reduction in input resources each time the output quantity is doubles, we can compute the resource requirement: $$Z_u = K(u^{n})$$Where:
>- $u$ is the output unit number
>- $Z_u$ is the number of input resource units needed to produce output unit $u$
>- $K$ is the number of input resource units needed to produce the first output unit
>- $n = \frac{\log s}{\log 2}$ is the learning curve exponent
>- $s$ is the learning curve slope parameter expressed as a decimal ($90\% \implies s = 0.9$)

>[!exm|*]
>It takes a mechanic $9.5$ hours to change the oil in a car for the first time. If the learning rate is $80\%$ for this task, how long would it take for him to change the oil on his fifth car?

>[!claim|*] Solution
>Clearly, we see that $80\%$ learning rate $\implies s= 0.8$. Thus: $$n = \frac{\log 0.8}{\log 2} \approx -0.3219$$
>(Recall that any logarithm will work as long as they are identical). Now notice that we are talking in hours here, so hours are the “input units” and thus $K = 9.5$. Since we need to know $Z_u$ which represents the hours needed to change the oil of the fifth car, we have that $u = 5$. Thus: $$Z_u = 9.5 \left(  5^{-0.3219} \right) = 5.6588 \; \text{hours}$$Which is what we were looking for. 