# Question 1
>[!exercise|1] Cost Concepts
>
>A manufacturing company fabricates several machined parts for the aerospace industry. One of their products is a blind rivet. The rivets sell for $650 for a pack of 500 and they sell approximately 1,250,000 of these rivets each year. Two alternative designs are under consideration. Either design will serve equally well and will involve the same material cost of $20,000 per 100,000 rivets.
>
>Design A will require 10 hours of lathe time and 5 hours of drill time per 1,000 units. Design B will require 7 hours of lathe time and 10 hours of drill time per 1,000 units. The variable operating cost of the lathe, including labour, is $18.60 per hour. The variable operating cost of the drill, including labour, is $16.90 per hour.
>
>a) What is the estimated annual revenue for the blind rivets?
>
>b) What are the estimated costs (not considering material) for one year for each of the alternative designs?
>
>c) Which design should the company choose based on profit and at what savings over the other design?

>[!claim|*] Solution for part A
>As the manufacturing company sells $1250000$ blind rivets each year at a prince of $\$650$ for a pack of $500$, we have that the estimated annual revenue for the blind rivets $R_b$ is given by: $$R_b = 1\:250\:000 \cdot \frac{650}{500} = \$1\:625\:000$$
>Hence the estimated annual revenue for the blind rivets is $\$1\:625\:000$.

>[!claim|*] Solution for part B
>Recall that the operating cost for the lathe and the drill are $\$18.60$ per hour and $\$16.90$ per hour respectively. I am assuming that $1\:250\:000$ units are sold in a year.
>
>**Design A**:
>This design requires $10$ hours of lathe and $5$ hours of drill for $1\:000$ units. The total time to produce the required units on the lathe is $(10 \cdot 1\:250) = 12\:500$ hours. Thus the total cost to use the lathe is $(12\:500 \cdot 18.60) = \$232\:500$. The total time needed on the drill is $(5\cdot 1\:250) = 6\:250$ hours. Thus the total cost to use the drill is $(6\:250 \cdot 16.90)= \$105\:625$. In total, design A has a cost of $\:\$338\:125$.
>
>**Design B**:
>This design requires $7$ hours of lathe and $10$ hours of drill for $1\:000$ units. The total time to produce the required units on the lathe is $(7 \cdot 1\:250) = 8\:750$ hours. Thus the total cost to use the lathe is $(8\:750 \cdot 18.60) = \$162\:750$. The total time needed on the drill is $(10\cdot 1\:250) = 12\:500$ hours. Thus the total cost to use the drill is $(12\:500 \cdot 16.90)= \$211\:250$. In total, design B has a cost of $\:\$374\:000$.

>[!claim|*] Solution for part C
>From part B, we clearly see that design A has a lower overall cost then design B. Furthermore, since the material costs are identical for both designs, design A is the superior choice and will offer the company better profits (**NOTE: THERE ARE MISSING PROFIT CALCULATIONS WHICH IS ESSENTIALLY REVENUE - COST**)
>
>With a material cost of $\$20\:000$ per $100\:000$ rivets, it will cost $\$250\:000$ for $1\:250\:000$ rivets. The total savings design A offers over design B is $((374\:000 + 250\:000)-(338\:125 + 250\:000)) = \$35\:875$.

# Question 2
>[!exercise|2] Cost Estimation
>A 250m2250𝑚2 event tent was purchased for $16,000 in 2014 when the index value was 725. Estimate the cost of a 150m2150𝑚2 tent in 2024 when the index value was 1,059 and the cost-capacity factor was 0.7.

>[!claim|*] Solution
>I will keep my work to $4$ decimal places (without rounding) and round off to $2$ decimal places for the final answer. Units will be omitted until the final answer. Now recall the following: $$C_n = C_k \left(  \frac{I_n}{I_k} \right)  \;\; \text{and} \;\; C_A = C_B\left( \frac{S_A}{S_B} \right)  ^X$$
>To find our desired answer, we first calculate the estimate cost of the $250m^2$ event tent in $2024$. To do so, we use the first formula with inputs:
>- $n = 2024$
>- $k = 2014$
>- $C_k = 16\:000$
>- $I_n = 1\:059$
>- $I_k = 725$
>Thus: $$C_{2024} = 16\:000 \left( \frac{1\:059}{725 } \right) = 23\:371.0344$$With this, we estimate the price of the $150m^2$ tent using the second formula with inputs:
>- $C_B = C_{2024} = 23\:371.0344$
>- $S_A = 150$
>- $S_B = 250$
>- $X = 0.7$
>Thus: $$C_A = 23\:371.0344 \left( \frac{150}{250} \right)^{0.7} = 16\:344.9580$$Hence the final estimate cost of a $150m^2$ tent in 2024 is $\$16\:344.96$.

# Question 3
>[!exercise|3] Time Value of Money
>You have $20,000 available for investment. How much money would you have in your account at the end of 10 years, given the following scenarios:
>
a) You invest in an account with **3%** interest per year compounded semi-annually for a period of 10 years.
>
b) You invest in an account with **2.9778%** interest per year compounded semi-annually for a period of 10 years. At the end of each year, you withdraw $1000 from the account.
>
c) You invest in an account with **2.9778%** interest per year compounded semi-annually for a period of 10 years. How much you have to withdraw annually to have nothing left at the end of the period of 10 years?

Note that the spreadsheet interprets $2.9999\%$ as $3\%$.

**NOTE: The solution for part A was deemed incorrect as I rounded too early. However, the process remains correct.**
>[!claim|*] Solution to part A
>Here we use the following formula to get the effective interest rate: $$i_e = \left(  1 + \frac{r}{m} \right)^m-1$$Clearly $r = 0.03$ and $m = 2$. Hence: $$i_e = \left(1+\frac{0.03}{2}\right)^2 -1 = 0.0302 = 3.02\%$$With this, we calculate the amount of money $M$ in the account at the end of $10$ years: $$M = 20\:000 [F/P,3.02,10] $$Using the interest spreadsheet, we get $M = \$26\:930$ which represents the value that we would have in the account after $10$ years.
>

>[!claim|*] Solution to part B
>Using $r = 0.029778$ and $m =2$, we calculate the effective interest rate: $$i_e = \left(  1+ \frac{0.029778}{2} \right) ^2-1 = 0.029999 = 2.9999\%$$Now we note that $\$1\:000$ is taken out at the end of each year (so from year $1$ until the last year). This represents an annuity and we will transform this to the future cost at year $10$ ($C_F$). Hence $C_F = 1\:000[F/A,2.9999,10]$. Using the spreadsheet, we get $C_F = \$11\:463.8$. We also transform our initial investment of $\$20\:000$ into what we will have after $10$ years ($I_F$). Hence $I_F = 20\:000[F/P,2.9999,10]$. Using the spreadsheet, we get $I_F = \$26\:878$. The money in the account $M$ is given by $$M = I_F - C_F = 26\:878 - 11\:463.8 = \$15\:414.2$$Thus after $10$ years, we would have $\$15\:414.2$ left in the account. 

>[!claim|*] Solution to part C
>Since $r$ and $m$ are identical, $i_e$ will also be the same. The goal here is to find the amount that needs to be withdrawn to be left with $\$0$ in the account. Based off of part B, we must have $C_F = \$26\:878$. All we need to do is calculate the annuity $C_A$. This is given by: $$C_A = C_F[A/F,2.9999,10] = 26\:878[A/F,2.9999,10]$$Using the spreadsheet, we get $C_A = 2\:343.76$ which represents the amount that needs to be withdrawn annually to have nothing left at the end of the period of $10$ years.

# Question 4
>[!exercise|4] Cash Flow Analysis
>The City of Toronto is installing a new outdoor swimming centre by a school. One design being considered is a reinforced concrete pool, which will cost $2,000,000 each year, for 2 years, to prepare the site. When site construction is complete at the end of Year 2, the pool would be installed at a cost of $1,500,000. Thereafter, the inner surface of the pool will need to be refinished and painted every 10 years at a cost of $200,000 per refinishing. Assuming the pool with have an infinite life, what is the present worth of the costs associated with this design? Assume the City uses a 5% interest rate.

>[!claim|*] Solution
>The cash flow diagram is shown below, note that $M$ means millions.
>![[Pasted image 20240520152556.png]]
>As the pool has an infinite life, we will need the following formula that represents an annuity to present value with $N$ being infinite: $$P = \frac{A}{i}$$Where $i$ is the interest rate which is $0.05$. Before we apply this formula, we must transform the annuity into its equivalent yearly one, instead of every $10$ years. To do so, we consider the first $\$200\:000$ to be a future value over the first $10$ year period. Hence: $$A_1 = 200\:000(A/F,5\%,10) = 200\:000(0.0795) = \$15\:900$$Where $A_1$ is what we were looking for. We note that it begins at year $2$. Turning $A_1$ into a present cost will set that value at year $1$, which we will denote as $F_1$. We then turn $F_1$ into the present cost. Using the formula for infinite $N$, we have: $$P = F_1(P/F,5\%,1) = \frac{A}{i}(0.9524) = \frac{15\:900}{0.05}(0.9524) = \$302\:863.2$$Which gives us the present cost of the infinite annuity payment. 
>
>For the single payment of $1.5M$, we use the table to turn it into present value: $$P= 1\:500\:000(P/F,5\%,2) = 1\:500\:000(0.9070) = \$1\:360\:500$$Lastly, the two annual payments of $2M$ can be easily made into the present cost: $$P = 2\:000\:000(P/A,5\%,2) = 2\:000\:000(1.8594) = \$3\:718\:800$$Thus the overall present cost $C$ is: $$C = 302\:863.2+1\:360\:500+3\:718\:800 = \$5\:382\:163.2$$  

# Question 5
>[!exercise|5] Comparison Methods
>The City of Halifax is evaluating two alternatives for their municipal waste disposal. The first involves developing a landfill site. The site costs include $1,000,000 in start-up costs, $100,000 in closedown costs 30 years from now, and $20,000 in annual operating costs. The site will then start charging user fees after the first 10 years (ie, first cash in-flux at the end of Year 11) and is expected to generate annual revenue of $30,000. The alternative to this is to ship the waste out-of-region. A local firm has agreed to a long-term contract to dispose of the waste for $130,000 per year. Using the _annual worth_ method, which alternative is economically preferred if the city's MARR is 11%? Would this likely be the actual preferred choice?

>[!claim|*] Solution
>The cash flow diagram for both options are shown below ($M$ means million):
>![[Pasted image 20240520175001.png]]
>
>Let the annual worth of the landfill site be denoted as $W_L$ and the annual worth of the transportation method be denoted as $W_T$. A negative value means that it will cost the city of Halifax. Thus: $$W_L = -1\:000\:000(A/P,11\%,30) - 100\:000(A/F,11\%,30)-20\:000+x$$Where $x$ is the annual worth of the income from the landfill site. To find it, we compute the following: $$x =\big([30\:000(P/A,11\%,20)](P/F,11\%,10) \big ) \cdot(A/P,11\%,30) = \$9\:676.13$$Thus: $$W_L = -\$115\:000-\$290-\$20\:000+\$9\:676.13 = -\$125\:613.87$$
>$W_T$ is trivial to calculate: $$W_L = -\$130\:000.00$$We can clearly see that, using the annual worth method, the development of a landfill site would cost the city less dollars per year compared to transporting the waste. Hence, **developing a landfill site is the economically preferred option**.
>
> Since these two projects have the same lifespan, the annual worth method will produce the preferred answer.


