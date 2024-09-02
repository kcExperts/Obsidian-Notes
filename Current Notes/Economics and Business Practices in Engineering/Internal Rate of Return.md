---
aliases:
  - IRR
---

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

>[!exm|1]- Simple IRR Case
 >Suppose $\$100$ is invested today in a project that return $\$110$ in one year. We can calculate the IRR by finding the interest rate at which $\$100$ now is equivalent to $\$110$ at the end of one year. We have: $$P = F(P/F, i^* ,N) \implies 100 = 110(P/F,i^*,1)$$The goal here is to find $i^*$ which will be the IRR. We recall that ([[Single Disbursement]]): $$(P/F,i^*,N) = \frac{1}{(1+i^*)^N} \implies 100 = \frac{110}{1+i^*} \implies i^* = 0.1 \implies i^* = 10\%$$Thus the internal rate of return is $10\%$ (so if we wanted $\$110$ one year from now with $\$100$ in the present, we would need a $10\%$ interest rate).

>[!exm|2]- Harder IRR Case
>Clem is considering buying a tuxedo. His friends are starting to get married, and he usually is invited to two weddings per year. Tuxedo rental costs him $\$160$ each times, or $\$320$ per year. He can buy a tuxedo for $\$1000$, and he expects it will fit him and look good for five more years. What is the IRR for this investment?
>
>To find the IRR, we need to do some work. Since he is considering purchasing a tuxedo, we consider the $\$1000$ to be a disbursement and the cost of renting a tuxedo per year to be the savings. Thus we have a $-\$500$ expense with $\$320$ in savings per year (for $5$ years). Since we need $i^*$ that makes their present worth give $0$, we have: $$1000 = 320(P/A,i^*,5) \implies \frac{1000}{320} = 3.125 = (P/A,i^*,5)$$Here random guess and check in the interest table will give you the answer of about $18.03\%$ or so.

To ensure that we do not have multiple IRR’s, we have to make certain assumptions:

>[!claim|*] Assumptions
>1. Cash flows are known with certainty.
>2. Cash flows occur at the end of each period of $1$ through $N$.
>3. Both positive and negative cash flows must be present in the analysis.
>4. **The sequence of cash flows can have only $1$ sign change between positive and negative cash flows**.

The fourth assumption is of utmost importance. If in example 2, there was another disbursement at year, say $2$, then the IRR would yield more than $1$ solution.

