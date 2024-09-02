All assets eventually require replacement. Consequently, the issue is not whether to replace it but *when* to replace it. 

>[!asm|*] 
>For this section, we consider the case where there is an ongoing need for a service provided by an asset and where the asset technology is **not** changing rapidly. Several assumptions are made:
>1. The defender and challenger are assumed to be technologically identical. We assume that this remains true for the company’s entire planning horizon;
>2. The lives of these assets are assumed to be short relative to the time horizon over which the assets are required (useful life $<<$ needed life);
>3. Relative prices and interest rates are assumed to be constant over the company’s time horizon.

The first and second assumption model the replacement decision as being repeated an indefinitely large number of times. 

>[!exm|1]-
>Jiffy in considering installing an automated plastic molding system with the following costs:
>- Initial Cost of $\$200\:000$;
>- Installation cost of $\$50\:000$;
>- Operating and maintenance costs of $\$300\:000$ in the first year and raise at a rate of $5\%$ per year;
>- Depreciation using [[Declining-Balance Depreciation|DBD]] model to be $40\%$;
>- [[Minimum Acceptable Rate of Return|MARR]] of $15\%$;
>
>Assuming that there will be an ongoing need for the molder and that the technology does not change, how long should Jiffy keep a molder before replacing it with a new model (what is the economic life of the automated molding system)?

>[!claim|*]- Solution
>Since the economic life is found by minimizing the [[Equivalent Annual Cost|EAC]], we must first find it: $$\text{EAC} = \text{EAC(capital costs)} + \text{EAC(operating and maintenance)}$$Firstly, we find the EAC associated to the capital costs, given by: $$\text{EAC(capital costs)} = (P-S)(A/P,i,N)+Si$$As we need to find $N$, these computations are easier done using a spreadsheet (find $N$ that minimizes the EAC). In all, we get $6$ years with an EAC of $\$398\:227$.

>[!exm|2]- Actually finding the EAC
>An asset is purchased for $\$72\:000$ and costs $\$3220$ to install. At the end of its $10$-year service life, the salvage value is estimated to be $\$8077$. The annual operating and maintenance (O&M) costs are expected to be $\$2000$ for the first $5$ years, increasing by $\$3500$ per year starting in year $6$. Assuming a MARR of $12\%$, what is the economic life of this asset?
>![[Pasted image 20240529142852.png]]
>Recall that first cost usually includes the O&M costs.

>[!claim|*]- Solution
>To find the economic life, we need to minimize the [[Equivalent Annual Cost|EAC]]: $$\text{EAC} = \text{EAC(capital costs)} + \text{EAC(operating and maintenance)}$$Let us first get the EAC capital costs: $$\text{EAC(capital costs)} = (P-S)(A/P,i,N)+Si$$Notice that we do not have a salvage value **for the end of each year**. Thus, we assume that we sell it at the end of the year. Recalling that it will depreciate differently for every year, we must get those values. Recall the [[Declining-Balance Depreciation|DBD]] (we use book value calculation): $$S(n) = 72000(1-d)^n$$We need to find $d$, which we recall: $$d= 1 - \sqrt[n]{\frac{S}{P}} = 1-\sqrt[10]{\frac{8077}{72000}} \approx 0.20 = 20\%$$Where $S$ is the salvage value at the end of its useful life. Thus: $$S(1) = \$57\:600 = S_1$$We have: $$EAC(1) = (P+I-S_1)(A/P,12\%,1)+S_1(0.12)+2000 = \$28\:646$$Where the $2000$ is the O&M costs. Now we need to look at every year, year over year to minimize the EAC. 
>$$EAC(2) = (P+I-S_2)(A/P,12\%,2)+S_2(0.12)+2000 = \$24 \:772$$
>We continue to do this. One thing  to note is that when we get to the $6^{th}$ year. We do not simply add on $3500$, we must add on: $$3500(A/F,12\%,6) = 3500(P/G,12\%,2)(P/F,12\%,4)(A/P,12\%,6)$$**A/P ONLY WORKS FOR YEAR 6**. For the following years, we recall that the gradient starts $2$ years before the first cash flow. For example, year $7$, we would add: $$3500(P/G, 12\%,3)(P/F,12\%,4)(A/P,12\%,7)$$Which will get us the annual cash flow over the $7$ years and so on so forth. 
>
>Overall we find that the economic life is $8$ years at $\approx \$18\:008$.



