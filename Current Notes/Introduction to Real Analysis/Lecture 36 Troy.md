
>[!theorem|*] Picard-Lindelöf Existence and Uniqueness 
>Let $A \subseteq \mathbb{R}^2$ be open and $F: A \rightarrow \mathbb{R}$ be continuous on $A$. Further, writing $F(t,z)$, suppose that $F$ is Lipschitz continuous in $z$ on $A$. Consider the initial value problem (IVP) $dy/dt = F(t,y)$ and $y(t_0) = y_0$ where $(t_o,y_o) \in A$. Then there exists a solution $y(t)$ to the IVP with $t \in [t_0- \alpha, t_0 + \alpha]$ for some $\alpha > 0$ and this solution is unique.
>

>[!claim|*] Not a proof but notes from class instead
>Essentially, we need to prove that there exists a solution for: $$y(t) = y_0 + \int_{t_0}^t F(s,y(s)) \: ds \; \; \; \; \star$$The above equation satisfies the differential equation and the IVP. To prove the theorem, we need to:
>1. Define a sequence $y_n(t)$
>2. Show $y_n(t)$ converges uniformly to $y(t)$.
>3. $y(t)$ satisfies $\star$.
>4. Show $y(t)$ is unique.
>
>Now let us set up the geometric interpretation:
>![[Pasted image 20240408103603.png]]
>Since $A$ is open, $\exists \: \epsilon \in \mathbb{R}_+ : B_\epsilon ((t_0,y_0)) \subseteq A$. Now let us construct a closed rectangle inside the epsilon ball: $$R^* = \{(t,y):t_0-a \le t \le t_0 + a, y_0 - b \le y \le y_0+b\}$$The rest of the proof happens inside our rectangle $R^*$:
>![[Pasted image 20240408103914.png]]
>Since $R^*$ is compact, and $F$ is continuous, then we can apply the [[Extreme Value Theorem]] which allows us to let $K = \max|F(t,y)|$. We draw a line with a slope of $K$ (see image) along with a mirror image. Then the line of slope $K$ intersects the rectangle at $t_0 + \frac{b}{K}$. Define $\alpha = \min\{a,\frac{b}{K}\}$. Now we want to truncate this rectangle to form R:
>![[Pasted image 20240408104243.png]]
>Where $R \subseteq R^*$. (We will only focus on solutions that are forward in time, although you could just repeat this for the backward time intervals).
>
>**Part 1**:
>Firstly, we define a sequence of functions $y_n(t)$: $$y_{n+1}(t) = y_0 + \int_{t_0}^t F(s,y_n(s))\: ds$$Now we need to verify that that the above equation is well defined (I.e. show the integral is well defined). Let us do the classical induction (which I am NOT writing out again, see class notes or Tyler lecture 36). Anyways, the idea of doing this is to make sure that $y_n(t)$ never leaves the box:
>![[Pasted image 20240408104649.png]]
>As if it leaves the box, we will not know whether or not it is continuous.
>Anyways now that we have “*showed*” that it is well-defined (see other notes for full calculations), we move on.
>
>**Part 2**:
>We need to show $y_n(t)$ converges uniformly to $y(t)$. Clearly: $$y_n(t) = y_0 + (y_1(t) -y_0) + \dots + (y_n(t) - y_{n-1}(t))$$For notation, define $\triangle y_n(t) = (y_n(t) - y_{n-1}(t))$. Thus: $$y_n(t) = y_0 + \sum_{k=1}^n \triangle y_k(t)$$We set is up like this as we have a nice and simple test to verify if the series converges, being the [[Weierstrass M-test]]. Now by induction, one can show (I am not writing down those calculations, see class notes or Tyler lecture 36 notes): $$|\triangle y_n(t)| \le \frac{K}{L} \frac{L^n(t-t_0)^n}{n!} = M_n$$The idea behind getting this is to start with $n = 1$ and try to find something to bound it, then $n=2$ so on so forth until you see a pattern. Once you have the pattern, use induction to show it holds $\forall \: n$. For reference: $$L \int_{t_0}^t |\triangle y_n(s)| \: ds \le L \int_{t_0}^t \frac{K}{L} \frac{L^n(s-t_0)^n}{n!}$$
>Anyhow, moving on:
>
>**Part 3**:
>Literally evaluate the limit of $y_n(t)$ and verify that it spits out $\star$ (for $n$). Which it does (yay!). Now in the proof for this part, you will need to bring in the limit inside $F$. This is something we haven’t justified but we can do it since $F$ is (uniformly?) continuous. You can prove this just about the same way that you can prove limit of integral vs integral of limit for sequences. 
>
>**Part 4**:
>Now we show uniqueness. We shall do the classical way of proving this. Suppose $y(t)$ and $z(t)$ are solutions, we shall show that they are the same on the interval $t \in [t_0 - \alpha, t_o + \alpha]$. We know: $$0 \le |y(t) - z(t)| = |\int_{t_0}^t F(s,y(s)) \: ds - \int_{t_0}^t F(s,z(s)) \: ds |$$Bringing the absolute value inside the integral and then using the Lipschitz condition produces: $$\le L \int_{t_0}^t |y(s)-z(s)| \: ds$$Notice that our last integral is the time integral of $|y(t) - z(t)|$. Define $\int_{t_0}^t |y(s)-z(s)| \: ds = U(t)$. Then we have: $$0 \le U'(t) \le LU(t) \implies U'(t) - LU(t) \le 0$$Multiplying by $e^{-Lt}$ gives: $$e^{-Lt}U' - e^{-Lt}LU \le 0 \implies [e^{-Lt}U]' \le 0$$Now we solve using the tricks that we would in an ODE class. Thus we integrate both sides from $t_0$ to $t$: $$ \int_{t_0}^t [e^{-Ls} U(s)]' \: ds \le 0 \implies  e^{-Lt} U(t)-e^{-Lt_0} U(t_0) \le 0$$Where $U(t_0) = 0$. Thus: $$e^{-Lt}U(t) \le 0$$Notice the exponential is always greater than $0$, thus: $$0 \le e^{-Lt} U(t) \le 0$$Which holds by [[Grönwall’s Inequality]], hence by the [[Squeeze Theorem]], $U(t) = 0$.  








