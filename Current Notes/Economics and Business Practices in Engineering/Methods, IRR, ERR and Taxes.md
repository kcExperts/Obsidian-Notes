# Methods

>[!def|*] Payback Period
>The payback period of a project is the number of years it takes for an investment to be recouped when the interest rate is assumed to be **zero**. With constant annual savings, we have: $$\text{Payback Period} = \frac{\text{First Cost}}{\text{Annual Savings}}$$
>**A two year payback period is considered acceptable while anything above four years is considered unacceptable** (The “do nothing option” can be used).

**Note**: Annual worth ($AW$) method works even on projects involving an uneven lifespan. 
# IRR
>[!def|*] Internal rate of return
>The internal rate of return (IRR) is the interest rate that makes both the PW and AW equal zero. It is the return rate per dollar invested (in a sense, it is an interest rate) that one must achieve to break even. Thus what interest rate makes the present worth of the disbursements equal to the present worth of the cash inflows.
>
>One calculates the IRR using: $$PW = 0 = \sum^T_{t=0} \frac{R_t - D_t}{(1+i^*)^t}$$Where:
>- $R_t$ is the cash inflow (receipts) in period $t$
>- $D_t$ is the cash outflow (disbursements) in period $t$
>- $T$ is the number of time periods
>- $i^*$ is the internal rate of return
>
>**For a project to be feasible, the IRR should be greater that the MARR** (Independent Projects)
>See [[Internal Rate of Return for Mutually Exclusive Projects]].

>[!exm|1] Simple IRR Case
 >Suppose $\$100$ is invested today in a project that return $\$110$ in one year. We can calculate the IRR by finding the interest rate at which $\$100$ now is equivalent to $\$110$ at the end of one year. We have: $$P = F(P/F, i^* ,N) \implies 100 = 110(P/F,i^*,1)$$The goal here is to find $i^*$ which will be the IRR. We recall that ([[Single Disbursement]]): $$(P/F,i^*,N) = \frac{1}{(1+i^*)^N} \implies 100 = \frac{110}{1+i^*} \implies i^* = 0.1 \implies i^* = 10\%$$Thus the internal rate of return is $10\%$ (so if we wanted $\$110$ one year from now with $\$100$ in the present, we would need a $10\%$ interest rate).
 
 >[!exm|2] Harder IRR Case
>Clem is considering buying a tuxedo. His friends are starting to get married, and he usually is invited to two weddings per year. Tuxedo rental costs him $\$160$ each times, or $\$320$ per year. He can buy a tuxedo for $\$1000$, and he expects it will fit him and look good for five more years. What is the IRR for this investment?
>
>To find the IRR, we need to do some work. Since he is considering purchasing a tuxedo, we consider the $\$1000$ to be a disbursement and the cost of renting a tuxedo per year to be the savings. Thus we have a $-\$500$ expense with $\$320$ in savings per year (for $5$ years). Since we need $i^*$ that makes their present worth give $0$, we have: $$1000 = 320(P/A,i^*,5) \implies \frac{1000}{320} = 3.125 = (P/A,i^*,5)$$Here random guess and check in the interest table will give you the answer of about $18.03\%$ or so.

>[!claim|*] Assumptions
>1. Cash flows are known with certainty.
>2. Cash flows occur at the end of each period of $1$ through $N$.
>3. Both positive and negative cash flows must be present in the analysis.
>4. **The sequence of cash flows can have only $1$ sign change between positive and negative cash flows**.

## IRR and Mutually Exclusive Projects
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

## ERR
>[!def|*] External Rate of Return
>The external rate of return (ERR) denoted by $i_e^*$ is the rate of return on a project where any cash flows that are not invested in the project are assumed to earn interest at a predetermined explicit rate (usually the MARR). For a given rate of return, a project can only have one ERR.

>[!claim|*] Approaches
>There are two approaches that we can use:
>1. Precise ERR (need a rate of return which will most likely be a MARR)
>2. Approximate ERR (just need a decision)

>[!exm|1] Precise ERR
>Consider the following:
>1. Inflow of $\$1000$ at year $0$.
>2. Outflow of $\$5000$ at year $1$.
>3. Inflow of $\$6000$ at year $2$. 
>
>The strategy here is to shift our inflow at year $0$ to year $1$ and then shift the years to the left so that year $1$ becomes year $0$ and so on so forth as then there would only be $1$ sign change. We would transform the inflow from year $0$ to year $1$ using the MARR. From here, we can then apply the IRR method.

>[!exm|2] Approximate ERR
>Consider the following:
>1. Inflow of $\$1000$ at year $0$.
>2. Outflow of $\$5000$ at year $1$.
>3. Inflow of $\$6000$ at year $2$. 
>   
>To do this analysis, move any **cash inflow** to the future (imagine that you immediately invest any earnings into an account at the MARR). Then move every **cash outflow** to where the cash inflow was moved to using the approximate ERR. Then find the IRR.

See page 226 for more examples.

# Taxes
Below are the components of a complete tax calculation.
![[Pasted image 20240528180836.png]]

>[!def|*] Capital Tax Factor (CTF)
>The CTF is a value that summarizes the effect of the benefit of future tax savings due to [[Capital Cost Allowance System|CCA]] and allows analysists to take these benefits into account when calculating the PW equivalent of an asset. For a given CCA rate, the CTF is constant: $$\text{CTF} = 1 - \frac{td(1+\frac{i}{2})}{(i+d)(1+i)}$$where:
>- $t$ is the taxation rate;
>- $d$ is the CCA rate;
>- $i$ is the after-tax interest rate.
>  
>  Note: CTF assumes infinite life of the asset.

>[!def|*] Capital Salvage Factor (CSF)
>The CSF represents the immediate effect that occurs when the asset is salvaged or scrapped. Note that the half-year rule does not apply here: $$\text{CSF} = 1 - \frac{td}{(i+d)}$$where:
>- $t$ is the taxation rate;
>- $d$ is the CCA rate;
>- $i$ is the after-tax interest rate.
>  
>  Note: This has implications if the salvage value is zero.

>[!def|*] Before and After Tax MARR
>The **before-tax MARR** represents a high MARR that has been chosen to recognize the impact of taxes. 
>The **after-tar MARR** represents a lower MARR that is used as the cash flows already reflect the taxes (they have been explicitly calculated and taken into account).
>
>An approximate relationship between the two is given as: $$\text{MARR}_{\text{after-tax}} \approx \text{MARR}_{\text{before-tax}} \times (1-t)$$where $t$ is the **corporate tax rate**. In general, both MARR’s are chosen independently and are not directly related by this equation.
>
>Note: If a MARR is given without specifying which type, one can assume it is a before-tax MARR.

## Taxes (No CTF and CSF)
### Effect of Taxes on First Cost
Recall that the first cost in the disbursement that a company makes, for example, to buy a brand new machine or to construct a new warehouse. Usually first costs are paid immediately at the start of a project whilst taxes are paid at the end of the year (which we can interpret as $1$ on a cash flow diagram). 

Given a choice, a firm would want to write off (depreciate) an investment as quickly as possible (as the tax savings will accrue faster). However, there are undesirable effects. It may create opportunity for inefficient business decisions and from the governments stand point, it can lead to the firm exploiting tax rules. To counter this, tax authorities have carefully defined the depreciation methods permitted for use in computing taxes. The permitted methods may not reflect that true depreciation expenses (the permitted depreciation charge set by a tax authority is called the **capital cost allowance**). For most purposes, we can consider these to be equivalent.

>[!exm|*] First Costs
>What is the present worth of the machine’s first cost?
>
>The first cost of $\$45\:000$ will lead to benefits in the form of an annuity as every year taxes will be calculated and there will be a tax saving. Since the corporate tax rate is $42\%$ (and it does not decrease over time or anything like that), we give rise to yearly savings (over $5$ years) of: $$45\:000\ \times \frac{0.42}{5} = \$3780$$With this, to calculate the present worth $PW$ of the machine’s first cost, we take the first cost and add the present worth of the tax savings, hence: $$PW = -45\:000 + 3780(P/A, 12\%, 5) \approx -\$31\:400$$

### Effect of Taxes on Savings (Annuities)
Although the first cost is reduced, this is balanced by the fact that the savings from investments are also reduced. 

>[!exm|*] Savings
>What is the present worth of the after-tax annual net savings created by the machine.
>
>We have $\$23\:000$ in savings per year and $\$7300$ in operating costs per year. Hence there are yearly savings of $\$15\:700$ in savings per year before tax. Thus there are: $$15\:700 \times (1-0.42) = \$9106$$in after-tax savings each year, for $5$ years. Turning this into a present worth amount nets: $$9106 \times (P/A,12\%,5) \approx \$32\:800$$

### Effect of Taxes on Salvage or Scrap Value
Recall that salvage value is the value at the end of the useful life and scrap value is the value at the end of its physical life. 

>[!exm|*] Scrap Value
>What is the after-tax present worth of the salvage value of the tester?
>
>This is quite easy to do: $$5000 \times (1-0.42) \times (P/F,12\%,5) = \$1646$$

## IRR Taxes
The effect of taxation is to modify the pre-tax cash flows. The after-tax [[Internal Rate of Return|IRR]] is simply the IRR calculated on the after-tax cash flows. 

Recall our example from [[Effect of Taxation on Cash Flows]]:

>[!exm|*]- Example for the concepts
>A corporation is buying a machine that has the following costs and revenues:
>- First cost of $\$45\:000$;
>- Savings of $\$23\:000$ per year;
>- Operating costs of $\$7300$ per year;
>- Salvage value of $\$5000$ (lifespan of $5$ years).
>
>The corporate tax rate $t$ is $42\%$ and the after-tax MARR is $12\%$.

>[!exm|*]  IRR Tax Calculation
>What is the accurate after-tax IRR of the machine investment decision?
>
>Here we will translate everything to $PW$ and then find the $i^*$ that yields $0$ (in a sense, repeat the calculations done in [[Effect of Taxation on Cash Flows]] but replace the MARR that we used with the unknown $i^*$): $$45\:000 = (45\:000/5) \cdot 0.42 \cdot (P/A,i^*,5)+15\:700 \cdot (1-0.42) \cdot (P/A,i^*,5)+5000(1-0.42)(P/F,i^*,5)$$Solving nets $i^* = 14.7\%$.
>
>Alternatively, the $AW$ method can be used as well. In both cases, it passes the MARR and is therefore an acceptable investment.

The relationship between the before and after-tax IRR is identical to the one between the [[Before and After Tax MARR]]: $$\text{IRR}_{\text{after-tax}} \approx \text{IRR}_{\text{before-tax}} \times (1-t)$$where $t$ is the corporate tax rate.