# Question 1
>[!exercise|1] IRR/ERR
>Eclipse Corp. is considering taking over a contaminated building site on a former mining site. In exchange for $10,000,000 from the mining company now, Eclipse will invest $8,000,000 per year for the following 3 years to clean up the site. Once the site is clean at the end of year 3, it will receive a further $15,000,000 from the mining company. Over the following 2 years, Eclipse will invest $5,000,000 per year to construct a race-track on the site. The new track will last forever and net $1,000,000 per year for Eclipse from gambling revenues starting at the end of year 6. If Eclipse's MARR is 10%, what is the exact ERR for this project? Should Eclipse proceed with the project?

>[!claim|*] Solution
>First, we draw a cash flow diagram, shown below:
>![[Pasted image 20240604175811.png]]
>Firstly, notice that we have an infinite annuity. We cannot use the standard $P = A/i$ formula to get the value of the infinite annuity as we would be moving back in time, which is not allowed. We need to handle this at the end. 
>
>We now need to transform this into a standard cash flow diagram. To do so, we apply the following procedure: 
>- “*Move cash flows forward in time starting with Year 0, moving to 1, and if that does not produce a standard cash flow, continue moving forward year by year until you achieve a standard cash flow.*”
>
>**Year 0 to year 1**: $$\text{Net Value at Year 1}=10\:000\:000(F/P,10\%,1)-8\:000\:000 = \$3\:000\:000$$**Year 1 to year 2**:  $$\text{Net Value at Year 2} = 3\:000\:000(F/P,10\%,1) - 8\:000\:000 = -\$4\:700\:000$$**Year 2 to year 3**: $$\text{Net Value at Year 3}= -4\:700\:000(F/P,10\%,1) + 7\:000\:000= \$1\:830\:000$$**Year 3 to year 4**:$$\text{Net Value at Year 4}= 1\:830\:000(F/P,10\%,1) -5\:000\:000 = -\$2\:987\:000$$One might think we end here, after all, a standard cash flow has been reached. However, we continue to year $5$ as it will still net a negative cash flow (leading to an overall standard cash flow)
>
>**Year 4 to year 5**: $$\text{Net Value at Year 5}= -2\:987\:000(F/P,10\%,1)-5\:000\:000 = -\$8\:285\:700$$With this, we have a standard cash flow. From here, to get the precise (exact) ERR, we need only follow the IRR process now. To handle the infinite annuity, we apply the formula but use $i^*$ instead and find its value. $$0= -8\:286\:700  +\frac{1\:000\:000}{i^*} \implies i^* = \frac{1\:000\:000}{8\:286\:700} \approx 0.1207  = 12.07\%$$The project has an ERR of $12.07\%$. Since this percentage is greater than the MARR, Eclipse Corp should proceed with the project. 
>
>Alternatively, you could have stopped at year $4$ and the answer would be *about* the same: $$0=-2\:987\:000-5\:000\:000(P/F,i^*,1)+\frac{1\:000\:000}{i^*}(P/F,i^*,1) \implies i^* \approx 0.1198 = 11.98\%$$There will be a rounding error so doing the original method of putting to year $5$ is superior.

# Question 2
>[!exercise|2]
>Rideau Shipyard is considering the purchase of a 25-tonne ship hoist. The first cost is expected to be $230,000, with net savings of $35,000 per year over the 12-year life of the hoist. The salvage value is predicted to be $30,000. Assuming Rideau has an after-tax MARR of 8% and is taxed at 45%, what is the present worth of this project? Should they buy the hoist?

>[!claim|*] Solution
>As mentioned in class, the CTF and CSF are needed for a complete tax analysis. To do so, we need to find the depreciation value $d$ given by the declining-balance depreciation. This is given by: $$d= 1 - \sqrt[n]{\frac{S}{P}} = 1-\sqrt[12]{\frac{30\:000}{230\:000}}\approx0.1561$$Note that $d= 0.1561$ will be used for the rest of the question. Now with this, we can find the CTF and CSF knowing that $i =0.08 \; \land \; t = 0.45$: $$\text{CTF} = 1 - \frac{td(1+\frac{i}{2})}{(i+d)(1+i)} = 1- \frac{(0.45)(0.1561)(1+\frac{0.08}{2})}{(0.08+0.1561)(1+0.08)} \approx0.7135$$$$\text{CSF} = 1 - \frac{td}{(i+d)} = 1-\frac{(0.45)(0.1561)}{(0.08+0.1561)} \approx 0.7025$$As usual, the rounded values will be used. With these values, we can complete our tax calculations:
>
>**First Cost**: We have: $$PW_{FC} = -230\:000(0.7135)=-\$164\:105.00$$**Annual Savings**: We have: $$PW_{AS} = [35\:000(1-0.45)] \cdot(P/A,8\%,12) = \$145\:069.93$$**Salvage Value**: We have: $$PW_{SV} = [30\:000 (0.7025)]\cdot(P/F,8\%,12) = \$8368.88$$
>We now get the overall $PW$: $$PW = PW_{FC} + PW_{NS} + PW_{SV} = -\$164\:105.00+\$145\:069.93+\$8368.88 = -10\:666.19$$We see that the after-tax present worth of the project is $-\$1666.19$. Thus Rideau should **not** buy the hoist.

# Question 3
>[!exercise|3] Replacement Decisions
>Your company's existing belt conveyor system cost $60,000 to purchase and $100,000 to install when they acquired it 7 years ago. The market value of the system is now $33,000, and its value will continue declining at 12% of its value each year, for the next 3 years. Operating and maintenance costs are estimated to be $3400 this year, increasing by $500 per year, each year.
>
a) How much should the EAC of a new roller conveyor system be over its economic life to justify replacing the old one sometime in the next 3 years, if the MARR is 10%?
>
b) Assuming the EAC for a new roller conveyor system is determined to be $10,300 for a 10-year life, should the old system be replaced within the next 3 years? If so, when?
>
c) Is it necessary to consider replacing the old conveyor system more than 3 years from now, given that the new one has an EAC of $10,300?

For part A
![[Pasted image 20240620132726.png]]

>[!claim|*] Solution to part A
>Let me be clear, the wording of the question heavily confuses me and I do not really know what it is asking. I am going to **assume** that the question wants me to find the maximum EAC of the new roller conveyor system that would make it a justifiable to replace the old system within the next $3$ years, considering a MARR of $10\%$. 
>
>
>Let us find the EAC of the next $3$ years.
>We will start by finding the EAC from the current year (assume that the present is year $0$). Before that, the salvage value for this year is $33\:000(1-0.12) = \$29040$, thus: $$\begin{array}{ccc} \text{EAC}_{\text{capital}}(1) = (33\:000- 29040 )(A/P,10\%,1) + 29040(0.1) =\$7260 \\ \text{EAC}_{\text{O\&M}}(1) = \$3400 \\ \text{EAC}(1) =\$10\:660 \end{array}$$
>The salvage value for the second year is $33\:000(1-0.12)^2 = \$25\:555.20$, thus: $$\begin{array}{ccc} \text{EAC}_{\text{capital}}(2) = (33\:000-25\:555.20)(A/P,10\%,2)+25\:555.20(0.1) = \$6845.21 \\ \text{EAC}_{\text{O\&M}}(2) = 3400+500(P/G,10\%,2)(A/P,10\%,2) = \$3638.09  \\ \text{EAC}(2) = \$10\:483.3\end{array}$$The salvage value for the third year is $33\:000(1-0.12)^3 = \$22\:488.58$, thus:  $$\begin{array}{ccc} \text{EAC}_{\text{capital}}(3) = (33\:000-22\:488.58)(A/P,10\%,3)+22\:488.58(0.1) = \$6475.50 \\ \text{EAC}_{\text{O\&M}}(3) = 3400+500(P/G,10\%,3)(A/P,10\%,3) = \$3868.27\\ \text{EAC}(3) = \$10\:343.77\end{array}$$Thus the **new roller conveyor system** should have an EAC of less than $10\:343.77$ to justify a replacement within the next $3$ years. 

>[!claim|*] Solution to part B
>Step $1$ requires the EAC of the challenger, which is $\$10\:300$. Step $2$ needs us to get the remaining EAC of the defender, which we have already determined (in part A) to be $\$10\:343.77$ (for the next $3$ years). Step $3$ says that if the EAC of the defender is greater than the EAC of the challenger, than we must replace the defender now. Since this holds true in our case, the old system should be replaced immediately.

**NOTE: What I have for part C is not really what they wanted. The answer is yes because the EAC’s that we found did not contain a minimized value, hence we need to keep going to find that minimum EAC**.

>[!claim|*] Solution to part C
>Here we will continue to calculate the EAC of the defender assuming that the value continues to depreciate at $12\%$ of its value each year. To do so, I have written a Desmos program to output the EAC of each year given some $N$.
>
>From this, we have: $$\begin{array}{ccc}  EAC(4) =\$10\:236.96\\ EAC(5)=\$10\:157.82\\ EAC(6)= \$10\:102.55 \\ EAC(7) = \$10\:067.66 \\ EAC(8) = \$10\:050.11 \\ EAC(9) = \$10\:047.23  \; \; \;\text{(minimized)}\\ EAC(10)=\$ 10\:056.66 \\ EAC(16) = \$10\:273.89\\ EAC(17) = \$10\:324.83 \end{array}$$As we can see, $17$ years from now, the EAC of the defender will be higher than the EAC of the challenger. Hence **it is** necessary to consider replacing the old conveyor system more than $3$ years from now, given that the new one has an EAC of $\$10\:300$. 

# Question 4
>[!exercise|4] Inflation
>In 10 years, South Pacific Inc. will be investing $200,000 USD either in the Marshall Islands or in Fiji. The exchange rate between US Dollars (used in the Marshall Islands) and Fijian Dollars is fixed at $2 FJD = $1 USD. Assume that the 2 currencies can be exchanged at no cost.
>
>If the $200,000 is invested in the Marshall Islands, each dollar is expected to return $0.30 USD per year for the following 5 years. If the $200,000 is converted to FJD and invested, each Fijian dollar is expected to return $0.24 FJD per year for 7 years. The Marshall Islands experiences an average inflation rate of 4%, while Fiji averages 2% in inflation. If the real MARR for South Pacific Inc. is 10%, which investment is preferred? How much should South Pacific set aside now (in their bank account at the MARR until it is deployed in the investment) to ensure that it has enough money to make the investment in 10 years?
>
>_(Hint: South Pacific's home country can be ignored in answering this question)_


>[!claim|*] Solution to part A
>Notice that the investment will happen in $10$ years. Thus, in a cash flow diagram, the whole problem would start at year $10$ and **not** year $0$. **HOWEVER**, when evaluating the investment, it will only be evaluated starting from the initial investment as in the first $10$ years, we are not actually doing anything (so how could there be an annual worth?). From here, there are $3$ strategies we can do to compare these projects:
>1. $AW$ method (has the advantage of not needing repeated lives method)
>2. Repeated lives to $PW$ (very tedious).
>3. IRR analysis (a modest choice, but for our case, $AW$ is better).
>
>We will go with the $AW$ method as it is the easiest. Now real dollars are used when we do not know for sure what the return or cost will be in the future as we will estimate it based off of present factors. Actual dollars are used when we are sure what we will invest and the returns we will get. Based of this, the cost of $\$200\:000$ and the returns will **all** be actual dollars. Because of this, the $\text{MARR}_{\text{actual}}$ needs to be found: $$\begin{array}{ccc}  \text{MARR}_{\text{actual Marshall Island}} = 0.1 +0.04+(0.1 \times 0.04) = 0.144 = 14.4\% \\ \text{MARR}_{\text{actual Fiji}} = 0.1 +0.02+(0.1 \times 0.02) = 0.122 = 12.2\% \end{array}$$
>
>**Marshall Islands**:
>The return on the initial investment (for the period of $5$ years following the investment) is $\$60\:000/\text{y}$. From this, the annual worth is trivially given by: $$AW_M = -200\:000 (A/P,14.4\%,5)+60\:000 = \$1180 \; \text{USD}$$
>
>**Fiji**:
>Here the calculations will be done in FJD turning only the final answer to USD for comparison purposes. With an initial investment of $\$400\:000$ FJD, we get yearly returns of $\$96\:000$ FJD. The annual worth is trivially given by: $$AW_F = \left[  -400\:000(A/P,12.2\%,7)+96\:000 \right] \times \frac{1 \; \text{USD}}{2 \; \text{FJD}} = \$3900 \; \text{USD} $$
>
>In all, we see the investing in Fiji will give the best annual returns.
>

>[!claim|*] Solution to part B
>Here we need to determine how much South Pacific should set aside now to ensure that it has enough money to make the investment in $10$ years. 
>
>Since the home country of South Pacific can be ignored, I will use the real MARR given to us to find the answer. This answer is given by $I$ in: $$I = 200\:000 (P/F,0.1,10) = \$77\:100 \; \text{USD}$$
>Thus South Pacific should set aside $\$77\:100$ USD now to ensure that it has enough money to make the investment in $10$ years. 

# Question 5
>[!exercise|5] Risk and Uncertainty
>Appalachian Adventure Wear sells outdoor clothing through a call centre. Its managers are upgrading their order-processing centre so that they have less chance of losing customers from putting them on hold. Before switching to the upgraded system, Appalachian has the option of testing the new system. The test will cost them $50,000, which includes the testing fees and loss of business from shutting down operations during the test.
>
If Appalachian does not test the system, there is a 55% chance of severe failure (costing $150,000 in repairs and lost business), a 35% chance of minor failure (costing $35,000 in repairs and lost business), and a 10% chance of no failure.
>
If Appalachian does test the system, the results can be favourable with a probability of 0.34, requiring no further modifications, or unfavourable with a probability of 0.66. In the case of an unfavourable test, Appalachian has 2 options: a minor modification costing $5,000 or a major modification costing $30,000. After the minor modification, there is still a 15% chance of severe failure, a 45% chance of minor failure, and a 40% chance of no failure. Finally, after the major modification, there is still a 5% chance of severe failure, a 30% chance of minor failure, and a 65% chance of no failure. Refer to the above paragraph for the costs associated with each severity of failure.
>
What is the recommended action for Appalachian, using a decision tree analysis?

>[!claim|*] Solution
>The decision tree of the problem is as follows:
>![[Pasted image 20240612180933.png]]
>
>Let us go about calculating the expected values of each node to determine the best option where $EV_i$ denotes the expected value of the $i^{th}$ node. **The expected value of the node will include the decision cost with it. So, for example, the expected value of node $6$ will include the minor modification cost**: $$\begin{array}{ccc} EV_6 = 0.15(-150\:000)+0.45(-35\:000)+0.40(0) -5000 = -43\:250 \\ EV_5 = 0.05(-150\:000)+0.30(-35\:000)+0.65(0) - 30\:000 = -48\:000 \\  \end{array}$$Thus the best value for node $4$ is going with $EV_6$, hence: $$EV_4 = EV_6$$With this: $$EV_3 = 0.66(EV_4)+0.34(0) -50\:000= -78\:545$$Now for the no-test option: $$EV_2 = 0.55(-150\:000)+0.35(-35\:000)+0.10(0) =-94\:750$$Since $EV_3 < EV_2$, we have: $$EV_1 = EV_3$$Analyzing our values, the recommended action for Appalachian is as follows:
>1. Conduct tests;
>2. If the outcome is unfavorable, perform **minor modifications**.

