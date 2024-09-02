Suppose that we have $n$ routes from $A$ to $B$ and $m$ routes from $B$ to $C$. If we decide to go from $A$ to $C$ via $B$, then for each route that we take from $A$ to $B$, we have $m$ routes to choose from to go to $C$. Thus, altogether, we have $nm$ choices to go from $A$ to $C$. This motivates the following:

>[!theorem|1] Counting Principle
>If the set $E$ contains $n$ elements and the set $F$ contains $m$ elements, there are $nm$ ways in which we can choose, first, an element of $E$ and then an element of $F$. 

>[!claim|*]- Proof
>`\begin{proof}`
>Let $E = \{a_1,a_2,\dots ,a_n\} \; \land \; F = \{b_1,b_2, \dots , b_m\}$. Then the following array, consisting of $nm$ elements, contains all possible combinations of choosing, first, an element of $E$ and then an element of $F$: $$\left[ \begin{array}{ccc} (a_1,b_1), &(a_1,b_2),  & \dots ,& (a_1,b_m)\\ (a_2,b_1), & (a_2,b_2),& \dots,  & (a_2,b_m)\\ \vdots &  &  &  \\ (a_n,b_1) & (a_n,b_2) &\dots  & (a_n,b_n) \end{array} \right]$$`\end{proof}`

One may notice that this appears like the cartesian product. Indeed, suppose that a fourth town $D$ is connected to $C$ by $p$ routes. Then we will have a total of $nmp$ routes from $A$ to $D$. With this, we have:

>[!theorem|2] Generalized Counting Principle
>Let $E_1, E_2, \dots, E_k$ be sets with $n_1, n_2, \dots, n_k$ elements, respectively. Then there are $n_1 \times n_2 \times n_3 \times \dots \times n_k$ ways in which we can, first, choose an element of $E_1$, then an element of $E_2$, then an element of $E_3$, $\dots$, and finally an element of $E_k$. 

In probability, this theorem is used whenever we want to compute the total number of possible outcomes when $k$ experiments are performed. What follows below is a list of examples. Some are important and introduce new ideas (see Example 4, 5,7 and **8**).

>[!exm|1]
>How many outcomes are there if we throw five dice?

>[!claim|*]- Solution
>Suppose we throw the die one after another. Let $E_i:1 \le i \le 5$, be the set of all possible outcomes of the $i^{th}$ die. Then $E_i = \{1,2,3,4,5,6\}$. The number of outcomes of throwing five dice equals the number of ways we can, first, choose an element of $E_1$, then $E_2$, $\dots$, so on so forth until $E_5$. Thus we have: $$|E_1||E_2||E_3||E_4||E_5| = 6^5 \; \text{possible outcomes}$$

>[!exm|2]
>In tossing four fair dice, what is the probability of at least one $3$?

>[!claim|*]- Solution
>Let $E_i:1 \le i \le 4$ be the set of all possible outcomes of the dice, then $|E_i| = 6$. In total, there will be: $$|E_1||E_2||E_3||E_4| = 6^4 \;\text{possible outcomes}$$Now directly finding the number of outcomes that contain $3$ is no easy task. Instead, let us find the total number of outcomes that **do not** contain a $3$. To do so, let $A_i:1 \le i \le 4$ be the set of all possible outcomes of the dice minus the possibility of landing a $3$, Hence $|A_i| = 5$. In total, there are: $$|A_1||A_2||A_3||A_4| = 5^4 \; \text{possible outcomes that do not contain a} \; 3$$Recalling [[Theorems in Probability|Theorem 1.4]], there will be: $$6^4-5^4=671\; \text{possible outcomes that contain at least one}\; 3 = T$$From here, we apply [[Theorems in Probability|Theorem 1.3]] to get: $$P(T) = \frac{N(T)}{N} = \frac{671}{6^4} \approx 0.5177 = 51.77 \%$$

>[!exm|3] Important
>Virginia wants to give her son, Brian, $14$ different baseball cards within a $7$-day period. If Virginia gives Brian cards no more than once a day, in how many different ways can this be done?
>
>(Yes I know this is worded terribly, but this is how it was written in the book)

>[!claim|*]- Solution
>Notice the wording of the problem here. All $14$ cards will be given within the span of $7$ days and every day, a random amount of cards can be given up to $14$ cards in a day. 
>
>Let $E_i = \{1,2,3,4,5,6,7\}$ be the $7$ days. Every one of the $14$ cards, can each be assigned to, say, the first day (or the second, third, so on so forth). Hence each of the cards can be given on $7$ different days. Thus: $$|E_i|^{14} = 7^{14}\; \text{possible combinations}$$

Now let us see how drawing with and without replacement can change an answer.

>[!exm|4] With Replacement
>A box contains $7$ identical balls numbered $1$ through $7$. Three balls are drawn, one by one, at random, and **with replacement**, and their numbers are recorded. What is the probability that:
>1. All three outcomes are odd?
>2. Exactly one outcome is odd?

>[!claim|*]- Solution
>**Part 1**:
>We clearly have $7^3$ possible outcomes. Since there are $4$ odd balls, there is $4^3$ outcomes where all the balls are odd. Hence: $$\frac{4^3}{7^3} \approx0.1866 =18.66\% \; \text{chance of the three outcomes being odd}$$
>**Part 2**:
>There are three setups that allow exactly one odd. Let $\mathcal O$ denote odd and $\mathcal E$ denote even, then the possible setups are: $(\mathcal{OEE}, \mathcal{EOE}, \mathcal{EEO})$. There are $4$ balls that produce an odd number and $3$ that produce an even number. Hence, by the general counting principle, there are $4 \times 3 \times 3 = 36$ ways that give exactly one odd ball for each setup. Thus: $$\frac{(3 \times 36)}{7^3} \approx 0.3149 = 31.49\% \; \text{chance that exactly one ball is odd}$$

>[!exm|5] Without Replacement
>A box contains $7$ identical balls numbered $1$ through $7$. Three balls are drawn, one by one, at random, and **without replacement**, and their numbers are recorded. What is the probability that:
>1. All three outcomes are odd?
>2. Exactly one outcome is odd?

>[!claim|*]- Solution
>**Part 1**:
>Since we draw without replacement, for every $E_i:1 \le i \le 3$, we have: $$|E_1| = 7, \; |E_2| = 6, \; |E_3| = 5$$Hence there are only $7 \times 6 \times 5 = 210$ possible outcomes. A similar idea holds when we take out an odd ball. It will go from $4$ to $3$ to $2$, thus there are $4 \times 3 \times 2 = 24$ possible outcomes where all the balls are odd. Hence: $$\frac{24}{210} \approx 0.1143 = 11.43\% \; \text{chance of all the balls being odd}$$**Part 2**:
>A similar story follows here. Recall from the scenario with replacement that there are $3$ possible setups that gives us what we need. Except here, the number of even balls will decrease by one, thus leaving us with $24$ outcomes for each setup. This gives: $$\frac{3 \times (26)}{210} \approx0.3714 = 31.14\% \; \text{chance of exactly one ball being odd}$$

>[!exm|6]
>Rose has invited $n$ friends to her birthday party. If they all attend, and each one shakes hands with everyone else at the party exactly once, what is the number of handshakes?

>[!claim|*]- Solutions
>**Solution 1**:
>There are $(n+1)$ total people at the party. Each one of them will need to shake $n$ hands. By the counting principle, there will be $n(n+1)$ total outcomes. However, the counting principle is for ordered pairs and here, we do not care about ordering. This means that $A$ shaking’s $B$ hand is the same as $B$ shaking $A$’s hand. Thus the actual amount of handshakes to be done is: $$\frac{n(n+1)}{2}$$**Solution 2**:
>There are $(n+1)$ people. If you shake the hand of everyone there, you have done $n$ handshakes. Now put yourself in the shoes of another person. They only have $(n-1)$ handshakes to do (as we already counted the one you had done to them in the first place). Going down the line like this tells us that the total number of handshakes is: $$n+(n-1)+\dots+2+1$$Notice that equating these two gives the well known relationship.

>[!exm|7] Standard Birthday Problem
>What is the probability that at least two students of a class of size $n$ have the same birthday? Compute the numerical values of such probabilities for $n = 23$. Assume that the birth rates are constant throughout the year and that each year has $365$ days. 

>[!claim|*]- Solution
>Let $E = \{1,2, \dots, 365\}$ be the days of the year. Then $E_i: 1 \le i \le n$ denotes the possible birthdays that each of the $n$ students can have. In total, there are: $$|E_1||E_2| \dots |E_n| = 365^n$$possible birthday combinations. Now we use a similar trick to what we did in Example $2$. Let us find the probability that no two students have the same birthday. To do so, consider $A_1$, the possible birthdays of the first child. He will have $365$ possible days. Then $A_2$ should have $364$ possible days, so on so forth until we get to $A_n$, which will have $[365-(n-1)]$ possible days. Thus there are: $$|A_1||A_2|\dots |A_n| = 365 \times 364 \times \dots \times [365-(n-1)]$$possible outcomes where no two children have the same birthday. Let us denote that by $P(A)$. Then the desired probability is $P(A)^c$ given by: $$P(A)^c = 1 - \frac{365 \times 364 \times \dots \times [365-(n-1)]}{365^n}$$For $n = 23$, our calculations effectively become: $$1- \frac{365!}{342! \times 365^{23}} \approx0.507 = 50.7\%$$

>[!exm|8]
>Terra was born on July $4$. Assuming that the birth rates are constant throughout the year and each year has $365$ days, for Terra to have a $50\%$ chance of meeting at least one person with her birthday, how many random people does she need to meet?

>[!claim|*]- Solution
>Let us find the probability that nobody shares a birthday with Terra. To do so, recall that every person has $365$ possible birthdays and for them not to share a birthday with Terra, there are $364$ possible options. Hence for $n$ people, the probability that they do not share a birthday with Terra $P(N)$ is : $$P(N)=\frac{364^n}{365^n}$$The probability that at least one shares a birthday with Terra $P(S)$ is given by: $$P(S) = P(N)^c = 1-P(N)$$Since we need it to be $50\%$, we have: $$0.5 = 1-\frac{364^n}{365^n} \implies \ln 0.5 = n \ln \left( \frac{364}{365} \right) $$Hence: $$n = \frac{\ln 0.5}{\ln \left(  \frac{364}{365} \right) } \approx 252.65 = 253  $$Obviously, Terra cannot meet a fraction of a person, thus, Terra needs to meet at least $253$ people to have a $50\%$ chance of at least one person having the same birthdate as her.

