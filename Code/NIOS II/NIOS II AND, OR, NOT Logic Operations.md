Note that IMMED is a $16$-bit value and steps outlined in [[Handling 32-Bit Immediate Values]] will need to be done to extend it to a specific $32$-bit number without it just having $0$ extension.

All of the following are bit-wise [[Logic Instructions]].

>[!def|*] And Operation
> - `and   rD, rA, rB` produces $[\text{RD}] \leftarrow [\text{RA}] \land [\text{RB}]$
> - `andi   rD, rA, rB` produces $[\text{RD}] \leftarrow [\text{RA}] \land \text{IMMED}$


>[!def|*] Or Operation
> - `or   rD, rA, rB` produces $[\text{RD}] \leftarrow [\text{RA}] \lor [\text{RB}]$
> - `ori   rD, rA, rB` produces $[\text{RD}] \leftarrow [\text{RA}] \lor \text{IMMED}$


>[!def|*] Not Operation
> - `not   rD, rA, rB` produces $[\text{RD}] \leftarrow [\text{RA}] \;\lnot\; [\text{RB}]$
> - `noti   rD, rA, rB` produces $[\text{RD}] \leftarrow [\text{RA}] \;\lnot\; \text{IMMED}$
