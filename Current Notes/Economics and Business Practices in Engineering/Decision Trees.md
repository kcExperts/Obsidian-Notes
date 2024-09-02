
>[!def|*] Decision Tree
>A decision tree is a graphical representation of the logical structure of a decision problem in terms of the sequence of decisions to be made and outcomes of chance events. Each branch of the tree is a series of conditional probability statements. The conditioning is mapped out by each branch of the tree.

>[!def|*]- Components of a Decision Tree
>In a decision tree, we have many components described below:
>- **Decision Node**: Denoted by a *square*, represents a decision to be made by the decision maker.
>- **Chance Node**: Denoted by a *circle*, represents an event whose outcome is uncertain.
>- **Branches**: *Lines* connecting nodes from left to right, representing the sequence of possible decisions and chance events.
>	- A chance node following a decision node implies the decision maker must anticipate the future outcome. 
>	- A decision node following a chance node implies the decision maker knows the future outcome.
>- **Leaves**: Indicate the values/payoffs associated with terminal branch of the tree.
>  
>  A decision tree grows from left to right and *usually* begins with a decision node.
>  ![[Pasted image 20240603175723.png]]

>[!def|*] Decision Process
>1. **Structure the problem**: Develop a decision tree.
>2. **Rollback**: Moving from *right* to *left* on the tree, we:
>	-At each chance node, compute the expected value of the possible outcomes;
>	At each decision node, select the option with the best expected value (this becomes the value associated with that node) and mark options not selected with a double slash (//) to represent branches not pursued.  
>	Continue until the leftmost node is reached.
>3. **Conclusion**: The expected value of the final node is the expected value of the overall decision.

Recall that the expected value $E(X)$ is given by: $$E(X) = \sum x\cdot p(x)$$Where:
- $x$ is a numbered event;
- $p(x)$ is the [[Probability Function]] evaluated at the specified $x$.
- $E(X)$ is the [[Expected Value]].

During an analysis, one would start from the *right* and move to the *left*. Compute the expected value for the nodes on the same depth. That will then be the expected value of the next node. If a decision needs to be made, choose the path with the highest expected value. 

The expected value of the leftmost node is the expected value of the overall decision.

