Here we will prove some basic theorems that we will use. When proving these theorems, we must ensure that the **events are mutually exclusive** to be able to use the probability axioms.

>[!theorem]
>For any event $A, P(A^c) = 1-P(A)$.
>
>I.e. The probability of the nonoccurrence of $A$ is equal to $1$ minus the probability of its occurrence.

>[!claim|*]- Proof of Theorem 1
>`\begin{proof}` 
>We know that: $$1 =P(S) = P(A \cup A^c) = P(A) + P(A^c)$$Rearranging nets us: $$1=P(A)+P(A^c) \implies P(A^c) = 1-P(A)$$As desired
> `\end{proof}`

The following remark is of upmost importance when handling Theorem 2 and Corollary 1.
>[!rmk|*] Necessity of $A \subseteq B$
>Suppose $A \not\subseteq B$, then $P(B-A) \ne P(B)- P(A)$. To see this, consider rolling an [[Unbiased]] die. Let $B = \{1,2\} \; \land \; A = \{3,4,5\}$, then $B-A = \{1,2\}$. Thus: $$P(B-A) = \frac{1}{3} \ne P(B)-P(A) = \frac{1}{3} - \frac{1}{2}$$

>[!theorem]
>If $A \subseteq B$, then: $$P(B-A) = P(BA^c) = P(B)-P(A)$$

>[!claim|*]- Proof of Theorem 2
>The uninformed would probably prove this by stating Axiom $3$ in its finite form. However we cannot do this as we do not know if $A$ and $B$ and mutually exclusive events. Plus, it only holds for addition and set union, not for subtraction and set difference (in general).
>
>`\begin{proof}`  
>Since $A \subseteq B$, then $B = (B-A) \cup A$. Also, $(B-A)A = \emptyset$. Hence $B-A$ and $A$ are mutually exclusive, thus: $$P(B) = P((B-A) \cup A) = P(B-A) + P(A)$$Hence: $$P(B) = P(B-A)+P(A) \implies P(B-A) = P(B) + P(A)$$
>Where: $$P(B-A) = P(BA^c)$$which is a fact seen in [[Sets and Probability]].
>`\end{proof}`

>[!corollary|1]
>If $A \subseteq B$, then $P(A) \le P(B)$.

>[!claim|*]- Proof of Corollary 1
>`\begin{proof}` 
>By Theorem $2$, we have: $$P(B) = P(B-A)+P(A) \ge P(A)$$
> `\end{proof}`

>[!theorem]
>$$P(A \cup B) = P(A) + P(B) -P(AB)$$
>This is the $n=2$ case of the [[Inclusion-Exclusion Principle]]

>[!claim|*]- Proof of Theorem 3
>`\begin{proof}`  
>Here we do not know if these event are mutually exclusive (if they were, $P(AB) = 0$). To prove this, we note: $$\begin{array}{ccc} A \cup B = A \cup (B - AB) \\ \emptyset = A(B-AB) \end{array}$$With this, we have that $A$ and $B-AB$ are mutually exclusive events. Hence: $$P(A\cup B) = P(A \cup (B-AB)) = P(A)+P(B-AB)$$Now note that $AB \subseteq B$, then by Theorem 2: $$P(B-AB) = P(B) - P(AB)$$Putting it all together leaves us with: $$P(A \cup B) = P(A) + P(B) - P(AB)$$
>`\end{proof}`

>[!theorem]
>$$P(A) = P(AB) + P(AB^c)$$

>[!claim|*]- Proof of Theorem 4
>`\begin{proof}` 
>It is clear that: $$A = AS = A(B+B^c)=AB+AB^c$$It is also clear that $AB$ and $AB^c$ are mutually exclusive events, hence: $$P(A) = P(AB+AB^c) = P(AB) + P(AB^c)$$as desired.
> `\end{proof}`

You might have noticed that the idea that finding mutually exclusive in probabilities to then apply the axioms is much like applying [[Cardinality]]. 

>[!exm|1]- A community
>Suppose that in a community of $400$ adults, $300$ bike or swim or do both, $160$ swim, and $120$ swim and bike. 
>
>What is the probability that an adult, selected at random from this community, bikes?
>
>**Solution**
>We have a total of $400$ adults. Since every adult is its own person, we can say they are mutually exclusive. Hence $P(a_i) = \frac{1}{400}$ where $a_i$ is some random adult (where $1 \le i \le 400$).
> Let $A$ be the event in which an adult can bike. Let $B$ be the event in which an adult can swim. Based off the question, we know: $$\begin{array}{ccc} P(A \cup B) = \frac{300}{400} = \frac{3}{4} \\ P(B) = \frac{160}{400} = \frac{2}{5}\\ P(A B) = \frac{120}{400} = \frac{3}{10}  \end{array}$$Now we want to find $P(A)$. All we need to do is apply Theorem 3: $$P(A) = P(A \cup B) +P(AB) - P(B) = \frac{3}{4} + \frac{3}{10} - \frac{2}{5} =\frac{13}{20} = 0.65$$

>[!exm|2]- Smokers
>In a community, $32\%$ of the population are male smokers, $27\%$ are female smokers. What percentage of the population smoke? (Solve using Theorem 4).
>
>Let $A$ be the event that someone picked at random from the community smokes. Let $B$ be the event that they are male. Then: $$\begin{array}{ccc} P(B) = 0.32  \\P(B^c) = 0.27 \end{array}$$Then: $$P(A) = P(AB)+P(AB^c) = 0.32 + 0.27 = 0.59$$



