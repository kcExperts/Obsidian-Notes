Note that the spreadsheet interprets $2.9999\%$ as $3\%$.
>[!claim|*] Solution to part A
>Here we use the following formula to get the effective interest rate: $$i_e = \left(  1 + \frac{r}{m} \right)^m-1$$Clearly $r = 0.03$ and $m = 2$. Hence: $$i_e = \left(1+\frac{0.03}{2}\right)^2 -1 = 0.0302 = 3.02\%$$With this, we calculate the amount of money $M$ in the account at the end of $10$ years: $$M = 20\:000 [F/P,3.02,10] $$Using the interest spreadsheet, we get $M = \$26\:930$ which represents the value that we would have in the account after $10$ years.
>

>[!claim|*] Solution to part B
>Using $r = 0.029778$ and $m =2$, we calculate the effective interest rate: $$i_e = \left(  1+ \frac{0.029778}{2} \right) ^2-1 = 0.029999 = 2.9999\%$$Now we note that $\$1\:000$ is taken out at the end of each year (so from year $1$ until the last year). This represents an annuity and we will transform this to the future cost at year $10$ ($C_F$). Hence $C_F = 1\:000[F/A,2.9999,10]$. Using the spreadsheet, we get $C_F = \$11\:463.8$. We also transform our initial investment of $\$20\:000$ into what we will have after $10$ years ($I_F$). Hence $I_F = 20\:000[F/P,2.9999,10]$. Using the spreadsheet, we get $I_F = \$26\:878$. The money in the account $M$ is given by $$M = I_F - C_F = 26\:878 - 11\:463.8 = \$15\:414.2$$Thus after $10$ years, we would have $\$15\:414.2$ left in the account. 

>[!claim|*] Solution to part C
>Since $r$ and $m$ are identical, $i_e$ will also be the same. The goal here is to find the amount that needs to be withdrawn to be left with $\$0$ in the account. Based off of part B, we must have $C_F = \$26\:878$. All we need to do is calculate the annuity $C_A$. This is given by: $$C_A = C_F[A/F,2.9999,10] = 26\:878[A/F,2.9999,10]$$Using the spreadsheet, we get $C_A = 2\:343.76$ which represents the amount that needs to be withdrawn annually to have nothing left at the end of the period of $10$ years.


