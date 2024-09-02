Now that the usefulness of orthonormal bases are understood, how do we find them? The Gram-Schmidt Procedure is an algorithm for turning a linearly independent list into an orthonormal list with the same span as the original list.

>[!def|*] Gram-Schmidt Procedure
>Suppose $v_1, \dots, v_n$ is a [[Linearly Independent|L.I]] list of vectors in $V$. Let $f_1 = v_1$. For $k = 2, \dots, n$, define $f_k$ inductively by: $$f_k = v_k - \left(  \sum_{j=1}^{k-1} \frac{\langle v_k,f_j \rangle}{||f_j||^2} f_j \right) $$For each $k = 1, \dots, m$, let $e_k = \frac{f_k}{||f_k||}$. Then $e_1, \dots, e_n$ is an orthonormal list such that $span(v_1, \dots, v_k) = span(e_1, \dots, e_k)$ for each $k = 1, \dots, m$.

From this procedure, we can conclude:

>[!rmk|*] Existence of orthonormal basis
>Every [[Finite-Dimensional Vector Space|Finite-Dimensional]] [[Inner Product Space]] has an [[Orthonormal Basis]]. The proof follows from applying the Gram-Schmidt Procedure to a basis of $V$.

>[!example|1]
>Use the Gram-Schmidt Procedure to find an [[Orthonormal Basis]] for $\mathcal P_2(\mathbb{R})$ with [[Inner Product]]: $$\langle p,q \rangle = \int_{-1}^1 pq$$
>>[!claim|*]- Solution
>>The standard basis of $\mathcal P_2(\mathbb{R})$ is $\{1, x, x^2\}$. Thus we apply the Gram-Schmidt Procedure: $$f_1 = 1$$$$||f_1|| = \sqrt{\langle 1,1 \rangle} = \sqrt{\int_{-1}^1 1 \:dx} = \sqrt2 $$Hence: $$e_1 = \frac{f_1}{||f_1||} = \sqrt{\frac{1}{2}}$$Now: $$f_2 = x - \frac{\langle x,1 \rangle}{\sqrt2^2}1 = x-\frac{\int_{-1}^1 x \: dx}{2} = x$$
>>$$||f_2|| = \sqrt{\langle x,x \rangle} = \sqrt{\int_{-1}^1 x^2 \:dx} = \sqrt{ \frac{2}{3}}$$Hence: $$e_2= \frac{f_2}{||f_2||} = \frac{x}{\sqrt{\frac{2}{3}}} = \sqrt{\frac{3}{2}} x$$
>>Finally: $$f_3 = x^2 - \frac{\langle x^2,1 \rangle}{\sqrt2^2}1 -\frac{\langle x^2,x \rangle}{\sqrt\frac{2}{3}^2}x = x^2 -\frac{\int_{-1}^1 x^2 \: dx}{2}1 -\frac{3\int_{-1}^1 x^3 \: dx}{2}x$$
>>$$= x^2 - \frac{(\frac{2}{3})}{2} - \frac{3(0)}{2}x = x^2-\frac{1}{3} \implies f_3 = x^2 - \frac{1}{3}$$Now: $$||f_3|| = \sqrt{\langle x^2 - \frac{1}{3},x^2 - \frac{1}{3} \rangle} = \sqrt{\int_{-1}^1 \left( x^2 - \frac{1}{3} \right)^2 dx } = \sqrt\frac{8}{45}$$Hence: $$e_3 = \frac{f_2}{||f_2||} = \frac{x^2 - \frac{1}{3}}{\sqrt\frac{8}{45}} = \sqrt \frac{45}{8} \left(  x^2 -\frac{1}{3} \right) $$With this, we conclude our orthonormal basis is: $$\{\sqrt \frac{1}{2} , \sqrt{\frac{3}{2}} x, \sqrt \frac{45}{8} \left(  x^2 -\frac{1}{3} \right) \}$$Which is the correct answer.

#### Exercises
>[!exercise|1]
>Let $v_1, \dots, v_n$ be a list of [[Linearly Independent]] vectors in $V$. Let $e_1, \dots , e_n$ be the orthonormal basis of $V$ obtained by applying the Gram-Schmidt Procedure. Show that $\langle v_j,e_j \rangle > 0 \; \; \forall j \in \{1, \dots ,n\}$.
>>[!claim|*]- Proof
>>`\begin{proof}` 
>>Firstly, note that $v_1, \dots, v_n$ has $n$ vectors while the [[Orthonormal Basis]] $e_1, \dots , e_n$ also has $n$ vectors. Hence $v_1, \dots, v_n$ is a basis for $V$. Consider: $$\langle v_j,e_j \rangle = \left\langle v_j,\frac{f_j}{||f_j||} \right\rangle = \frac{1}{||f_j||}\langle v_j,f_j \rangle$$It suffices to show that $\langle v_j,f_j \rangle \ne 0$. By properties of [[Inner Product]]: $$\langle v_j,f_j \rangle = 0 \iff f_j = 0 \; \lor \; v_j = 0$$Since $v_1, \dots, v_n$ is a linearly independent list, $v_j \ne 0$. Now suppose $f_j = 0$, then $e_j = \frac{f_j}{||f_j||}$ which would give an indeterminate form. Hence $f_j \ne 0$ and $\langle v_j,f_j \rangle \ne 0$. Thus: $$\langle v_j,e_j \rangle>0$$as desired.
>>`\end{proof}`



