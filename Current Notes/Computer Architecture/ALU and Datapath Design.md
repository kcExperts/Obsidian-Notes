The $5$ step process for [[Instruction Execution (General)]] is represented in the following diagram:

>[!rmk|*]- Visual
>![[Pasted image 20240324121742.png]]

The circuitry required for Stage $3$, the [[Arithmetic and Logic Unit|ALU]], is already known (see [[Arithmetic and Logic Unit|ALU]]). However, if we want to accommodate steps $2, 4,5$, we need additional circuitry **(Stage $1$ provides control signals, which will be seen later)**. We must extend the data path design to include memory-access instructions. Thus we give the following:

>[!rmk|*]- Extension
>![[Pasted image 20240302103437.png]]

Notice that `RA` and `RB` are introduced.
However, we are more interested in the following part:

>[!rmk|*]- Interest
>![[Pasted image 20240302103525.png]]

Note that `RB` feeds into `RM`. It is necessary to insert registers between stages to hold the result from in one clock cycle so it can be used as input in the next clock cycle. Now after Stage $3$, we need to incorporate memory access (if needed). Hence:
- `Mux Y` selects:
	- `RZ` alone if the instruction was an `add` or something similar.
	- If the case of a `load` and `store` instruction, `RZ` is transferred to the `Memory Address`. 
		- In a `load` instruction, data read from memory, `Memory Data` (given by `RZ`) is selected by `Mux Y` and is placed in `RY`. 
		- In a `store` instruction, data has already been read from the register file (stage $2$). It is placed into `RM` (stage $3$) which is then sent to `Memory data` in stage $4$. No action is done in stage $5$.
Note that `Mux Y` has a `Return address` option for call instructions (subroutines).





