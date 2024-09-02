---
aliases:
  - Sequence
---

>[!definition|*] Sequences
>A sequence of [[Reals]] is a function $f: \mathbb{N} \rightarrow \mathbb{R}$. The sequence itself is denoted as $a_n$ where $n \in \mathbb{N}$. A sequence can be denoted using:
> - A list to represent an obvious pattern.
> - As a rule (Example: $a_n = \frac{1}{2^n}$).
> - As a recursive relation (Example: $a_0 = 1 \; \land \; a_n = \frac{1}{2}a_{n-1}$)
#### Motivation
When working with [[Infinite Sums]], you have probably noticed that weird things can happen. Consider the infinite sum: $$\sum_{n=1}^\infty (-1)^n = -1 + 1 -1 +1 -1+1 \dots$$Since addition and subtraction are involved, you might be tempted to group up the terms:$$\sum_{n=1}^\infty (-1)^n = (-1 + 1) +(-1 +1) \dots$$Which appears to produce $0+0+\dots = 0$. However:$$\sum_{n=1}^\infty (-1)^n = -1 + (1 -1) +(1 -1) \dots $$can also be considered a valid grouping which appears to produce $-1 + 0 +0+\dots = -1$. So what is going on here? The use of the classical addition, subtraction and equality sign is deceiving as the familiar rules associated to these may not hold in all cases. In the sum above, the familiar grouping rule of addition appeared to produce two different answers. 

Figuring out when the standard rules of finite manipulations apply to the infinite is a core theme of analysis.

#### Visualization
There are two ways to visualize a sequence.
- Using a graph: x-axis $= n$ $\land$ y-axis $= a_n$.
- On a $\mathbb{R}$ number line where each point is labelled.

#### Links
[[Range of a Sequence]]
[[Bounds of a Sequence]]
[[Converging Sequences]]
[[Limits]]
[[Algebraic Limit Theorem]]
[[Squeeze Theorem]]
[[Monotone, Nondecreasing and Nonincreasing]]
[[Monotone Convergence Theorem]]
[[Subsequences]]
[[Bolzano-Weierstrass Theorem]]