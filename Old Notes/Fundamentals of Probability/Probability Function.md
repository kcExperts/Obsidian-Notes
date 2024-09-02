---
aliases:
  - Probability Functions
---

>[!def|*] Probability Function
>A probability is a set function from $\mathcal P(S)$, which is the set of all possible events of the [[Sample Space]] $S$, to $[0,1]$. Hence: $$P: \mathcal P(S) \rightarrow [0,1]$$

>[!def|*] Increasing
>A sequence $\{E_n, n \ge 1\}$ of events of a sample space is called increasing if: $$E_1 \subseteq E_2 \subseteq E_3 \subseteq \dots \subseteq E_n \subseteq E_{n+1} \dots$$
>Thus for an increasing sequence of events, we define the notation: $$\lim_{n \rightarrow \infty} E_n = \bigcup_{i=1}^\infty E_i$$Which is the event that **at least one** $E_i$ occurs.

>[!def|*] Decreasing
>A sequence $\{E_n, n \ge 1\}$ of events of a sample space is called decreasing if: $$E_1 \supseteq E_2 \supseteq E_3 \supseteq \dots \supseteq E_n \supseteq E_{n+1} \dots$$Thus for a decreasing sequence of events, we define the notation: $$\lim_{n \rightarrow\infty} E_n = \bigcap_{i=1}^\infty E_i$$Which is the event that **every** $E_i$ occurs.

