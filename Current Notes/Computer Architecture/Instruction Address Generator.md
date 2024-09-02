To generate a new address for the `PC` to increment to, the Instruction Address Generator is used:
![[Pasted image 20240324125301.png]]
Here we note:
 - `MuxPC` determines whether a call instruction was done (`RA`). If not, it will take its previous instruction and put it in the `PC`. 
 - To increment `PC`, we determine if a branch instruction was called in which case we do not add the usual $4$ to it. To do the addition, an adder is used.
 - `PC-Temp` is needed to hold the contents of the `PC` temporarily during the process of saving the subroutine or interrupt return address (essentially for call instructions).

