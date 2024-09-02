A basis of $V$ is a [[Linearly Independent|L.I]] list of vectors $v_1, \dots, v_n$ that [[Span]] $V$. Note that: $$v_1, \dots, v_n \;\;\text{is a basis for V} \iff v_1, \dots, v_n \;\;\text{spans V} \;\land\;v_1, \dots, v_n \;\;\text{is L.I.}$$
#### Theorem: Every Spanning List Contains a Basis
Every spanning list can be reduced to a basis. To do so, let B = $v_1, \dots, v_n$ : 

**Step 1**: If $v_1 = 0$, delete $v_1$ from $B$ , if $v_1 \ne 0$ , leave $v_1$ in $B$.
**Step j**: If $v_j \in span(v_1, \dots, v_{j-1})$ , delete $v_j$ from $B$. If not, then we leave $B$ unchanged. 

#### Theorem: Length of Bases
Let $B_1, B_2$ be bases for $V$ $\implies$ $B_1 \land B_2$ have the same length.
#### Lemmas

i) Every [[Span|Spanning List]] can be reduced to a basis.
ii) Every [[Linearly Independent|L.I]] list can be extended to a basis. 

### Links
[[Direct Sum]]
