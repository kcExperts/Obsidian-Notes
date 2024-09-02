
>[!def|*] Unbiased/Fair
>We can call a [[Sample Space]] unbiased or fair if each point in $S$ has an equal probability of occurring.

>[!exm|1]- Unbiased Coin
>Consider an unbiased coin, hence the probability of obtaining heads ($H$) is equal to the probability of obtaining tails ($T$). Hence: $$P(H) = P(T)$$
>With this, we can determine (mathematically) the probability of each outcome: $$1 = P(S) = P(H \cup T) = P(H) + P(T) = P(H)+P(H) = 2P(H)$$Hence $P(H) = 0.5 \implies P(T) = 0.5$.
>

If you repeat the process above for an unbiased sample space $S$ containing $N$ points, then you should be able to convince yourself that the probability of each outcome is $1/N$. 

>[!lemma|1]
>Suppose an unbiased sample space $S$ contains $N$ mutually exclusive points, then the probability of each outcome is $1/N$.

>[!claim|*]- Proof
>`\begin{proof}`
>Suppose: $$S = \{A_1, A_2, \dots, A_n\}$$Then: $$P(A_1) = P(A_2) = \dots = P(A_n)$$With this, we write: $$\begin{array}{ccc} P(S) = P(A_1) + P(A_2) + \dots + P(A_n)  \\ P(S) = P(A_1) + P(A_1) + \dots +P(A_1) \\1 =P(A_1)[1+1+ \dots+1] \; \; \text{N times}  \end{array}$$Hence: $$1 = NP(A_1) \implies P(A_1) = \frac{1}{N}$$Which nets: $$\frac{1}{N} = P(A_1) = P(A_2) = \dots = P(A_n)$$
>  `\end{proof}`

>[!theorem|1]
>Let $S$ be the sample space of an experiment. If $S$ has $N$ points that are all equally likely to occur, then for any event $A$ of $S$: $$P(A) = \frac{N(A)}{N}$$Where $N(A)$ is the number of points of $A$.

>[!claim|*]- Proof
>`\begin{proof}` 
>Let $S$ be a sample space and let $A$ be an event of $S$: $A = \{a_1, \dots a_n\}$. We know, by lemma $1$, that: $$P(a_1) = \dots = P(a_n) = \frac{1}{N}$$Then: $$P(A) = P(a_1 \cup \dots \cup a_n) = P(a_1) + \dots +P(a_n) =\frac{1}{N}+ \dots + \frac{1}{N}$$Now note that we add $1/N$ $N(A)$ times (not $N(S)$). Thus we have: $$P(A) = \frac{N(A)}{N}$$
>`\end{proof}`

>[!exm|2]- Multiple Unbiased Coins
>Let $S$ be the sample space of flipping a fair coin three times and $A$ be the event of at least two heads, then: $$\begin{array}{ccc}  S = \{HHH, HHT, HTH, HTT, THH,THT,TTH,TTT\} \\  E = \{HHH,HHT,HTH,THH\} \end{array}$$Let us find the probability of $E$. To do so, we apply the result of Theorem $1$, thus: $$P(E) = \frac{N(E)}{N}$$Clearly $N(E) = 4 \; \land \; N=8$. Hence: $$P(E) = \frac{1}{2}$$Now if we were asking for the probability of heads or tails in a row, then it would be different.

>[!exm|3]- Two Passengers and an Elevator
>An elevator with two passengers stops at the second, their, and fourth floors. It is equally likely that a passenger gets off at any of the three floors, what is the probability that the passengers get off at different floors?
>
>**Speed Solution**:
>Clearly if the first passenger gets off at a certain floor then the other passenger has $3$ floor options. Since the first passenger also has $3$ floor options, then $N = 3 \cdot 3 = 9$. There are $3$ points where they get off at the same floor, hence $N(E) = 6$. We conclude: $$P(E) = \frac{N(E)}{N} = \frac{6}{9} = \frac{2}{3}$$
>
>**Solution**:
>To solve this, we must first build $S$ then $E$. Let $p$ be the first passenger and $q$ be the second. Let $2 \le i \le 4$. Then $p_i \; \land \;q_i$ denotes the respective passenger getting off at floor $i$. Thus: $$S = \{p_2q_2,p_2q_3,p_2q_4,p_3q_2,p_3q_3,p_3q_4,p_4q_2,p_4q_3,p_4q_4\}$$Then the event $E$ is: $$E = \{p_2q_3,p_2q_4,p_3q_2,p_3q_4,p_4q_2,p_4q_3\}$$Hence $N = 9 \; \land \; N(E) = 6$. We conclude: $$P(E) = \frac{N(E)}{N} = \frac{6}{9} = \frac{2}{3}$$

>[!exm|4]- Integers and Divisibility
>A number is selected at random from the set $\{1,2, \dots, N\}$. What is the probability that the number is divisible by $k: 1 \le k \le N$.
>
>**Solution**:
>Here we have $N$ points. Now we ask ourselves, how many numbers are divisible by $k$ in $1 \le k \le N$. To determine this, let $m \in \mathbb{N}$. The definition of divisibility allows us to find our event $A$: $$A = \left\{km: 1 \le m \le \left\lfloor{\frac{N}{k}} \right\rfloor\right\}$$Where $\left\lfloor \frac{N}{k} \right\rfloor$ is the floor (round down to the nearest integer) of $N/k$. Then clearly $N(A) = \left\lfloor \frac{N}{k} \right\rfloor$ and $N = N$, hence: $$P(A) = \frac{\left\lfloor \frac{N}{k} \right\rfloor}{N}$$



