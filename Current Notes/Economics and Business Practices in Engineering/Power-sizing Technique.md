
>[!def|*] Power-Sizing Technique
>This technique, also referred as the exponential model, is frequently used for developing capital investment estimates for industrial plants and equipment. This CER recognizes that cost varies as some power of the change in capacity or size.
>

The equation is given by: $$\frac{C_A}{C_B} = \left(  \frac{S_A}{S_B} \right) ^X$$
Where:
- $C_A$ is the cost for plant $A$
- $C_B$ is the cost for plant $B$
- $S_A$ is the size of plant $A$
- $S_B$ is the size of plant $B$
- $X$ is the cost-capacity factor (reflects economies of scale). This factor depends on the type of plant or equipment being estimated (for example $X=0.68$ for nuclear power plants)

Note that $X<1$ indicates decreasing economies of scale and $X > 1$ indicates increasing economies of scale (each additional unit of capacity costs more than the previous unit).

>[!exm|*]
>Suppose that an aircraft manufacturer desires to make a preliminary estimate of the cost of building a $600$ megawatt fossil-fuel plant for the assembly of its new long-distance aircraft. It is known that a $200$ megawatt plant costs $\$100$ million $20$ years ago when the approximate cost index was $400$, and that cost index is now $1\:200$. The cost capacity factor for a fossil-fuel power plant is $0.79$.

>[!claim|*]- Solution
>We first need to find the cost of the plant in the present time as we only know the cost of the plant $20$ years ago. To do this, we apply the [[Indexes]] formula: $$C_p = 100\:000\:000 \left(  \frac{1\:200}{400} \right) = \$300\:000\:000$$With this, we use the formula presented in this section with the following inputs:
>- $C_B = 300\:000\:000$
>- $S_A = 600$
>- $S_B = 200$
>- $X = 0.79$
>Thus: $$C_A = 300\:000\:000 \left(  \frac{600}{200} \right)  ^{0.79} = \$714\:573\:729.9$$Thus $C_A$ represents the estimate cost of a $600$ megawatt fossil-fuel power plant.

