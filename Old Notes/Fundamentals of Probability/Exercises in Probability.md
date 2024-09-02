### Chapter 1
#### Please Read
Note that any questions that ask to “create" a sample space $S$ or describe the event $E$ using set notation has many different answers. What I have written down here is most certainly not the only way to go by it.
#### Chapter 1-1.2 - A
>[!rmk|*]- Key Knowledge
>For this part, the keywords include:
>- [[Sample Space]]
>- [[Sample Space|Event]]
>- [[Sets and Probability]]

>[!exercise|1]
>From the letters of the word MISSISSIPPI, a letter is chosen at random.
>1. What is the Sample Space for this experiment?
>2. What is the Event that the outcome is a vowel?
>

>[!claim|*]- Solution
>**Part 1**: 
>Since the sample space is a set $S$, there will be no repeats. Hence: $$S = \{M,I,S,P\}$$
>**Part 2**:
>The event $E$ that the outcome is a vowel is given by: $$E = \{I\}$$

>[!exercise|3]
>In the experiment of flipping a coin three times, what does the event: $$E = \{THH, HTH, HHT, HHH\}$$represent?

>[!claim|*]- Solution
>Before we get to what it is, let us examine what it isn’t. Clearly:
>- $E$ is not the event of getting a $T$ as $HHH \in E$. 
>
>With this, our only other option is that $E$ represents the event of getting two heads.

>[!exercise|5]
>A deck of six cards consists of three black cards numbered $1, 2, 3$, and three red cards numbered $1, 2, 3$. First, Vann draws a card at random and without replacement. Then Paul draws a card at random and without replacement from the remaining cards. Let $A$ be the event that Paul’s card has a larger number than Vann’s card. Let $B$ be the event that Vann’s card has a larger number than Paul’s card.
>1. Are $A$ and $B$ mutually exclusive?
>2. Are $A$ and $B$ complements of one another?

>[!claim|*]- Solution
>We can create our own sample space $S$ using $(c, n)$ where $c$ is either $R \lor B$ and $n \in [1,2,3]$. Hence: $$S = \{(R,1),(R,2),(R,3),(B,1),(B,2),(B,3)\}$$Let Vann’s draw be $(c_v,n_v)$ and Paul’s draw be $(c_p,n_p)$. Then: $$\begin{array}{ccc} A = \{(c,n): n > n_v\}  \\ B = \{(c,n):n > n_p\}  \end{array}$$
>From this, we can answer our questions:
>
>`\begin{proof}` **Part 1**: (Yes)
>Suppose, for contradiction, that they are not mutually exclusive. Then both events $A \; \land \; B$ occur. Since $A$ occurs, $(c_p,n_p) \in A$, thus $n_p > n_v$. But since $B$ occurs, then $(c_v, n_v) \in B$, thus $n_v > n_p$. But this is impossible and hence we have a contradiction. We conclude that they are mutually exclusive.
>`\end{proof}`
> `\begin{proof}` **Part 2**: (No)
> Consider $A$ and $B^c$ where $B^c  =\{(c,n):n \le n_p\}$. Clearly $A \ne B^c$. As an example, consider $n_v = 2$ and $n_p = 1$. Then: $$\begin{array}{ccc} A = \{(R,3),(B,3)\}  \\B^c = \{(R,1),(B,1)\} \end{array}$$From this, it is clear that $A$ and $B$ are not complements of one another.
> `\end{proof}`

>[!exercise|6]
>A box contains three red and five blue balls. Define a sample space for the experiment of recording the colors of three balls that are drawn from the box, one by one, with replacement.

>[!claim|*]- Solution
>Here we will define an ordered pair $(p_1,p_2,p_3)$. Since replacement is included (and there are more than $3$ of each color anyway), then both colors can be picked during each draw. Hence: $$S = \begin{array}{ccc} \{ (R,R,R), (R,R,B),(R,B,R),(R,B,B), \\(B,R,R),(B,R,B),(B,B,R), (B,B,B) \}  \end{array}$$

>[!exercise|7]
>Define a sample space for the experiment of choosing a number from the interval $(0, 20)$. Describe the event that such a number is an integer.

>[!claim|*]- Solution
>The answer is quite straightforward: $$S = \{r \in \mathbb{R}: 0<r<20\}$$Describing the event $E$ that it is an integer is also straightforward: $$E = \{n \in \mathbb{N}: 0<n<20\}$$

>[!exercise|15]
>A limousine that carries passengers from an airport to three different hotels just left the airport with two passengers. Describe the sample space of the  stops and the event that both of the passengers get off at the same hotel.

>[!claim|*]- Solution
>There any many ways you could describe $S$. However, we need to describe it in such a way that allows the event $E$ to be describable. Now let $a$ be one of the passengers and $b$ be the other. Let the stops be denoted by $i,j \in [1,2,3]$. Now denote $a_i$ as the passenger getting off at stop $i$ (define it similarly for $b_j$). Finally, define $(a_i,b_j)$ giving information on where both passengers get off, then: $$S = \{(a_i,b_j):1 \le i \le 3 \; \land \; 1 \le j \le 3\}$$With this, $E$ is also trivial to define: $$E = \{(a_i,b_j):i=j \; \land \;1 \le i \le 3\} = \{(a_1,b_1),(a_2,b_2),(a_3,b_3)\}$$
#### Chapter 1-1.2 - B
>[!exercise|29]
>Let $A$ and $B$ be two events, Prove the following relations by the elementwise method (inclusion both ways).
>1. $(A - AB) \cup B = A \cup B$
>2. $(A \cup B) - AB = AB^c \cup A^c B$

>[!claim|*]- Solution
>The elementwise method is essentially to show inclusion both ways.
>
>`\begin{proof}`  **Part 1**:
>Suppose $x \in (A-AB) \cup B$. Then $x \in (A-AB) \lor x \in B$. If $x \in (A-AB)$, then $x \in \{a \in A: a \not\in AB\}$. But if $x \in B$, then $x \in AB$. Hence $x \in A \lor x \in B$ holds and we have $x \in A \cup B$. 
>Now suppose $x \in A \cup B$. Clearly, $x \in A \lor x \in B$. If $x \in A$, then we have $x \in \{a \in A: a \not\in A \cup B\} \implies X \in A -AB$. Hence $x \in (A-AB) \cup B$. 
>Since we have inclusion both ways, $(A-AB) \cup B = A \cup B$. 
>`\end{proof}`
>
>`\begin{proof}`  **Part 2**:
>Suppose $x \in (A \cup B) - AB$, then $x \in \{z \in A \; \lor \;z \in  B: z \not\in AB\}$. Thus $x \in \{z \in A : z \not\in AB\} \lor x \in \{z \in B: z \not\in AB\}$. Thus: $$\begin{array}{ccc}   x \in \{z \in A: z \not\in AB\} \implies x \in \{z \in A: z \not\in B\} \implies x \in \{z \in A: z \in B^c\}\\ x \in \{z \in B: z \not\in AB\} \implies x \in \{z \in B: z \not\in A\} \implies x \in \{z \in B: z \in A^c\} \end{array}$$Hence: $x \in AB^c \lor A^cB$ and thus $x \in AB^c \cup A^cB$.
>Suppose $x \in AB^c \cup A^c B$. Then: $$\begin{array}{ccc}   x \in \{z \in A: z \not\in AB\} \impliedby x \in \{z \in A: z \not\in B\} \impliedby x \in \{z \in A: z \in B^c\}\\ x \in \{z \in B: z \not\in AB\} \impliedby x \in \{z \in B: z \not\in A\} \impliedby x \in \{z \in B: z \in A^c\} \end{array}$$Hence $x \in \{z \in A \; \lor \;z \in  B: z \not\in AB\}$ and thus $x \in (A \cup B) - AB$. 
>Since we have shown inclusion both ways, $(A \cup B) - AB = AB^c \cup A^c B$.
>`\end{proof}`

#### Chapter 1-1.2 - Self-Quiz

You have $20$ minutes to complete all questions:

>[!exercise|1]
>Jody, Ann, Bill, and Karl line up in a random order to get their photo taken. Describe the event that, on the line, males and females alternate.

>[!claim|*]- Solution
>Assuming that Jody and Ann are girls whilst Bill and Karl are guys, we denote: 
>- $J$ for Jody;
>- $A$ for Ann;
>- $B$ for Bill;
>- $K$ for Karl.
>
>Then the event that describes alternating males and females are: $$E = \{JBAK, JKBA,ABJK,AKJA, KABJ, KJBA, BAKJ,BJKA \}$$

>[!exercise|2]
>In a large hospital, there are $100$ patients scheduled to have heart bypass surgery. Let $E_i : 1 ≤ i ≤ 100$, be the event that the $i^{th}$ patient lives through the postoperative period of the surgery. In terms of $E_i$’s:
>1. Describe the event that all patients survive the critical postoperative period;
>2. Describe the event that exactly one patient dies during that period.

>[!claim|*]- Solution
>**Part 1**:
>Since we want all of them to live, it will be their “intersection” of each event being true, hence: $$E_s = \left\{ \prod_{i=1}^{100}E_i \right\}$$
>**Part 2**:
>We can use set notation here to get: $$E_d = \left\{  \left( \prod_{i=1}^{100}E_i \right)  - E_j: 1 \le j \le 100\right\}$$

>[!exercise|3]
>Find the simplest possible expression for the event: $$(E \cup F)(F \cup G)(EG \cup F^c)$$

>[!claim|*]- Solution
>We have: $$\begin{array}{ccc} (E \cup F)(F \cup G)(EG \cup F^c)  \\ [F \cup (EG)](EG \cup F^c) \\ EG \cup(F \cap F^c) \\ EG \cup \emptyset \\ EG \end{array}$$

>[!exercise|4]
>Consider the system shown below, consisting of $7$ components denoted by $1,2, \dots, 7$. Suppose that each component is either functioning or not functioning, with no other capabilities. Suppose that the system itself also has two performance capabilities, functioning and not functioning. For $1 \le i \le 7$, let $E_i$ be the event that component $i$ is functioning. In terms of $E_i$’s, describe the event that a signal fed to the input is transmitted to the output.
>![[Pasted image 20240325170840.png]]

>[!claim|*]- Solution
>From the image, this is straightforward: $$E_T = \{E_1E_2E_4E_7, E_1E_2E_5E_6E_7, E_1E_3E_4E_7, E_1E_3E_5E_6E_7\}$$






#### Chapter 1-1.4 - A
>[!rmk|*]- Key Knowledge
>- [[Basic Theorems in Probability]]
>- [[Unbiased]]/fair
>- [[Inclusion-Exclusion Principle]]

>[!exercise|1]
>Gottfried Wilhelm Leibniz ($1646–1716$), the German mathematician, philosopher, statesman, and one of the supreme intellects of the seventeenth century, believed that in a throw of a pair of fair dice, the probability of obtaining the sum $11$ is equal to that of obtaining the sum $12$. Do you agree with Leibniz? Explain.

>[!claim|*]- Solution
>Let $S$ be the numbers obtained by the throw of two fair dice. Let $P(11)$ be the probability of obtaining $11$ and $P(12)$ be the probability of obtaining $12$. Then: $$\begin{array}{ccc}  P(11) =\{(5,6),(6,5)\}  \\ P(12) = \{(6,6)\}  \end{array}$$Clearly: $$P(11) \ne P(12)$$Hence Leibnitz is incorrect.

>[!exercise|2]
>Show that if $A,B$ are mutually exclusive, then: $$P(A) + P(B) \le 1$$

>[!claim|*]- Solution
>`\begin{proof}` 
>Clearly: $$P(S) = 1 = P(A \cup B \cup \dots) = P(A)+P(B)+P(\cup \dots \cup)$$Where $P(\cup \dots \cup)$ represents the probability of events that may or may not be mutually exclusive. Thus: $$P(A)+P(B) \le 1$$
> `\end{proof}`

>[!exercise|3]
>Suppose that $33\%$ of the people have $O+$ blood and $7\%$ have $O−$. What is the probability that the next president of the United States has type $O$ blood?

>[!claim|*]- Solution
>Let $A$ be the event that someone picked out at random has an $O$ blood type. Let $B$ be the event that a person has $O+$ blood type ($B^C$ will be $O-$). Hence: $$P(A) = P(AB) + P(AB^c) = 0.33 + 0.07 = 0.40$$Which holds by Theorem 1.7.

>[!exercise|5]
>The probability that an earthquake will damage a certain structure during a year is $0.015$. The probability that a hurricane will damage the same structure during a year is $0.025$. If the probability that both an earthquake and a hurricane will damage the structure during a year is $0.0073$, what is the probability that next year the structure will not be damaged by a hurricane or an earthquake?

>[!claim|*]- Solution
>Let $P(A)$ denote the probability that an earthquake damages a structure and $P(B)$ be the probability that a hurricane does the same. Now let $S$ be all the structures. Then by Theorem 1.6: $$P(A\cup B) = P(A) + P(B) - P(AB) = 0.015 + 0.025-0.0073 = 0.0327$$What the question actually wants is the complement of $A$ and $B$, hence: $$P(A^c\cup B^c)=1-P(A \cup B) = 1-0.0327 = 0.9673$$

>[!exercise|6]
>In a probability test, for two events $E$ and $F$ of a sample space, Tina’s calculations resulted in $P(E) = 1/4$, $P(F) = 1/2$, and $P(EF) = 3/8$. Is it possible that Tina made a mistake in her calculations? Why or why not?

>[!claim|*]- Solution
>We have that: $$P(F \cup E) = P(F) + P(E)-P(FE) = \frac{1}{2} + \frac{1}{4} - \frac{3}{8} = \frac{3}{8}$$This leads us to to believe: $$P(F \cup E) = P(FE)$$The probability of the intersection is equal to the probability of their unions. However, this is only true if $F = E$ and clearly, $P(F) \ne P(E)$, hence Tina has a mistake in her calculations.

>[!exercise|7]
>For events $A$ and $B$, suppose that the probability that at least one of them occurs is $0.8$ and the probability that both of them occur is $0.3$. Find the probability that exactly one of them occur (Brush up on your sets).

>[!claim|*]- Solution
>Firstly, the question tells us: $$\begin{array}{ccc} P(A \cup B) = 0.8  \\P(AB) = 0.3 \end{array}$$Now we want to find the probability of exactly $A$ or $B$ happening. Thus we search for: $$P(AB^c) + P(A^cB)$$From Theorem 1.6, we have: $$P(A \cup B) = P(A) + P(B) - P(AB)$$By applying Theorem 1.7, we get: $$P(A) +P(B) = P(AB) + P(AB^c) + P(AB) + P(A^cB)$$
>Hence: $$P(A \cup B) = P(AB^c) + P(A^cB) + P(AB)$$Then: $$P(AB^c) +P(A^cB) = P(A \cup B) - P(AB) = 0.8-0.3 = 0.5$$Thus the probability of exactly one happening is $0.5$.

>[!exercise|9]
>Jacqueline, Bonnie, and Tina are the only contestants in an athletic race, where it is not possible to tie. The probability that Bonnie wins is $2/3$ that of Jacqueline winning and $4/3$ that of Tina winning. Find the probability of each of these three athletes winning.

>[!claim|*]- Solution
>From the question, we have that: $$\begin{array}{ccc} P(B) = \frac{2}{3}P(J) \implies P(J)=\frac{3}{2}P(B) \\P(B) = \frac{4}{3}P(T) \implies P(T) = \frac{3}{4}P(B)\end{array}$$Let $S$ be the sample space of the possible winning contestants. Then: $$P(S) = P(B)+P(J)+P(T)$$(Which holds as they cannot tie). Thus: $$\begin{array}{ccc}  1= P(B)+\frac{3}{2}P(B) + \frac{3}{4}P(B) \\1 = \frac{13}{4}P(B)  \\ P(B) = \frac{4}{13} \end{array}$$Solving the probabilities for the other contestants gives: $$\begin{array}{ccc} P(B) = \frac{4}{13} \\ P(J) = \frac{6}{13}\\ P(T)  = \frac{3}{13}\end{array}$$
>

>[!exercise|12]
>Suppose that the probability that a driver is a male, and has at least one motor vehicle accident during a one-year period, is $0.12$. Suppose that the corresponding probability for a female is $0.06$. What is the probability of a randomly selected driver having at least one accident during the next $12$ months?

>[!claim|*]- Solution
>Let $P(A)$ be the probability that a randomly selected driver has an accident during a $1$ year period. Let $P(B)$ be the probability that the driver in the accident is male. Then: $$\begin{array}{ccc} P(B) = 0.12  \\P(B^c) = 0.06   \end{array}$$Then using Theorem 1.7, we have: $$P(A) = P(AB) + P(AB^c) = P(B) + P(B^c) = 0.12+0.06 = 0.18$$

>[!exercise|13]
>Suppose that $75\%$ of all investors invest in traditional annuities and $45\%$ of them invest in the stock market. If $85\%$ invest in the stock market and/or traditional annuities, what percentage invest in both?

>[!claim|*]- Solution
>Let $P(A)$ be the probability of an investor investing in traditional annuities and $P(B)$ be the probability of an investor investing in the stock market. Then: $$\begin{array}{ccc} P(A) = 0.75  \\ P(B) = 0.45\\P(A \cup B) = 0.85  \end{array}$$Applying Theorem 1.6, we have: $$P(AB) = P(A) +P(B) - P(A \cup B ) = 0.75 + 0.45 - 0.85 = 0.35$$Where $P(AB) = 0.35$ is what we wanted answered.

>[!exercise|17]
>Let $S = \{\omega_1, \omega_2, \omega_3\}$ be the sample space of an experiment. If $P( \{\omega_1, \omega_2\}) = 0.5$ and $P(\{\omega_1, \omega_3\}) = 0.7$, find $P(\{\omega_1\})$, $P(\{\omega_2\})$, $P(\{\omega_3\})$.

>[!claim|*]- Solution
>The question implies that the sample space $S$ is made of $3$ mutually exclusive events, then (by applying the Axioms): $$\begin{array}{ccc}  P( \{\omega_1, \omega_2\}) = P(\{\omega_1\} \cup \{\omega_2\}) = P(\{\omega_1\}) + P(\{\omega_2\})=0.5 \\ P( \{\omega_1, \omega_3\}) = P(\{\omega_1\} \cup \{\omega_3\})=P(\{\omega_1\})+P(\{\omega_3\}) = 0.7 \end{array}$$The last piece we need is that: $$P(S) =P(\{\omega_1, \omega_2, \omega_3\}) = P(\{\omega_1\}) + P(\{\omega_2\}) + P(\{\omega_3\}) = 1$$Then replacing our variables gives: $$\begin{array}{ccc} 1 = 0.5 + P(\{\omega_3\}) \implies P(\{\omega_3\}) = 0.5 \\ 1=0.7 + P(\{\omega_2\})  \implies P(\{\omega_2\}) = 0.3\\1= 0.5+0.3 + P(\{\omega_1\}) \implies P(\{\omega_1\}) =0.2 \end{array}$$Thus: $$\begin{array}{ccc} P(\{\omega_1\}) = 0.2  \\P(\{\omega_2\}) = 0.3 \\P(\{\omega_3\}) = 0.5  \end{array}$$

>[!exercise|22]
>Let $A$ and $B$ be two events. Prove that: $$P(AB) \ge P(A) + P(B) - 1$$

>[!claim|*]- Solution
>`\begin{proof}` 
>By Theorem 1.6, we have: $$P(AB) = P(A) + P(B)-P(A \cup B)$$
>Clearly: $$P(A \cup B) \le 1$$With equality if and only if $P(A \cup B) = S$ and they are mutually exclusive. Then: $$P(AB) \ge P(A) + P(B) -1$$
>`\end{proof}`

>[!exercise|24]
>Which of the following statements is true? If a statement is true, prove it. If it is false, give a counterexample.
>a. If $P(A) + P(B) + P(C) = 1$, then the events $A,B,C$ are mutually exclusive.
>b. If $P(A \cup B \cup C) = 1$, then $A,B,C$ are mutually exclusive events.
>

>[!claim|*]- Solution
>**a**:
>Clearly $P(A \cup B \cup C) = P(S)$. Taking the [[Inclusion-Exclusion Principle]], we have: $$P(A \cup B \cup C) = P(A) + P(B) + P(C) -P(AB) - P(AC) - P(BC) + P(ABC)$$Since $P(A \cup B \cup C) \not> 1$ ,then: $$P(AB) = P(AC) = P(BC) = P(ABC) = 0$$Hence they are mutually exclusive (their intersection cannot occur).
>
>**b**:
>Using the [[Inclusion-Exclusion Principle]] (see above), it is clear that this is not true as the probability of their intersections can be non-zero. Hence they need not be mutually exclusive.
>

>[!exercise|33]
>The coefficients of the quadratic equation $x^2 + bx + c = 0$ are determined by tossing a fair die twice (the first outcome is $b$, the second one is $c$). Find the probability that the equation has real roots.

>[!claim|*]- Solution
>Recall that: $$x = \frac{-b\pm \sqrt{b^2-4ac}}{2a} = \frac{-b\pm \sqrt{b^2-4c}}{2}$$Which holds since $a$ is constant. We need: $$b^2 - 4c \ge 0 \implies b^2 \ge4c$$
>Let $(b,c)$ be the outcome. There are $36$ total outcomes $(6^2)$. Then:
>- $b = 1 \implies c = \{1,2,3,4,5,6\}$
>- $b = 2 \implies c = \{1,2,3,4,5,6\}$
>- $b = 3 \implies c = \{3,4,5,6\}$
>- $b = 4 \implies c = \{4,5,6\}$
>- $b = 5 \implies c = \emptyset$
>- $b = 6 \implies c = \emptyset$
>
>We see that we have $19$ outcomes where the roots will be real. Hence: $$P(\mathbb{R}) = \frac{19}{36}$$

#### Chapter 1-1.4 - B
>[!exercise|37]
>From an ordinary deck of $52$ cards, we draw cards at random and without replacement until only cards of one suit are left. Find the probability that the cards left are all spades ($52$ cards means no Jokers).

>[!claim|*]- Solution
>Denote $P(S)$ to be the the cards in the deck. Let $P(\mathbb S), P(H), P(D), P(C)$ be the probability that only spades, hearts, diamonds or clubs remain respectively. No other suits can remain, hence: $$P(\mathbb S) + P(H) + P(D) + P(C) = 1$$These events are also mutually exclusive, thus: $$P(\mathbb S) = P(H) = P(D) = P(C) = \frac{1}{4}$$Hence: $$P(\mathbb S) = \frac{1}{4}$$

>[!exercise|38]
>A number is selected at random from the set of natural numbers $\{1, 2, \dots , 1000\}$. What is the probability that it is divisible by $4$ but neither by $5$ nor by $7$?

>[!claim|*]- Solution
>Let $S$ be the set of natural numbers from $\{1, \dots 1000\}$ and let $A,B,C$ be the numbers divisible by $4,5,7$ respectively. Our goal is to find $P(A-(B \cup C))$, in other words: $$P(A-(B \cup C))=P(A)-P(AB)-P(AC)$$Firstly, we need to find how many points there are in $A,B,C$. To do so, note: $$\begin{array}{ccc}A = \{4a:1 \le 4a \le {1000}\} \implies |A| = \lfloor \frac{1000}{4} \rfloor = 250 \implies P(A) = \frac{250}{1000} \\B = \{5b:1 \le 5b \le {1000}\} \implies |B| = \lfloor \frac{1000}{5} \rfloor = 200 \implies P(B) = \frac{200}{1000}  \\ C = \{7c:1 \le 7c \le {1000}\} \implies |C| = \lfloor \frac{1000}{7} \rfloor = 142 \implies P(C) = \frac{142}{1000} \end{array}$$Now we find $P(AB)$ and $P(AC)$. To do this, note that the $4^{th}$ $b \; \land \; c$ are divisible by $4$ as we have $(5,10,15, 20) \; \land \; (7,14,21, 28)$ where $20 \; \land \; 28$ are divisible by $4$. Hence every $4^{th}$ $b \; \land \; c$ will be divisible by $4$. Thus: $$\begin{array}{ccc}  |AB| = \left\lfloor\frac{|B|}{4}\right\rfloor  = 50 \implies P(AB) = \frac{50}{1000}\\ |AC| = \left\lfloor \frac{|C|}{4}  \right\rfloor = 35 \implies P(AC) = \frac{35}{1000}\end{array}$$Thus: $$P(A-(B \cup C)) = \frac{250}{1000} - \frac{50}{1000} - \frac{35}{1000} = \frac{165}{1000} = 0.165$$
> 

>[!exercise|40]
>For events $E$ and $F$ (which need **NOT** be mutually exclusive), show that: $$P(E \cup F) + P(E \cup F^c) + P(E^c \cup F) + P(E^c \cup F^c) = 3$$

>[!claim|*]- Solution
>`\begin{proof}` 
>By Theorem 1.6, we have: $$\begin{array}{ccc}  P(E \cup F) = P(E) + P(F) + P(EF) \\P(E \cup F^c) = P(E) + P(F^c) + P(EF^c) \\ P(E^c \cup F) = P(E^c) + P(F) + P(E^cF) \\ P(E^c \cup F^c) = P(E^c) + P(F^c) + P(E^cF^c) \end{array}$$By Theorem 1.4, we get that: $$P(E) + P(E^c) + P(E) + P(E^c) + P(F) + P(F^c) + P(F) + P(F^c) = 4$$That leaves us with $P(EF) + P(EF^c) + P(E^cF) + P(E^cF^c)$. Applying Theorem 1.7, we get: $$[P(EF) + P(EF^c)] + [P(E^cF) + P(E^cF^c)] = P(E) + P(E^c) =1$$Where the last equality holds by Theorem 1.4. Putting this all together nets us: $$P(E \cup F) + P(E \cup F^c) + P(E^c \cup F)+ P(E^c \cup F^c) = 4-1 =3$$Which is as desired.
>`\end{proof}`

>[!exercise|41]
>Two numbers are successively selected at random and with replacement from the set $\{1,2, \dots, 100\}$. What is the probability that the first one is greater than the second?

>[!claim|*]- Solution
>Let $S = \{(a,b): a,b \le 100 \; \land \; a,b \in \mathbb{N}_+\}$. Clearly $|S| = 100^2 = 10000$. Now define $A = \{(a,b) : a >b\} \subset S$. Now it is clear that for a fix value of $a$, we have $1 \le b \le a-1$ possible combinations. Hence: $$P(A) = \frac{\sum_{i=1}^{99}i}{10000} = \frac{4950}{10000} = \frac{99}{200}=0.4950$$Where the sum comes from the fact that fixing $a = 1$ nets $0$ possibilities, $a = 2$ nets $1$, $a = 3$, nets 2, so on so forth until $a = 100$ nets 99 possible combinations.

>[!exercise|45]
>Let $P$ be a probability defined on a sample space $S$. For events $A$ of $S$ define $Q(A) = [P(A)]^2$ and $R(A) = P(A)/2$. Is $Q$ a probability on $S$? Is $R$ a probability on $S$? Why or why not?

>[!claim|*]- Solution
>**Q**:
>For this, it is obvious that Axiom $1$ and $2$ holds, but Axiom $3$ does not. For example, if we define $S = \{A,B\}$ with $A,B$ being mutually exclusive, then $P(S) = P(A) + P(B) \implies P(A) = P(B) = 0.5$. However: $$Q(S) = 1 \ne Q(A) + Q(B) = 0.5^2 + 0.5^2 = 0.5$$Hence $Q$ is not a probability on $S$ (the finite case should hold should $Q$ be a probability by Theorem 1.2).
>
>**R**: 
>Here Axiom $2$ fails as $P(S) = 1$ but $Q(S) = \frac{P(S)}{2} = 0.5 \ne 1$. Hence $R$ is not a probability on $S$.

[[Boole’s Inequality]] constitute exercises 42 and 43.

#### Chapter 1-1.4 - Self-Quiz
Time Allotted: $20$ minutes.

>[!exercise|1] 3 Points
>Let $A$ and $B$ be mutually exclusive events of an experiment with $P(A) = 1/3$ and $P(B) = 1/4$. What is the probability that neither $A$ occurs nor $B$?

>[!claim|*]- Solution
>We search for $P(A^cB^c)$. Clearly $P(A^c) = 2/3$ and $P(B^c) = 3/4$. Now: $$\frac{1}{4} =P(B) = P(A^cB) + P(AB) = P(A^cB)$$Which holds since $A$ and $B$ are mutually exclusive. Now: $$P(A^c) = P(A^cB) + P(A^cB^c) \implies P(A^cB^c) = P(A^c) - P(A^cB) = \frac{5}{12}$$Thus $P(A^cB^c) = 5/12$.

>[!exercise|2] 3 Points
>Zack has two weeks to read a book assigned by his English teacher and two weeks to write an essay assigned by his philosophy professor. The probability that he completes both assignments on time is $0.6$, and the probability that he completes at least one of them on time is $0.95$. What is the probability that he ends up meeting the deadline only for one assignment?

>[!claim|*]- Solution
>(Yes I know you can intuitively justify that $P(A \cup B) - P(AB)$ is the answer but let us instead use sets here as a form of practice).
>
>Define $P(A)$ as the probability that he completes the reading assignment and $P(B)$ as the probability that he completed the essay. Then: $$P(AB) = 0.6 \; \land \; P(A \cup B) = 0.95$$The probability that he ends up meeting the deadline only for one assignment is given by: $$P(AB^c) + P(A^cB) = P(A) + P(B) - 2P(AB)$$We can rewrite it as the following: $$P(A) + P(B) - P(AB) - P(AB) = P(A \cup B) - P(AB) = 0.95-0.6 = 0.35$$Hence the probability that he ends up meeting the deadline for only one assignment is $0.35$.

>[!exercise|3] 4 Points
>Suppose that two-thirds of Americans traveling to Europe visit at least one of the three countries France, England, and Italy. Furthermore, suppose that one-half of them visit England, one-third visit France, and one-fourth visit Italy. If for each pair of these countries, one-fifth of the travelers visit that pair, what fraction of Americans traveling to Europe visit all of these three countries?

>[!claim|*]- Solution
>Clearly the $n=3$ [[Inclusion-Exclusion Principle]] will need to be used. Thus: $$P(F \cup E \cup I) = P(F) + P(E) + P(I) - P(FE) - P(FI) - P(EI) + P(FEI)$$Thus: $$P(FEI) = P(F \cup E \cup I) - P(F) - P(E) -P(I) + P(FE) + P(FI) + P(EI)$$Substituting in for the given values: $$P(FEI) = 2/3 - 1/3 - 1/2 - 1/4 + 1/5 + 1/5 + 1/5 = \frac{11}{60} = 0.1833\dots$$

#### Chapter 1-1.7 - A
>[!rmk|*]- Key Knowledge
>- [[Probability Function]]
>- [[Continuity of Probability Functions]]
>- [[Probabilities 1 And 0]]
>- [[Randomly Selected Point]]
>- [[Order Limit Theorem]]
>- [[Boole’s Inequality]]

>[!exercise|1]
>A bus arrives at a station every day at a random time between 1:00 P.M. and 1:30 P.M. What is the probability that a person arriving at this station at 1:00 P.M. will have to wait at least $10$ minutes?

>[!claim|*]- Solution
>Here we partition our interval into three $10$ minute intervals $A,B,C$ (in order). Hence: $$P(A \cup B \cup C) = P(S) = 1 \implies P(A) = P(B) = P(C) =\frac{1}{3}$$We are interested in $P(B) + P(C)$, thus: $$P(B) + P(C) = \frac{2}{3}$$Alternatively, use the $(\beta - \alpha)/(b-a)$ formula.

>[!exercise|2]
>Past experience shows that every new book by a certain publisher captures randomly between $4$ and $12\%$ of the market. What is the probability that the next book by this publisher captures at most $6.35\%$ of the market?

>[!claim|*]- Solution
>Here we note the $\gcd(635,1200) = 5$. This suggest that we partition our interval in steps of $0.05\%$. Since every one of these intervals would be mutually exclusive, we have that there would be $160$ intervals. The $47^{th}$ interval would go up to $6.35\%$. Thus the $48^{th}$ interval and onwards would guarantee capturing more than $6.35\%$ of the market. Let $A$ be our desired probability, then: $$P(A) = 1-\frac{47}{160} = \frac{113}{160} = 0.70625$$Alternatively, our interval is $[4,12]$ and our interval of focus is $[6.35,12]$, hence: $$P(A) = \frac{12-6.35}{12-4} = 0.70625$$

>[!exercise|3]
>Which of the following statements are true? If a statement is true, prove it. If it is false, give a counterexample.
>1. If $A$ is an event with probability $1$, then $A$ is the sample space.
>2. If $B$ is an event with probability $0$, then $B = \emptyset$.

>[!claim|*]- Solution
>`\begin{proof}`
>
>**Part 1**: Consider the interval $[0,1]$. Let $A_i$ be the event that we pick some fix number $\alpha$. As we have seen already, $P(A_i) = 0$ and thus $P(A_i^c) = 1-0 = 1$. But $A_i \ne S$ thus we have a counterexample.
>
>**Part 2**: From part **1**, we had that $P(A_i) = 0$ but that $A_i = \alpha$ thus we have found a counterexample. 
>`\end{proof}`

>[!exercise|4]
>Let $A$ and $B$ be two events. Show that if $P(A) = 1$ and $P(B) = 1$, then $P(AB) = 1$.

>[!claim|*]- Solution
>`\begin{proof}`
>If $P(A) = 1 \; \land \; P(B) = 1$, then $P(A \cup B) = 1$ and cannot be greater than $1$ since $P$ is a probability. Hence: $$P(A \cup B) = P(A) + P(B) + P(AB) \implies 1= 1+1+P(AB) $$Thus $P(AB) = 1$.
>`\end{proof}`

>[!exercise|5]
>A point is selected at random from the interval $(0,2000)$. What is the probability that it is an integer?

>[!claim|*]- Solution
>Let $P(A)$ be the probability that an integer is chosen. The interval $(0,2000)$ is uncountable and contains $1998$ integers. Let $P(\alpha)$ be the chance that $\alpha$ is picked from the interval. We know that it is mutually exclusive, thus (in a handwavy fashion) $P(\alpha) = \frac{1}{\infty} = 0$. Since this holds $\forall \: \alpha \in (0,2000)$, we have that $P(A) = 1998 \cdot P(\alpha) = 1998 \cdot 0 = 0$.

>[!exercise|7]
>For an experiment with sample space $S = (0,2)$, for $n \ge 1$, let $E_n = (0,1+\frac{1}{n})$ and $P(E_n) = \frac{3n+2}{5n}$. Find the probability of $E = (0,1]$. Note that this is *not* the experiment of choosing a point at random from the interval $(0,2)$. 

>[!claim|*]- Solution
>We note that $E_1 = (0,2), E_2 = (0,1.5)$. Thus $E_1 \supset E_2$. From this, we clearly notice $E_n \supset E_{n+1}$. Then $E_n$ is a decreasing event. Notice: $$\bigcap_{n=1}^\infty E_n = E$$Then: $$P(E) = P \left( \bigcap_{n=1}^\infty E_n \right) = P (\lim_{n \rightarrow \infty} E_n) = \lim_{n \rightarrow \infty} P(E_n) = \lim_{n \rightarrow \infty} \frac{3n+2}{5n} = \frac{3}{5}$$Hence $P(E) = \frac{3}{5}$.

>[!exercise|8]
>A point is chosen at random from the interval $(-1,1)$. Let $E_1$ be the event that it falls in the interval $(-1,1/3]$, $E_2$ be the event that it falls in the interval $(-1,1/9]$ and, in general, for $1 < i <\infty$, $E_i$ be the event that the point is in the interval $(-1, 1/3^i]$. Find $\bigcup_{i=1}^\infty E_i \; \land \; \bigcap_{i=1}^\infty E_i$. 

>[!claim|*]- Solution
>Note that $E_{n} \supset E_{n+1}$. Then $E$ is a decreasing event and: $$\bigcup_{i=1}^\infty E_i =E_1 = (-1,1/3]$$With: $$\bigcap_{i=1}^\infty E_i = \lim_{i \rightarrow \infty} E_i  = \lim_{i \rightarrow \infty}\{x: -1 < x \le \frac{1}{3^i}\}$$Notice $\frac{1}{3^i} \ge 0 \; \forall \: n$, then by the [[Order Limit Theorem]], $\lim_{i \rightarrow \infty} \frac{1}{3^i} \ge0$. Since we know it actually converges to $0$, then $\lim_{i \rightarrow \infty} \frac{1}{3^i}= 0$. Thus: $$\lim_{i \rightarrow \infty}\{x: -1 < x \le \frac{1}{3^i}\} = \{x:-1 < x \le 0\} \implies \bigcap_{i=1}^\infty E_i = (-1,0]$$
>(You do not need the Order Limit Theorem here. You can argue $0 < \frac{1}{3^i} \; \forall \: i$ and then that $0 + \epsilon > \frac{1}{3^i}$ for some $i$)

>[!exercise|9]
>For the experiment of choosing a point at random from the interval $(0,1)$, let $E_n = (\frac{1}{2}- \frac{1}{2n},\frac{1}{2}+ \frac{1}{2n}), n \ge 1$. 
>1. Prove that $\bigcap_{n = 1}^\infty E_n = \{1/2\}$.
>2. Using part $1$ and the [[Continuity of Probability Functions]], show that the probability of selecting $1/2$ in a random selection of a point from $(0,1)$ is $0$. 

>[!claim|*]- Solution
>**Part 1**: 
>Notice that every $E_n$ is a shrinking interval, thus we are justified in having $E_n \supset E_{n+1}$ and saying that $E$ is decreasing. Then: $$\bigcap_{n=1}^\infty E_n = \lim_{n \rightarrow \infty} E_n = \lim_{n \rightarrow \infty} \left\{x: \frac{1}{2}- \frac{1}{2n} < x < \frac{1}{2}+ \frac{1}{2n}\right\}$$Now let $a_n = \frac{1}{2}-\frac{1}{2n}$. Clearly $a_n < \frac{1}{2} \; \forall \: n$ and $\lim_{n \rightarrow \infty} a_n = \frac{1}{2}$. By the [[Order Limit Theorem]], we must have $\lim_{n \rightarrow \infty} a_n \le \frac{1}{2}$. Repeating the same for $\frac{1}{2}+ \frac{1}{2n}$ tells us: $$\lim_{n \rightarrow \infty} \left\{x: \frac{1}{2}- \frac{1}{2n} < x < \frac{1}{2}+ \frac{1}{2n}\right\} = \left\{x: \frac{1}{2} \le x \le \frac{1}{2}\right\} = \left\{ \frac{1}{2} \right\} $$Hence: $$\bigcap_{n=1}^\infty E_n =  \left\{ \frac{1}{2} \right\}$$
>(If you want to avoid using the order limit theorem here, argue that $\frac{1}{2}-\frac{1}{2n} < \frac{1}{2}< \frac{1}{2}+ \frac{1}{2n} \; \forall \:n$ and then that that $\frac{1}{2} \pm \epsilon$ is not in the interval by using the [[Archimedean Property]])
>
>**Part 2**:
>Since $E_n \subset (0,1)$, then we can use the [[Randomly Selected Point]] formula to compute the probability of selecting a point from $E_n$. Then: $$P(E_n) = \frac{\left( \frac{1}{2}+\frac{1}{2n} -( \frac{1}{2}- \frac{1}{2n}) \right) }{(1-0)} = \frac{1}{n}$$
>We already know $E_n$ is decreasing and that its infinite intersection gives $\frac{1}{2}$, thus: $$P \left( \frac{1}{2} \right) = P \left(  \bigcap_{n=1}^\infty E_n \right) = P \left( \lim_{n \rightarrow \infty} E_n \right)  = \lim_{n \rightarrow \infty} P(E_n) = \lim_{n \rightarrow \infty} \frac{1}{n} = 0$$Which holds by the [[Continuity of Probability Functions]]. Hence $P \left( \frac{1}{2} \right) = 0$ as desired.

#### Chapter 1-1.7 - B
>[!exercise|10]
>Is it possible to define a probability on a countably infinite sample space so that the outcomes are equally probable?

>[!claim|*]- Solution
>No, it is not possible to do so. We will show this by contradiction.
>
>`\begin{proof}`
>Suppose it is possible to define a probability on a countably infinite sample space. Define $S = \{A_1, A_2, \dots\}$. Then $P(S) = 1$. Since every $A_i$ is equally likely, we must have: $$P(A_1) = P(A_2) = \dots $$Thus every $A_i$ has an equal amount of points and: $$P(A_i) = \frac{N(A_i)}{N}$$Clearly $N(A_i) = C$ is fixed, but we have countably many points in $S$ hence: $$P(A_i) = \lim_{N \rightarrow \infty} \frac{C}{N} = 0$$Thus: $$P(A_i) = 0 \implies P(A_1 \cup A_2 \cup \dots) = 0 \implies P(S) = 0$$Which contradicts $P(S)$ being $1$. Thus $P$ is not a probability on $S$
>`\end{proof}`

>[!exercise|11]
>Let $A_1, A_2, \dots A_n$ be $n$ events. Show that if: $$P(A_1) = P(A_2) = \dots = P(A_n) = 1$$Then $P(A_1A_2 \dots A_n) = 1$.

 >[!claim|*]- Solution
 >Taking the finite case of the corollary of [[Boole’s Inequality]] nets: $$P \left( A_1 A_2 \dots A_n\right) \ge 1 - \sum_{k=1}^n P(A_k^c)$$Where: $$\sum_{k=1}^n P(A_k^c) = 0$$Which holds as for every individual $A_i : 1 \le i \le n$, we have: $P(A_i^c) = 1-P(A_i) = 0$. Hence: $$P(A_1A_2 \dots A_n) = 1$$Which must also be true since probabilities cannot be greater than $1$.

>[!exercise|12]
>A point is selected at random from the interval $(0,1)$. What is the probability that it is rational? What is the probability that it is irrational?

 >[!claim|*]- Solution
 >Since $\mathbb{Q}$ is countable, we can define $R$ to be the set of rational numbers in $(0,1)$ as: $$R=\{q_n:n \in \mathbb{N}\} = \bigcup_{n=1}^\infty q_n$$Clearly the above set is countable and by Axiom $3$, we write: $$P(R) =P \left(  \bigcup_{n=1}^\infty q_n \right) =\sum_{n=1}^\infty P(q_n) = 0$$Which holds as the probability of choosing any one point in an interval $\mathcal I \subseteq \mathbb{R}$ is $0$. Let $I$ denote the set of irrational numbers in $(0,1): I = A^c$. Then: $$P(I) = 1-P(R) = 1-0 = 1$$Hence: $$\begin{array}{ccc} P(R) = 0  \\ P(I) = 1  \end{array}$$Notice that we cannot use Axiom $3$ on $I$ as the set of irrational numbers is uncountable.

The [[Borel-Cantelli Lemma]] makes up exercise 14.

#### Chapter 1-1.7 - Self-Quiz
Time Allotted: $20$ minutes.

>[!exercise|1]
>Suppose that for events $A$ and $B$, $P(AB) = 0$. Does this imply that $A$ and $B$ are mutually exclusive? Why or why not?

>[!claim|*]- Solution
>We know that two events are mutually exclusive if the following holds: $$P(A \cup B) = P(A) + P(B)$$We have: $$\begin{array}{ccc} P(A \cup B) = P(A) + P(B) - P(AB)  \\ P(A \cup B) = P(A) + P(B) + 0\\ P(A \cup B) = P(A) + P(B) \end{array}$$Thus $A$ and $B$ are mutually exclusive.

>[!exercise|2]
>For the experiment of choosing a point at random from the interval $[0,1]$, let: $$E_n = \left[ \frac{1}{3} - \frac{1}{n+2}, \frac{1}{3}+\frac{2}{n+2}\right] : n \ge 1$$Applying the [[Continuity of Probability Functions]] to $E_n’s$, show that $P(\text{1/3 is selected}) = 0$.
 
>[!claim|*]- Solution
>First, let us get the probability of choosing a point contained in $E_n$. Using the [[Randomly Selected Point]] formula, we have: $$P(E_n) = \left( \frac{\beta-\alpha}{b-a} \right) =  \left( \frac{3}{n+2} \right) $$Clearly, we see that $E_n$ is a [[Probability Function|decreasing function]]. Furthermore: $$\lim_{n \rightarrow \infty} E_n = \left[ \frac{1}{3} \right]$$Now, by the [[Continuity of Probability Functions]], we have: $$P(\text{1/3 is selected}) = P \left( \lim_{n \rightarrow \infty} E_n \right)  = \lim_{n \rightarrow \infty} P(E_n) = \lim_{n \rightarrow \infty} \frac{3}{n+2} = 0$$Hence $P(\text{1/3 is selected}) = 0$ as desired. 

#### Chapter 1 - Self-Test
Time Allotted: $120$ minutes.

>[!exercise|1]
>To determine who pays for dinner, Crispin, Allison, and Terry each flip an unbiased coin. The one whose flip has a different face up will pay. If all of the flips land on the same face, they start all over again. 
>1. What is the probability that Crispin ends up paying for dinner?
>2. What is the probability that no more than one round of flips is necessary?

>[!claim|*]- Solution
>**Part 1**:
>Let $C, A, T$ be Crispin, Allison and Terry respectfully. In total, we have $2^3-2 = 8$ possible events in our sample space $S$. Thus: $$S = \{(H,H,H),(H,H,T),(H,T,H),(H,T,T),(T,H,H)(T,H,T)(T,T,H),(T,T,T)\}$$Since getting either all heads or all tails results in a reroll, the probability that Crispin ends up paying for dinner is $2/6 = 1/3$. 
>
>**Part 2**:
>From the above sample space $S$, the probability that no more than one round of flips is necessary is $6/8 = 3/4$. 

>[!exercise|2]
>Every day, a major ball manufacturer produces at least $800$, but no more than $1300$ of each of its five products: baseballs, tennis balls, softballs, basketballs, and soccer balls. Define a sample space for the production levels of these five types of balls that this manufacturer manufactures on a random working day. Describe the event that, on this day, the difference between the numbers of baseballs and soccer balls produced will not exceed $100$. 
>
>Hint: Let $x_1,x_2,x_3,x_4,x_5$ be the production level, in hundreds, for baseballs, tennis balls, softballs, basketballs, and soccer balls, respectively.

>[!claim|*]- Solution
>Following the rules laid out by the hint, the sample space $S$ is given by: $$S = \{(x_1,x_2,x_3,x_4,x_5):800 \le x_1,x_2,x_3,x_4,x_5 \le 1300\}$$The event $E$ that the difference between the numbers of baseballs and soccer balls produced will not exceed $100$ is given by: $$E = \{(x_1,x_2,x_3,x_4,x_5): 800 \le x_1,x_2,x_3,x_4,x_5 \le 1300 \; : \; x_2-x_5 \le 100\}$$

>[!exercise|3]
>A device that has three components fails if at least one of its components breaks down. The device is observed at a random time. Let $A_i, 1 \le i \le 3$, denote the outcome that the $i^{th}$ component is operative at the random time. In terms of $A_i$’s:
>1. Define a sample space for the status of the system at the random time;
>2. Describe the event that the device is not operative at the random time;

>[!claim|*]- Solution
>**Part 1**:
>The sample space $S$ for the status of the system at a random time is given by: $$S = \{(A_1,A_2,A_3): 0 \le A_1,A_2,A_3 \le 1: A_1, A_2, A_3 \in \mathbb{Z}\}$$This sample space effectively describes $A_i: 1 \le i \le 3$ to be binary numbers. If $A_i = 0$, then the component has failed and if $A_i = 1$, the component has not failed. If it is clear that $A_i$’s are integers, then the last part of the sample space notation can be removed. The same is true for part 2. 
>
>**Part 2**:
>The event $E$ that the device is not operative at the random time is given by: $$E = \{(A_1,A_2,A_3):0 \le A_1, A_2, A_3 \le 1: A_1,A_2,A_3 \in \mathbb{Z}: A_1 \land A_2 \land A_3 = 0 \}$$

>[!exercise|4]
>Suppose that, in a particular geographical area, of people aged $55$ and older, $13.4\%$ suffer from Parkinson’s disease, $11.3\%$ suffer from Alzheimer’s disease, and $2.26\%$ suffer from both of these completely separate neurodegenerative illnesses. What percentage of the people from this age group in this geographic area have neither Parkinson’s disease nor Alzheimer’s disease?

>[!claim|*]- Solution
>Let $\mathcal P$ and $A$ denote Parkinson’s and Alzheimer’s disease respectfully, then: $$\begin{array}{ccc} P(\mathcal P) = 0.134  \\P(A) = 0.113 \\ P(\mathcal P A) = 0.0226\end{array}$$We need to find $P(\mathcal P \cup A)^c$, to do so: $$\begin{array}{ccc} P(\mathcal P \cup A) = P(\mathcal P)+P(A) - P(\mathcal PA) = 0.134+0.113-0.0226=0.2244  \\P(\mathcal P \cup A)^c = 1 - P(\mathcal P \cup A) = 1 - 0.2244 = 0.7756  \end{array}$$Thus the percentage of people from this age group in this geographic area that have neither Parkinson’s nor Alzheimer’s disease is $77.56\%$. 

>[!exercise|5]
>For an experiment, $E$ and $F$ are two events with $P(E) = 0.4$ and $P(E^cF^c) = 0.35$. Calculate $P(E^cF)$.

>[!claim|*]- Solution
>Notice: $$\begin{array}{ccc} P(E^c) = 1-P(E) = 1-0.4 = 0.6  \\P(E^c) = P(E^cF)+P(E^cF^c) \implies P(E^cF) = P(E^c)-P(E^cF^c) \\ P(E^cF) = 0.6-0.35 = 0.25 \end{array}$$Hence $P(E^cF) = 0.25$.

>[!exercise|6]
>Last semester, all freshman students of a college took calculus, biology, and English. If $18\%$ of them received an A in calculus, $10\%$ received an A in both calculus and biology, $13\%$ received an A in both English and calculus, and $7\%$ received an A in all three courses, what is the probability that a randomly selected freshman from this college, last semester, received an A in calculus, but not in biology and not in English?

>[!claim|*]- Solution
>Let $B, E,C$ be biology, English and calculus respectively, then let $P$ be the probability associated with the freshman students getting $A$’s in the courses: $$\begin{array}{ccc} P(C) = 0.18  \\ P(BC) = 0.10\\P(EC)=0.13 \\ P(BEC) = 0.07 \end{array}$$We need to find $P(B^cE^cC)$. By drawing a Venn Diagram, one can see the following relationship: $$P(B^cE^cC) = P(C) - P(BC)-P(EC)+P(BEC) = 0.18-0.10-0.13+0.07= 0.02$$Thus the probability that a randomly selected freshman from his college, last semester, received an $A$ in calculus, but not in biology and not in English are $2\%$.  

>[!exercise|7]
>For an experiment with sample space $S = (0,2)$, for $n \ge 1$, let $E_n = (1-1/n,1+1/n)$ and $P(E_n) = (2n+1/3n$). For this experiment, find the probability that the event $\{1\}$ occurs. Note that this is not the experiment of choosing a point at random from the interval (0, 2).

>[!claim|*]- Solution
>First notice the following: $$\begin{array}{ccc}  E_1 = (0,2) \\ E_2=(\frac{1}{2}, \frac{3}{2}) = (0.5, 1.5)\\ E_3 = (\frac{2}{3}, \frac{4}{3}) = (0.\overline{66}, 1.\overline{33}) \end{array}$$From this, we can clearly see that $E_1 \supseteq E_2, \supseteq E_3 \supseteq \dots$ meaning that $E_n$ is a decreasing sequence of events. Now notice that: $$\lim_{n \rightarrow \infty} E_n = [1,1] = \{1\}$$By the [[Continuity of Probability Functions]], we have: $$P(\{1\}) =P \left(  \lim_{n \rightarrow \infty} E_n \right)  = \lim_{n \rightarrow \infty} P(E_n) = \lim_{n \rightarrow \infty} \frac{2n+1}{3n} = \frac{2}{3}$$Thus the probability that the event $\{1\}$ occurs is $2/3$. 

>[!exercise|8]
>Five customers enter a wireless corporate store to purchase smartphones. If the probability that at least three of them purchase an Android smartphone is $0.54$, what is the probability that at most two of them buy such a phone.
>
>Hint: For $0 \le i \le 5$, let $A_i$ be the event that exactly $i$ of these customers buy an Android smartphone. Note that $\sum_{i=1}^5 P(A_i) = 1$. 

>[!claim|*]- Solution
>Logically, one can tell that the answer is $0.46$. But to get to it, notice that we know: $$\sum_{i=1}^3 P(A_i) = 0.54$$Thus: $$\sum_{i=1}^5 P(A_i) = \sum_{i=1}^3 P(A_i) + \sum_{i=1}^2 P(A_i)$$The probability that at most two of them buy such a phone is described by $\sum_{i=1}^2 P(A_i)$. Rearranging: $$\sum_{i=1}^2 P(A_i) = \sum_{i=1}^5 P(A_i) - \sum_{i=1}^3 P(A_i) = 1-0.54 = 0.46$$

>[!exercise|9]
>In some towns of a country, the harmful substances lead and asbestos fibers find their way into drinking water. In a study, it was found that, in $13\%$ of those towns, the drinking water supplies have neither lead nor asbestos fibers, in $32\%$ of them the drinking water supplies have lead, and in $43\%$ the drinking water supplies have asbestos fibers. In what percentage of the towns are the drinking water supplies contaminated with exactly one of these two impurities?

>[!claim|*]- Solution
>Let $L, A$ denote that towns that had lead and asbestos respectfully in their water supplies, then: $$\begin{array}{ccc} P(L^cA^c) = 0.13 \\P(L) = 0.32 \\P(A) = 0.43  \end{array}$$We need to find the percentage of the towns whose drinking water is contaminated with exactly one of these two impurities. Using a Venn diagram, one can show that we are looking for $P(L-LA)+P(A-LA)$. This is given by: $$P(L-LA) + P(A-LA) = P(L)+P(A)-2P(LA)$$Where: $$P(LA) =P(L \cup A) -P(L)-P(A)  = (1-0.13)-0.32-0.43 = 0.12$$Thus: $$P(L-LA)+P(A-LA) = 0.32+0.43-2(0.12) = 0.51$$Hence in $51\%$ of the town, the drinking water supplies will be contaminated with exactly one of the two impurities.

>[!exercise|10]
>Suppose that on a certain week, only one-third of the travelers visiting Paris took a trip to the Eiffel Tower’s top, one-half visited the Louvre Museum, and one-third took a tour of Notre Dame Cathedral. If none of the tourists visited all three sites, and for each pair of the sites, one-fourth of the travelers visited that pair, find the fraction of this particular group of tourists who did not visit any of the three sites.

>[!claim|*]- Solution
>Let $E, L, N$ be the Eiffel Tower’s top, the Louvre Museum and the Notre Dame Cathedral respectively. Then: $$\begin{array}{ccc} P(E) = 1/3  \\ P(L) = 1/2\\ P(N) = 1/3\\ P(ELN) = 0\\P(EL) = 1/4\\P(EN) = 1/4\\P(LN) = 1/4\end{array}$$We need to find $P(E\cup L\cup N)^c$. Using the $n=2$ case of the [[Inclusion-Exclusion Principle]], we have: $$\begin{array}{ccc}P(E \cup L \cup N) = P(E) + P(L) + P(N) -P(EL)-P(EN)-P(LN)+P(ELN)\\P(E\cup L \cup N) =1/3+1/2+1/3-1/4-1/4-1/4+0 \\P(E\cup L \cup N)=5/12\end{array}$$Thus: $$P(E\cup L \cup N)^c = 1- P(E \cup L \cup N) = 1 - 5/12 = 7/12$$Thus $7/12$ of this particular group of tourists did not visit any of the three sites.

### Chapter 2
#### Chapter 2-2.2 - A
>[!rmk|*]- Key Knowledge
>For this part, the keywords include:
>- [[Counting Principle]]
>- [[Power Set]] (Good to know, won’t really be used)

>[!exercise|1]
>How many six-digit numbers are there? How many of them contain the digit $5$? Note that the first digit of an $n$-digit number is nonzero.

>[!claim|*]- Solution
>**Six-Digit Numbers**:
>Let a six-digit number be represented by $d_1d_2d_3d_4d_5d_6$. Digits $2$ through $6$ can take on values from $0$ to $9$. Hence they have $10$ options whereas digit $1$ can only go from $1$ to $9$, so $9$ options. Thus: $$\begin{array}{ccc}  d_1 = \{1,2,3,4,5,6,7,8,9\} \\ d_i:1\le i \le 6 = \{0,1,2,3,4,5,6,7,8,9\} \end{array}$$By the [[Counting Principle]], there are: $$|d_1||d_2||d_3||d_4||d_5||d_6| = 9 \times 10^5= 900\;000$$six-digit numbers.
>
>**Contain the digit 5**:
>Here we find the amount that do not contain a single $5$ at all. This essential means removing $5$ from the sets we defined above. Thus $|d_1| = 8 \; \land \; |d_i:1 \le i \le 6| = 9$. By the counting principle, we have $8 \times 9^5$ which is $472\:392$ six-digit numbers that contain the digit $5$. The desired answer is found by: $$900\;000-472\:392 = 427608 \; \text{six-digit numbers that do not contain 5}$$
>

>[!exercise|2]
>How many different five-letter codes can be made using $a,b,c,d,e$? How many of them start with $ab$?

>[!claim|*]- Solution
>A code contains $5$ letter slot. Each letter slot has $5$ possible inputs. By the counting principle, there are $5^5$ possible combinations ($3125$). 
>
>To find the amount that start with $ab$, we can go about this two ways. In the first way, fix the first two slots to be $ab$, then consider the possibilities of the other $3$ slots which can take on any of the $5$ letters. Then there will be $5^3 = 125$ possible combinations. 
>
>The alternative is a bit more involved. Let us find the amount that does not start with $ab$. In the first slot, we have $4$ choices then in the other $4$ slots we can put any letter. Thus there are $4 \times 5^4 = 2500$ outcomes that do not start with $a$. Now suppose the first letter was $a$ but the second is not $b$, then we have $4 \times 5^3 = 500$ outcomes. In total, there are $3000$ outcomes that do not start with $ab$. The desired amount is then found by $3125-3000 = 125$. 

>[!exercise|3]
>The population of a town is $20\:000$. If each resident has three initials, is it true that at least two people have the same initials?

>[!claim|*]- Solution
>There are $26$ letters in the English alphabet. Since every resident has three initials, by the [[Counting Principle]], there are $26^3 = 17576$ possible combinations of initials. Since there are mode residents than possible combinations, it must be that at least two people have the same initials.

>[!exercise|6]
>In how many ways can we draw five cards from an ordinary deck of $52$ cards (**we care about order)**:
>1. With replacement?
>2. Without replacement?

>[!claim|*]- Solution
>**With replacement**:
>Since we replace the cards, for every pick, we will have $52$ choices. By the [[Counting Principle]], we will then have $52^5$ possible ways to draw five cards.
>
>**Without replacement**:
>Since we do not replace the cards, for every pick after our first pick, the number of cards will decrease by $1$. Hence the answer is $52 \times 51 \times 50 \times 49 \times 48$. 

>[!exercise|8] Modified
>Two fair dice are thrown. What is the probability that one dice has a $6$ and the other is odd?

>[!claim|*]- Solution
>There are a total of $6^2$ outcomes. Suppose the first dice gave a $6$ and the other an odd number. Then there are only $1\times 3$ possible ways to produce this. If the second dice was a $6$ and the first one was odd, there would also be $1 \times 3$ possible ways to produce this. Then the probability is given by: $$\frac{(1\times 3)+(1 \times 3)}{36} = 0.1\overline{66} \approx 16.66\%$$

>[!exercise|14]
>How many $n \times m$ arrays (matrices) with entries $0$ or $1$ are there?

>[!claim|*]- Solution
>By the [[Counting Principle]], there are $nm$ slots in the array (or this is probably a fact you just know). These slots can either have numbers $0$ or $1$, thus two possibilities. Thus there are: $$2 \times 2 \times 2\times \dots \times 2 \; \text{nm times} = 2^{nm}$$possible arrays (matrices) with entries $0$ or $1$.

>[!exercise|15]
>How many divisors does $55\:125$ have?
>Hint: $55\:125 = 3^25^37^2$.

>[!claim|*]- Solution
>Notice that $55\:125 = 3^25^37^2$. Thus our problem is to find how many divisors this has. If you are familiar with the idea of divisibility, our desired solution comes from finding out how many combinations there are in $3^a5^b7^c: 0 \le a \le 2 \; \land \; 0 \le b \le 3 \; \land \; 0 \le c \le 2$. Doing so will allow us to find all the divisors (I will not explain why this works here, but the logic is quite simple if you recall the definition of divisibility which is to find all $k$: $nk$ produces your number when $n \in \mathbb{N}$). By the counting principle, our answer is $3 \times 4 \times 3 = 36$.  
>
>More generally, to find the divisors of any number of the form $p_1^{a_{1}}p_2^{a_{2}}\dots$ where $p$ is prime, compute the following: $$(a_1 +1)(a_2+1)\dots = \; \text{Number of Divisors}$$which holds for all $\mathbb Z$ as a consequence of the [[Fundamental Theorem of Arithmetic]]. 

>[!exercise|18]
>How many four-digit numbers can be formed by using only the digits $2,4,6,8,9$? How many of these have some digit repeated?

>[!claim|*]- Solution
>**First Part**:
>The first part of this question is routine. There are $10$ possible digits, and, following the steps from Exercise 1, there are $9 \times 10^3$ four-digit numbers. We are restricting ourselves to $5$ digits, thus there are $5^4$ four-digit numbers that are formed using only $2,4,6,8,9$. 
>
>**Repeated Digits**:
>Let us find the amount that do not have repeated digits. To do so, the first digit can have $5$ choices, the next can only have $4$, so on so forth. Thus, the [[Counting Principle]] tells us there are $5\times 4 \times 3 \times 2$ possible outcomes that do not have repeated digits. Hence there are $5^4 - (5 \times 4 \times 3 \times 2) = 505$ four-digit numbers created using only $2,4,6,8,9$ that have repeated digits.

>[!exercise|26]
>From an ordinary deck of $52$ cards, $15$ cards are drawn randomly and without replacement. What is the probability that the first four cards are all clubs?

>[!claim|*]- Solution
>There are $4$ suits in a deck of cards. Each suit contains $13$ cards. Since $15$ cards are drawn randomly without replacement, there are a total of $52 \times 51 \times \dots \times 39$ possible outcomes. Here we want the first four cards to be clubs given by $P(N)$.
>
The first $4$ picks should be from a pool of $13$ cards, thus: $$P(N) = \frac{13 \times12 \times 11 \times 10 \times 48 \times \dots \times 39}{52 \times 51 \times \dots \times 39} = \frac{13 \times12 \times 11 \times 10}{52 \times 51 \times 50 \times 49} \approx 0.002641 = 0.2641\%$$It was maybe obvious, but as the final fraction shows, the other $11$ card draws do not matter.
#### Chapter 2-2.2 - B
>[!exercise|29]
>An integer is selected at random from the set $\{1,2, \dots, 1\:000\:000\}$. What is the probability that it contains the digit $5$?

>[!claim|*]- Solution
>There are $1\:000\:000$ possible combinations. Now, consider $d_1d_2d_3d_4d_5d_6$, a six-digit number. We will examine all combinations that contain a $5$. To do so, we will check every digit from left to right by following these rules:
>1. Fix $d_i$ to $5$ and find all outcomes. 
>2. Suppose $d_i$ is not $5$ and fix $d_{i+1}$ to $5$ and find all outcomes.
>3. Let $d_i = d_{i+1}$ and repeat.
>
>This recursive method will give us the outcomes we need (I figured this out by looking at the simpler case of numbers $0$ to $100$).
>
>Essentially, step $1$ will make it so that every digit to the left of $d_i$ will contribute $9$ and every digit to the right will contribute $10$. By the [[Counting Principle]], you will multiply these together. Step $2$ and $3$ are just there to get you to set the next digit to $5$ and repeat step $1$. Thus the answer is: $$10^5+(9 \times 10^4)+(9^2 \times 10^3)+(9^3\times10^2)+(9^4\times10)+9^5 = 468\:559$$(every addition separates a digit calculation. Essentially, if you fix $d_1 = 5$, then there are $10^5$ possibilities).
> In total, there are $468\:559$ numbers that contain the digit $5$. In total, the probability $P(\mathbb 5)$ that it contains the digit $5$ is: $$P(\mathbb 5) = \frac{468\:559}{1\:000\:000}\approx0.4686 = 46.86\%$$ 

>[!exercise|30]
>How many divisors does a natural number $N$ have?
>

>[!claim|*]- Solution
>By the [[Fundamental Theorem of Arithmetic]], every natural number $N$ has a prime factorization: $$p_1^{n_1}p_2^{n_2}\dots p_k^{n_k}$$where $p$ is prime. Let $d$ be a divisor of $N$, then $nd = N : n \in \mathbb{N}$. We need to find how many $d$’s there are. This can easily be done as seen in Exercise $15$. Here we are just generalizing. Applying the formula, the number of divisors $d$ that $N$ has is: $$(n_1+1)(n_2+1)\dots(n_k+1)$$

#### Chapter 2-2.2 - Self-Quiz
Time Allotted: $20$ minutes.

>[!exercise|1]
>In $2010$, three unrelated faculty members, Professors Rodriguez, Bucs, and Beineke ended up sitting on three adjacent seats in a row at the spring commencement ceremony of a university, where faculty occupied the chairs randomly. These professors somehow got into a discussion about birthday problems, and they were astonished when they learned that all three of them had the same birthday. Calculate the probability of such a coincidence. Assume that the birth rates are constant throughout the year and that each year has $365$ days.

>[!claim|*]- Solution
>Let $p_1,p_2,p_3$ be the professors possible birthdays. As there are $365$ days, there are, in total, $365^3$ possible combinations. It is clear that there are only $365$ possible outcomes where they **all** share the same birthday. Hence: $$P(B) = \frac{365}{365^3} = \frac{1}{365^2} \approx 0.0000075$$
>Do not try and do the “try and find how many outcomes where this is false and then do $1-\text{that}$”. It won’t end well (I am speaking from experience).

>[!exercise|2]
>The chair of the industry-academic partnership of a town invites all $12$ members of the board and their spouses to his house for a Christmas party. If a board member may attend without his spouse, but not vice versa, how many different groups can the chair get?

>[!claim|*]- Solution
>Each of the $12$ members can decide to, or to not, bring their spouse or just not go at all. There are $3$ choices and thus $3^{12} = 531\:441$ possible groups.

>[!exercise|3]
>In a pharmacy, there are $8$ unrelated people standing in line to pick up their prescriptions. Before the pharmacist gives the patients their prescription medications, following the pharmacy’s policy, she asks them the month and day of their birthdays. What is the probability that at least two of the last three of these $8$ people have the same birthday? Assume that the birth rates are constant throughout the year and that each year has $365$ days.

>[!claim|*]- Solution
>Each person has $365$ possible birthday dates. Thus there are $365^8$ possible birthday combinations. However, we are focusing on the last three, so that makes $365^3$ possible combinations. The amount of outcomes in which none of them share a birthday is given by $365 \times 364 \times 363$. Thus the desired probability that they **do** share a birthday $P(B)$ is: $$P(B) = \frac{365^3-(365 \times 364 \times 363)}{365^3} \approx 0.0082 = 0.82\%$$

>[!exercise|4]
>Cyrus and $27$ other students are taking a course in probability this semester. If their professor chooses eight students at random and with replacement to ask them eight different questions, what is the probability that one of them is Cyrus?

>[!claim|*]- Solution
>Every time a professor asks a question, he can ask it to his $28$ students (Cyrus is a student). By the [[Counting Principle]], there are $28^8$ possible outcomes. Now the outcomes in which Cyrus is **not** chosen is clearly $27^8$. Thus the probability $P(C)$ that he **is** chosen is: $$P(C) = \frac{28^8-27^8}{28^8} \approx0.2524 = 25.24\%$$


