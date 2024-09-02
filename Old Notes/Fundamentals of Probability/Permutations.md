To count the number of outcomes of an experiment or the number of possible ways an event can occur, it is often useful to look for special patters. A permutation is an example of a special pattern.

>[!def|*] Permutation
>An ordered arrangement of $r$ objects from a set $A$ containing $n$ objects $(0 < r \le n)$ is called an r-element permutation of $A$, or a permutation of the elements of $A$ taken $r$ at a time. The number of r-element permutations of a set containing $n$ objects is denoted by: $$_nP_r = \text{r-element permutation of a set of n objects}$$

Suppose we had $A = \{a,b,c\}$, then the set of $2$ element permutations is $\{(ab),(ac),(bc),(ba),(ca),(cb)\}$ and so $_3P_2 = 6$.

>[!rmk|*] Formula for Permutations (Indistinguishable)
>$$_nP_r = \frac{n!}{(n-r)!}$$

>[!claim|*]- Proof of the formula
>`\begin{proof}`
>We use the [[Counting Principle]] to generate the formula. Suppose we had a set of $n$ objects and we wanted a permutation of $r$ elements. By the counting principle, in the first slot, we will have $n$ options. In the second slot, we will have $(n-1)$ options. This continues until we reach the $r^{th}$ slot. Since the first slot was $n$, and the second was $(n-1)$, at every slot $i$, there will be $(n-i+1)$ possible options, thus at slot $r$, there are $(n-r+1)$ options. Overall, we have: $$_nP_r = n(n-1)(n-2) \dotsi (n-r+1)$$We can rewrite this using the factorial. Notice that we have repeated multiplication from $n$ until $n-r+1$. Multiplications from $r$ onwards are not included, thus we have: $$_nP_r = \frac{n!}{(n-r)!}$$`\end{proof}`

>[!theorem|*] Formula for Permutations (Distinguishable)
>The number of distinguishable permutations of $n$ objects of $k$ different types, where $n_1$ are alike, $n_2$ are alike, $\dots$, $n_k$ are alike and $n = n_1+n_2 + \dotsi + n_k$ is: $$\frac{n!}{n_1! \times n_2! \times \dots \times n_k !}$$

>[!claim|*]- Proof
>`\begin{proof}`
>Imagine we had $n$ objects of $k$ different types and suppose $n_1$ are alike, $\dots$, $n_k$ are alike. For each $n_i : 1 \le i \le k$, they would each have $n_i!$ ways to rearrange them where they produce the same result. Since there are $k$ many $n_i$’s, by the [[Counting Principle]], there would be a total of $n_1! \times \dotsi \times n_k!$ possible combinations where an answer that was already given appears again. Hence, the total amount of permutations involving distinguishable objects is: $$\frac{n!}{n_1! \times n_2! \times \dotsi \times n_k!}$$
>`\end{proof}`

Let us now go through some examples:

>[!exm|1]
>Suppose that two anthropology, four computer science, three statistics, three biology, and five music books are put on a bookshelf with a random arrangement. What is the probability that the books of the same subject are together?

>[!claim|*]- Solution
>Let $A, C, S, B, M$ be the respective books. There are a total of $17!$ total combinations. Let us now find the total number of combinations where the books of the same subject are together. To do so, notice that for $A$, there are $2!$ arrangements for which the two books can be arranged together. Similarly, for $C,S,B,M$, there are $4!,3!,3!,5!$ respective arrangements. Now we simplify our problem, we have $5$ sets of books that can be arranged a total of $5!$ times. Putting everything together tells us that there are: $$(2! \times 4! \times 3!\times 3! \times 5!) \times 5!$$ways in which the books of the same subject are together. Thus, the desired probability $P(D)$ is: $$P(D) = \frac{(2! \times 4! \times 3!\times 3! \times 5!) \times 5!}{17!} \approx 6.996 \times 10^{-8}$$

>[!exm|2]
>If five boys and five girls sit in a row in a random order, what is the probability that no two children of the same sex sit together?

>[!claim|*]- Solution
>There are $_{10}P_{10} = 10!$ possible seating arrangements. Now consider the boys, they have $_5P_5 = 5!$ total possible seating arrangements and the girls also have that same number. 
>
>From this, the boys and girls have $2$ possible seating arrangements where they do not sit together. One where the boys occupy the odd numbered seats and one where they occupy the even numbered seats. Each one has $5! \times 5!$ possible arrangements, hence the desired probability is: $$P(D) = \frac{2 \times 5! \times 5!}{10!} \approx 0.0079 =0.79\%$$
>

>[!exm|3]
>In how many ways can we paint $11$ offices so that four of them will be painted green, three yellow, two white, and the remaining two pink?

>[!claim|*]- Solution
>Notice that the sum of the colors all add up to $11$, hence, using the distinguishable permutation method, we have: $$\frac{11!}{4!\times 3! \times 2! \times 2!} = 69\:300$$

>[!exm|4]
>A fair coin is flipped $10$ times. What is the probability of obtaining exactly three heads?

>[!claim|*]- Solution
>By the [[Counting Principle]], each coin has $2$ outcomes and it is flipped $10$ times, so there are $2 \times 2 \times \dotsi \times 2 = 2^{10}$ possible combinations. In total, we have $10$ coins. Each coin can take on $2$ outcomes. An outcome is either heads $H$ or tails $T$. We want it such that $H$ is repeated $3$ times and $T$ is repeated $7$ times. All together, the desired probability $P(D)$ is: $$P(D) = \frac{ \left(\frac{10}{3! \times 7!}\right) }{2^{10}} \approx 0.12$$

