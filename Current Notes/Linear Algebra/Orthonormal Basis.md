The orthonormal basis is one of the most useful concepts in the study of [[Inner Product]] spaces. 

>[!def|*] Orthonormal Basis
>An orthonormal basis of $V$ is an [[Orthonormal]] list of vectors in $V$ that is also a basis of $V$, that is: $$v_1, \dots,v_n \; \text{orthonormal basis} \iff v_1, \dots, v_n \; \text{orthonormal} \; \land \; \text{is a basis for }V$$ 

>[!rmk|*] Orthonormal lists of correct length are orthonormal bases
>Suppose $V$ is [[Finite-Dimensional Vector Space|Finite-Dimensional]]. Then every orthonormal list of vectors in $V$ of length $\text{dim}(V)$ is an orthonormal basis of $V$. The proof follows directly from the fact that orthonormal lists are linearly independent. 

>[!exm|*]-
>The [[Standard Basis]] for $\mathbb{F}^n$ is an orthonormal basis. 

Now suppose you had a basis $w_1, \dots, w_n$ which forms a basis for $V$. Then the question is what coefficients give $v = \lambda_1 w_1 + \dots + \lambda_n w_n$ for a given $v$. Clearly this will be difficult, but it turns out to be quite easy with the orthonormal basis as shown in [[Vector Linear Combination of an Orthonormal Basis]].