Practice Questions

# Exercise 1
>[!exercise|1] Cost Concepts
>Need a recommendation about an order to produce $45\:000$ parts for a bus manufacturer. The company does not have machines, thus they need to be rented. Machines $A$ and $B$ are the only ones that can get the job done, the differences are listed below. 
>
>Machines can only be rented by the **full month** and not by the day. Each requires an operator to function costing $\$25/h$. The machine will be in operation for two shifts per day for five days a week and assume that there are $4.3333$ weeks/month. Each shift is $8$ hours long. However, employees take one paid hour for lunch and two $15$ minute paid coffee breaks per shift and receive full pay for each shift even if only part of the shift is required. Each part weights $500$ grams and the requires metal costs $\$1.42$ per kg. **Defective** parts will need to be shipped to a recycling center, The hauling company charges $\$175$ per trip and can take a maximum of $1000$ kg per trip.
>
>You are tasked with putting together the total cost quotation (rounded to the nearest $\$1000$) using a $68\%$ profit markup. Furthermore, identify the major cost items for both machines; Rental costs, Variable costs (excluding labour), Labour costs and Recycling costs.

|                              | Machine A      | Machine B      |
| ---------------------------- | -------------- | -------------- |
| Rental Cost ; one-time setup | $\$20\:000.00$ | $\$25\:000.00$ |
| Rental Cost / month          | $\$7500.00$    | $\$8250.00$    |
| Heating Fuel Cost / Hour     | $\$155.00$     | $\$140.00$     |
| Parts / Hour                 | 80             | 95             |
| Defect Rate                  | $5.4\%$        | $8.9\%$        |
>[!claim|*] Solution
>
>**Machine A**:
>Firstly, define $I = \$20\:000$. 
>The total parts needed, factoring in the defect rate, is: $$D_r = \left \lceil\frac{45\:000}{1.00-0.054} \right \rceil= 47\;569$$The total machine operating hours is: $$M_o =\frac{47\:596}{80}=594.6125$$The total number of shifts factoring in worker breaks is then: $$T_s =\frac{594.6125}{6.5}=91.48 \implies 92$$Months needed to rent the machine: $$\frac{92}{2 \times 5} = 9.2 \; \text{weeks} \implies R_m=\frac{9.2}{4.3333}=2.1239 \implies 3 \; \text{months}$$The total weight of the parts is: $$T_w=47\:569 \times 0.5 = 23\:784.5 \; \text{kg}$$Total weight of defect parts is thus: $$T_{wd}=(47\:569 - 45\:000) \times 0.5 = 1\:284.5 \; \text{kg}$$Thus two trips are needed for recycling purposes costing $H= \$350$. Now, the total cost for the materials are: $$T_{materials} = 23\:784.5 \times 1.42 = \$33\:773.99$$The total machine rental cost: $$T_{rental} =3 \times 7500 = \$22\:500$$The total wages: $$T_{wages}=(92\times 8 ) \times 25 = \$18 \: 400$$Total heating and fuel costs: $$T_{heating}=594.6125 \times 155 = \$92\:164.94$$Hence the total cost to produce is: $$T_{cost} = I+H+T_{materials}+T_{rental}+T_{wages}+T_{heating} = \$187\:188.93\$$$The total quote for Machine $A$ is thus: $$T_{quote} = 187\:188.93 \times 1.68 = 314\:477.40 \implies \$314\:000.00$$
>Simply repeat this for Machine $B$ and you will see that Machine $B$ is superior as it will cost less and finish in a quicker time frame.

# Exercise 2
>[!exercise|2] Time Value of Money
>Three years ago, you made an investment that is now worth $\$3000$. The interest rate was $10\%$ compounded monthly, but you could not take out the money until now and the interest rate was **locked-in**. 
>
>a) How much was your initial deposit?
>
>b) You knew that you were taking a risk with a locked-in interest rate. Over time, interest rates were factored as $8\%$ compounded quarterly the first year, $10\%$ compounded monthly the second and averaged $14\%$ compounded semi-annually this last year. Was locking-in a good decision? By how much?
>
>c) What was the effective annual interest rate over the three years (for b)?

>[!claim|*] Solution to part A
>We have: $$\begin{array}{ccc} F = 3000  \\r = 0.1 \\ m=12 \end{array}$$We need to solve for the past worth $P$ of the investment. We get the effective interest rate: $$\begin{array}{ccc}  i_e = \left(  1+ \frac{r}{m} \right)  ^m - 1 = 0.10471\\ P = \frac{F}{(1+i_e)^3}\\P=2225.22  \end{array}$$Thus the initial investment was $\$2225.22$.

>[!claim|*] Solution to part B
>We have $P = 2225.22$, with this, we find the future worth after $3$ years: $$\begin{array}{ccc} i_{e1}=(1+\frac{0.08}{4})^4 =0.08243 \implies F_1 = P(1+i_{e1})=2408.65\\i_{e2} = (1+\frac{0.1}{12})^12 =0.10471 \implies F_2 = F_1(1+i_{e2}) = 2660.86\\ i_{e3} = (1+\frac{0.14}{2})^2 =0.1449 \implies F_3 = F_2(1+i_{e3})=3046.42\end{array}$$Hence, the investment that was made yielded $\$46.42$ less than possible given interest rates over the timespan.

>[!claim|*] Solution to part C
>We have $P$ and $F_3$ (from part b), thus: $$F_3 = P (1+i_{e})^3 \implies i_e= \sqrt[3]{\frac{F_3}{P}}-1=0.11038$$Thus the annual effective interest rate for the $3$ years in $11.038\%$ compounded annually. 

# Exercise 3
>[!exercise|3] Comparison Methods
>A company is thinking of purchasing a new press to expand their business. There are two models that they are considering with enough money to buy only **one** of them. The associated costs for each are shown in the table below.
>
>Assume that the MARR is $12\%$ and that both machines are equal to each other with only the above differences. Use an **annual worth** comparison to determine which press should be purchased (if any) and make a recommendation.

| Cost Elements      | Hydraulic Press                                              | Electric Press                                                 |
| ------------------ | ------------------------------------------------------------ | -------------------------------------------------------------- |
| Initial Cost       | $\$275\:000$                                                 | $\$185\:000$                                                   |
| Annual Savings     | $\$33\:000$                                                  | $\$24\:500$                                                    |
| Annual Maintenance | $\$2000$ the first year, increasing by $100$ each year after | $\$1000$ the first year, increasing by $\$350$ each year after |
| Life               | 15 years                                                     | $10$ years                                                     |
| Salvage Value      | $\$19\:250$                                                  | $\$14\:800$                                                    |
>[!claim|*] Solution
>**Hydraulic Press**:
>First the initial cost $AW_I$: $$AW_I = 275\:000 (A/P,12,15) = \$40\:376.67$$The salvage value: $$AW_S= -19\:250(P/F,12,15)(A/P,12,15) = -\$516.37$$Now for the annual maintenance and savings: $$AW_C = 2000+100(A/G,12,15)-33\:000 = \$2498.03$$Hence: $$AW_T = AW_I+AW_S+AW_C = \$9358.33$$**Electric Press**
>Doing the whole process shows that the annual worth is about $\$8\:653.33$. $$$$
>
>
>
>Hence the electric press is better as it has the **lower average annual cost**.
>

# Exercise 4
>[!exercise|4] Taxes
>What is the total after-tax annual cost of a machine with a first cost of $\$450\:000$ and operating and maintenance costs of $\$0.22$ per unit produced? It will be sold for $\$4500$ at the end of five years. Production is $750$ units per day, $250$ days per year. The CCA rate is $20\%$, the $\text{MARR}_{AT} = 18\%$ and the corporate income tax rate is $45\%$.  

>[!claim|*] Solution
>Using the known formulas for CTF and CSF, we get: $$\begin{array}{ccc}  \text{CTF} = 0.7812 \\\text{CSF} = 0.7632  \end{array}$$The annual operation and maintenance costs are: $$\text{O\&M}_{\text{annual}} = 0.22 \times 750 \times 250 = \$41\:250$$Thus the desired answer is given by: $$C_{annual} = 45\:000(A/P,0.18,5)(CTF)+\text{O\&M}_{\text{annual}}(1-0.45)-4500(A/P,0.18,5)(CSF) = \$33\:449.62$$

# Exercise 5
>[!exercise|5] Inflation
>![[Pasted image 20240620180335.png]]

>[!claim|*] Solution to part A
>Since the payment is made in 2020, the real and actual dollar values will be equal. The pension pays a sum of $\$30\:000$ per year therefore the real and actual dollar values will be $\$30\:000$.

>[!claim|*] Solution to part B
>Since the pension pays $\$40\:000$ per year, the actual dollar value will be $\$30\:000$: $$\text{Real} = \$30\:000(P/F,4\%,25) = \$11\:253$$Thus the value of the $25^{th}$ pension payment paid in 2044 will be $\$11\:253$ in 2020 dollars.

>[!claim|*] Solution to part C
>For this we know that the real dollar value must be $\$20\:000$ so we can use the same equation in part b but rearranged: $$\text{Actual} = \frac{\text{Real}}{(P/F,4\%,25)} = \frac{30\:000}{0.3751} = \$79\:978.67$$Which is the answer.

>[!claim|*] Solution to part D
>The present worth $PW$ is given by: $$PW = 30\:000(F/A,9\%, 40)(P/F,4\%,40) = \$2\:111\:427.12$$Which is the answer.

# Exercise 6
>[!exercise|6] Inflation
>![[Pasted image 20240620181100.png]]

>[!claim|*] Solution to part A
>The real IRR of the project $i^*$ is given by: $$\begin{array}{ccc} 200\:000+2000(P/A,i^*,20)= 22 \:000(P/A,i^*,20)  \\10 = (P/A,i^*,20) \\i^* = 7.75\%  \end{array}$$

>[!claim|*] Solution to part B
>The actual IRR $i_a$ is given by: $$i_a = i_r + f+i_r \times f = 10.98\%$$

>[!claim|*] Solution to part C
>The real dollar MARR $M$ is given by: $$M = \frac{1+i_a}{1+f}-1=0.0437 = 4.37\%$$

>[!claim|*] Solution to part D
>Since the provided values are in real dollars, the real dollar MARR will be used: $$PW = -200\:000-2000(P/A,4.37\%,20)+22\:000(P/A,4.37\%,20) \approx \$63\:114$$

# Exercise 7
>[!exercise|7] Replacement Decisions
>![[Pasted image 20240620181808.png]]

![[Pasted image 20240620181851.png]]
![[Pasted image 20240620181918.png]]