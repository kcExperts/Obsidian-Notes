Thank of a Metric Space as generalizing the [[Absolute Value]] to different sets.

>[!def|*] Metric Space
>A metric space $(S,d)$ is a set $S$ with a function $d:S \times S \rightarrow \mathbb{R}$ that satisfies:
>1. $d(x,y) \ge 0 \; \forall \: x,y \in S$ 
>2. $d(x,y) = 0 \iff x=y$
>3. $d(x,y) = d(y,x)$
>4. $d(x,z) \le d(x,y) + d(y,z) \; \forall \: x,y,z \in S$ ([[Triangle Inequality]])

>[!exm|*]- Metric Spaces
>The following are all metric spaces:
>- $\mathbb{R}$ with $d(x,y) = |x-y|$ is the Taxicab Distance.
>- $\mathbb{R}^d$ with $d(x,y) = \sqrt{\sum_{j=1}^d(x_j-y_j)^2}$ is the Euclidean Distance.
##### On the subject of Sequences
Since Metric Spaces can be thought of as a generalization of the absolute value, we can then generalize many definitions that we have done so far on arbitrary spaces.

TODO

>[!def|*] Complete Metric Space
>A metric space is called complete if all [[Cauchy Sequences]] converge to a limit in the metric space.

