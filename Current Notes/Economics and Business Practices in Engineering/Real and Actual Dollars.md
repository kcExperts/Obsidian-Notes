---
aliases:
  - Real Dollars
  - Actual Dollars
---
When prices change, the amount of goods a dollar will buy changes too. In a project evaluation, comparisons of dollar values across time without taking into account the price change cannot be done. 

>[!def|*] Real/Constant Dollars
>The real dollar is the value of a dollar assuming a constant purchasing power. It is evaluated at the reference date (base year).

>[!def|*] Actual/Current/Nominal Dollars
>The actual dollar represents the value of the dollar at the time the cash flow occurs. This varies due to [[Inflation and Deflation]]. 

>[!rmk|*] Converting between Real and Actual Dollars
>Converting current dollars in year $N$ into real dollars in year $N$ relative to a base year $0$ is straightforward. We have some options (note that $A_N$ here is **not** an annuity amount):
>1. Let $A_N$ be the actual dollars in year $N$, $R_{0,N}$ be the real dollars equivalent to $A_N$ relative to year $0$, the base year, $I_{0,N}$ be the value of a global price index (such as the [[Consumer Price Index|CPI]]) at year $N$, relative to year $0$. Thus: $$R_{0,N} = \frac{A_N}{ \left( \frac{I_{0,N}}{100} \right)}$$
>2. Let $f$ be the inflation rate per year, assumed to be constant from year $0$ to year $N$. If the **base year is omitted from the notation for real dollars**, it is understood that the **current year is the base year**: $$R_N = \frac{A_N}{(1+f)^N} = A_N(P/F,f,N)$$

>[!exm|*]
>In 2015, your income was $\$60\:000$ per year. Now, in 2018, it is $\$62\:000$ per year. The CPI (base year of 2002) rose from $126.6$ in 2015 to $143.4$ in 2018. Were you better off in 2018 than in 2015?

>[!claim|*]- Solution
>Let us get the real amount with respect to the base year 2002. From there, a comparison will get us our answer. Thus: $$R_{0,2015} = \frac{60000}{\frac{126.6}{100}}=\$47\:393.36$$And: $$R_{0,2018} = \frac{62000}{\frac{143.4}{100}} = \$43\:235.70$$From this, we clearly see that you were better off in 2015.

Note that at the base year, $R = A$.
