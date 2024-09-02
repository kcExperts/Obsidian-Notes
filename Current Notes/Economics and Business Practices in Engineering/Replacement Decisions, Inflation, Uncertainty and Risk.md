# Replacement Decisions

>[!def|*] Equivalent Annual Cost
>The equivalent annual cost (EAC) is the annual worth calculation in the context of a replacement study. It is basically nothing more than the annual worth approach with a different name adopted for use in the replacement studies.

A formula (although there exist others) to calculate the EAC is: $$\text{EAC} = \text{EAC(capital costs)} + \text{EAC(operating and maintenance)}$$$$\text{EAC(capital costs)} = (P-S)(A/P,i,N)+Si$$where:
- $\text{EAC(capital costs)} =$ annualized capital costs for an $N$-year replacement period;
- $P =$ purchase price;
- $S =$ salvage value of the asset at the end of $N$ years.
- **If installation costs exist, then we get $(P+I-S)$.

>[!def|*] Economic Life
>The economic life of an asset is the service life that minimizes the average cost of using the asset. In other words, it is the number of years that minimizes the $\text{EAC(capital costs)}$.

##### Defender and Challenger are Identical
All assets eventually require replacement. Consequently, the issue is not whether to replace it but *when* to replace it. 

>[!asm|*] 
>For this section, we consider the case where there is an ongoing need for a service provided by an asset and where the asset technology is **not** changing rapidly. Several assumptions are made:
>1. The defender and challenger are assumed to be technologically identical. We assume that this remains true for the company’s entire planning horizon;
>2. The lives of these assets are assumed to be short relative to the time horizon over which the assets are required (useful life $<<$ needed life);
>3. Relative prices and interest rates are assumed to be constant over the company’s time horizon.

The first and second assumption model the replacement decision as being repeated an indefinitely large number of times. 

>[!exm|1]
>Jiffy in considering installing an automated plastic molding system with the following costs:
>- Initial Cost of $\$200\:000$;
>- Installation cost of $\$50\:000$;
>- Operating and maintenance costs of $\$300\:000$ in the first year and raise at a rate of $5\%$ per year;
>- Depreciation using [[Declining-Balance Depreciation|DBD]] model to be $40\%$;
>- [[Minimum Acceptable Rate of Return|MARR]] of $15\%$;
>
>Assuming that there will be an ongoing need for the molder and that the technology does not change, how long should Jiffy keep a molder before replacing it with a new model (what is the economic life of the automated molding system)?

>[!claim|*] Solution
>Since the economic life is found by minimizing the [[Equivalent Annual Cost|EAC]], we must first find it: $$\text{EAC} = \text{EAC(capital costs)} + \text{EAC(operating and maintenance)}$$Firstly, we find the EAC associated to the capital costs, given by: $$\text{EAC(capital costs)} = (P-S)(A/P,i,N)+Si$$As we need to find $N$, these computations are easier done using a spreadsheet (find $N$ that minimizes the EAC). In all, we get $6$ years with an EAC of $\$398\:227$.

>[!exm|2] Actually finding the EAC
>An asset is purchased for $\$72\:000$ and costs $\$3220$ to install. At the end of its $10$-year service life, the salvage value is estimated to be $\$8077$. The annual operating and maintenance (O&M) costs are expected to be $\$2000$ for the first $5$ years, increasing by $\$3500$ per year starting in year $6$. Assuming a MARR of $12\%$, what is the economic life of this asset?
>![[Pasted image 20240529142852.png]]
>Recall that first cost usually includes the O&M costs.

>[!claim|*] Solution
>To find the economic life, we need to minimize the [[Equivalent Annual Cost|EAC]]: $$\text{EAC} = \text{EAC(capital costs)} + \text{EAC(operating and maintenance)}$$Let us first get the EAC capital costs: $$\text{EAC(capital costs)} = (P-S)(A/P,i,N)+Si$$Notice that we do not have a salvage value **for the end of each year**. Thus, we assume that we sell it at the end of the year. Recalling that it will depreciate differently for every year, we must get those values. Recall the [[Declining-Balance Depreciation|DBD]] (we use book value calculation): $$S(n) = 72000(1-d)^n$$We need to find $d$, which we recall: $$d= 1 - \sqrt[n]{\frac{S}{P}} = 1-\sqrt[10]{\frac{8077}{72000}} \approx 0.20 = 20\%$$Where $S$ is the salvage value at the end of its useful life. Thus: $$S(1) = \$57\:600 = S_1$$We have: $$EAC(1) = (P+I-S_1)(A/P,12\%,1)+S_1(0.12)+2000 = \$28\:646$$Where the $2000$ is the O&M costs. Now we need to look at every year, year over year to minimize the EAC. 
>$$EAC(2) = (P+I-S_2)(A/P,12\%,2)+S_2(0.12)+2000 = \$24 \:772$$
>We continue to do this. One thing  to note is that when we get to the $6^{th}$ year. We do not simply add on $3500$, we must add on: $$3500(A/F,12\%,6) = 3500(P/G,12\%,2)(P/F,12\%,4)(A/P,12\%,6)$$**A/P ONLY WORKS FOR YEAR 6**. For the following years, we recall that the gradient starts $2$ years before the first cash flow. For example, year $7$, we would add: $$3500(P/G, 12\%,3)(P/F,12\%,4)(A/P,12\%,7)$$Which will get us the annual cash flow over the $7$ years and so on so forth. 
>
>Overall we find that the economic life is $8$ years at $\approx \$18\:008$.

##### Challenger is different from Defender; Challenger repeats indefinitely
The decision rule that minimizes cost in the case where a defender is faced by a challenger that is expected to be followed by a sequence of identical challengers is as follows:
1. Determine the economic life of the challenger and its associated [[Equivalent Annual Cost|EAC]].
2. Determine the remaining economic life of the defender and its associated EAC.
3. If the EAC of the defender is greater than the EAC of the challenger, replace the defender now. Otherwise, do not replace now.

# Inflation

>[!def|*] Inflation Rate
>The inflation rate is the rate of increase in average prices of goods and services over a specified period of time (usually a year).

Since inflation doesn’t affect every good or service equally during the same time period, extra work needs to be done. 

>[!def|*] Consumer Price Index
>Economists define a representative set of goods and services that most people use and track how many items in that “basket” increase or decrease in price. This basket forms the basis for the consumer price index (CPI). The CPI for a given period relates the average price of a fixed basket of these goods in the given period to the average price of the equivalent basket in a base year. We have: $$\text{CPI} = 100 \left( \frac{\text{Current \$}}{\text{Base year \$}} \right) $$

>[!exm|*] CPI
>Suppose that a product cost $\$100$ in 2002 and that the CPI in March 2024 is $159.8$. Then the price of that product today would be $\$159.8$ as: $$\text{Current \$} = \frac{\text{CPI}}{\text{100}} \cdot \text{Base year \$} = \frac{159.8}{100} \cdot 100 = \$159.8$$

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

>[!claim|*] Solution
>Let us get the real amount with respect to the base year 2002. From there, a comparison will get us our answer. Thus: $$R_{0,2015} = \frac{60000}{\frac{126.6}{100}}=\$47\:393.36$$And: $$R_{0,2018} = \frac{62000}{\frac{143.4}{100}} = \$43\:235.70$$From this, we clearly see that you were better off in 2015.

Note that at the base year, $R = A$.

>[!def|*] Current/Actual Interest Rate
>The actual interest rate $i$ is the stated or observed interest rate based on current dollars. 

>[!def|*] Real Interest Rate
>The real interest rate $i’$ is the interest rate that would yield the same number of [[Real and Actual Dollars|Real Dollars]] in the absence of inflation: $$i' = \frac{1+i}{1+f}-1$$Where we recall that $f$ is the inflation rate.

The same formula holds if $i' = \text{MARR}_{\text{R}}$ and $i = \text{MARR}_{\text{A}}$ and similarly for the [[Internal Rate of Return|IRR]].

>[!rmk|*] Relationship between the real and current IRR
>The relationship is: $$\text{IRR}_A=\text{IRR}_R+f+(\text{IRR}_R \cdot f)$$

Again, this works using the MARR.

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

>[!claim|*] Solution using Method 1
>Here we will convert everything to [[Real and Actual Dollars|Real Dollars]]. Hence we must convert everything to a real amount. From the example diagram, $S$ and $G$ will need to be converted as they are stated in [[Real and Actual Dollars|Actual Dollars]]. We use: $$R_N = \frac{A_N}{(1+f)^N}$$For a single cash flow, this is simple, but for $G$, it is more complicated as we have to do it **year by year**. For example, $G_A(2) = 27000$. Thus: $$G_R(2) = \frac{G_A(2)}{(1+f)^2} = \frac{27000}{(1+0.018349)^2} \approx \$26\:036$$Skipping the math, $S_R \approx \$15\:686$. From here, we proceed with a normal analysis and get the answer (using PW or AW).

>[!claim|*] Solution using Method 2
>Here we convert to actual dollars. Thus the initial cost is good and so is $G$ and $S$. Now we need only convert the $20\:000$ annuity. Recall: $$A_N = R_N(1+f)^N$$For example, $A_R(2) = 20\:000$ so: $$A_A(2) = A_R(2)(1+f)^N = 20000(1+0.018349)^2 \approx \$20\:741$$Repeating this for each one will then give us what we need to do our actual analysis. Use the excel interest spreadsheet to speed this up as: $$(1+f)^N = (F/P,f,N)$$We also need to find the actual MARR: $$\text{MARR}_A=\text{MARR}_R+f+(\text{MARR}_R \cdot f)$$

>[!claim|*] Solution using Method 3
>Here we need to find the actual MARR: $$\text{MARR}_A=\text{MARR}_R+f+(\text{MARR}_R \cdot f) \approx 0.11 = 11\%$$Now we proceed with a normal cash flow analysis, but this time vary whether we use the actual or real MARR depending on if the cash flow is actual or real.

# Dealing with Uncertainty and Risk
>[!def|*] Sensitivity Graph
>A sensitivity graph is used to assess the effect of a one-at-a-time change in key parameter values of a project on an economic performance measure.

>[!def|*] Break-Even Analysis
>A break-even analysis is the process of varying a parameter of a problem and determining what parameter value causes the performance measure to reach some “break-even” value. This method can be applied to multiple projects.


>[!def|*] Decision Tree
>A decision tree is a graphical representation of the logical structure of a decision problem in terms of the sequence of decisions to be made and outcomes of chance events. Each branch of the tree is a series of conditional probability statements. The conditioning is mapped out by each branch of the tree.

>[!def|*] Components of a Decision Tree
>In a decision tree, we have many components described below:
>- **Decision Node**: Denoted by a *square*, represents a decision to be made by the decision maker.
>- **Chance Node**: Denoted by a *circle*, represents an event whose outcome is uncertain.
>- **Branches**: *Lines* connecting nodes from left to right, representing the sequence of possible decisions and chance events.
>	- A chance node following a decision node implies the decision maker must anticipate the future outcome. 
>	- A decision node following a chance node implies the decision maker knows the future outcome.
>- **Leaves**: Indicate the values/payoffs associated with terminal branch of the tree.
>  
>  A decision tree grows from left to right and *usually* begins with a decision node.
>  ![[Pasted image 20240603175723.png]]

>[!def|*] Decision Process
>1. **Structure the problem**: Develop a decision tree.
>2. **Rollback**: Moving from *right* to *left* on the tree, we:
>	-At each chance node, compute the expected value of the possible outcomes;
>	At each decision node, select the option with the best expected value (this becomes the value associated with that node) and mark options not selected with a double slash (//) to represent branches not pursued.  
>	Continue until the leftmost node is reached.
>3. **Conclusion**: The expected value of the final node is the expected value of the overall decision.

Recall that the expected value $E(X)$ is given by: $$E(X) = \sum x\cdot p(x)$$Where:
- $x$ is a numbered event;
- $p(x)$ is the [[Probability Function]] evaluated at the specified $x$.
- $E(X)$ is the [[Expected Value]].

During an analysis, one would start from the *right* and move to the *left*. Compute the expected value for the nodes on the same depth. That will then be the expected value of the next node. If a decision needs to be made, choose the path with the highest expected value. 

The expected value of the leftmost node is the expected value of the overall decision.