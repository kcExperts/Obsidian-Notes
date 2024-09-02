---
aliases:
  - Event
---

>[!def|*] Sample Space
>If the outcome of an experiment is uncertain but all the outcomes are known, then the **set** of all outcomes is called the Sample Space of the experiment: $$S = \text{Sample Space of the Experiment}$$Outcomes in $S$ are called Sample Points.

>[!def|*] Event
>Certain subsets of $S$ are referred to as events. Thus an event is a set of sample points.
> - If the outcome of the experiment belongs to an event $E$, then the event $E$ has occured.

>[!exm|1]- 
>Suppose you toss a coin, then the set $S$ consists of two outcomes, either “heads” $(H)$ to “tails” $(T)$. Hence: $$S = \{H,T\}$$

>[!exm|2]-
>Suppose that an experiment consists of two steps. 
>1. A coin is flipped
>2. If the outcome if $T$, then a die is tossed. If the outcome is $H$, the coin is flipped again. 
>
>Since our overall experiment will always consist of two steps (either flip a coin twice or flip a coin then roll a die), then our set of Sample Points will be: $$S = \{T1, T2, T3, T4, T5, T6, HT, HH\}$$Here, in the event that $H$ is the result of the first flip, we have:$$E_H = \{HH, HT\}$$Similarly, if $T$ is the result of the first flip, we have: $$E_T = \{T1,T2,T3,T4,T5,T6\}$$

The set $S$ of Sample Points need not be finite either, as is shown below:

>[!exm|3]-
>Suppose a light bulb has a maximum lifetime of $1000$ hours. Then $S$ is given by: $$S = \{x \in \mathbb{R}: 0 \le x \le 1000\}$$

$S$ can be a combination of variables as shown below:

>[!exm|4]- 
>Suppose a bus has a max capacity of $34$ passengers and arrives, every day, at the station between $11$ A.M and $11$:$40$ A.M. Then what is $S$? It will be all possible combinations of the amount of passengers $i$ and the time $t$ (We will denote the time as $11$ and $11 \frac{2}{3}$ to be in hours). Hence: $$S = \left\{ (i,t): 0 \le i \le 34 \; \land \;11 \le t \le 11 \frac{2}{3}\right\} $$If $t$ was measured in a different unit, then the values would be different. For example, if it were minutes, then we would have $0 \le t \le 40$.











