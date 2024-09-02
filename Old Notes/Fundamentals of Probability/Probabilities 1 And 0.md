We should take care in not misinterpreting events with probabilities $1$ and $0$. Suppose $P(E) = 1$ and $P(F) = 0$, then it is not correct to say $E = S$ and $F = \emptyset$. 

Consider choosing a number at random from $(0,1)$. What are the chances that we pick $1/3 = 0.33333333 \dots$. Let $A_n$ be the event that the first $n$ digits are $3$’s, then: $$A_1 \supset A_2 \supset A_3 \supset \dots \supset A_n \supset A_{n+1}$$Now $P(A_1) = 1/10$ as there are $10$ possible digits to choose from, each equally likely. $P(A_2) = 1/100$ as there are $100$ numbers to choose from. In general, $P(A_n) = (1/10)^n$. Furthermore, $\{1/3\} = \bigcap_{n=1}^\infty A_n$ (we attach all the $3$ together). Thus by the [[Continuity of Probability Functions]], we have: $$P \left( \frac{1}{3}\right) = P \left( \bigcap_{n=1}^\infty A_n \right) =  P \left( \lim_{n \rightarrow \infty} A_n \right) = \lim_{n \rightarrow \infty} P(A_n) = \lim_{n \rightarrow \infty} \left( \frac{1}{10} \right)^n = 0 $$Hence the probability is $0$. In fact, for any number in $(0,1)$, the probability of picking it will also be $0$. Thus, a probability of $0$ does not imply the $\emptyset$. 

Now let us show $\exists \: P(B) = 1: B \ne S$. Consider $t \in (0,1)$. Then $P(t) = 0$. Let $B = (0,1) - \{t\}$. Hence: $$P(B) = P(S) - P(t) = 1-0 = 1$$Hence $P(B) = 1$ but $B \ne S$. Thus there are infinitely many events $B$ with respect to some $t$, each with probability $1$ but that are not equal to $S$.






