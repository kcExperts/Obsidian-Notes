In computer systems it is often necessary to choose data from exactly one of a number of possible sources. 

>[!def|*] Multiplexer
>A circuit that generates an output that exactly reflects the state of one of a number of data inputs, based on the value of one or more selection control inputs, is called a multiplexer. We say a multiplexer “multiplexes” the input signals onto a single output. Mux’s can only support $2^n$ inputs.

>[!rmk|*] Graphical Representation
>The following represents the symbol for a $2$ to $1$ multiplexer. In general, it is not necessary to show $f$, $s$, $x_1$, $x_2$, $0$ or $1$. Just note that $s$ is the selector signal. 
>![[Pasted image 20240308133352.png]]
>Bigger Mux’s with $2^n$ inputs requires $n$ selectors. 

The circuit diagram for a $2$ to $1$ mux is shown below:
![[Pasted image 20240308133648.png]]