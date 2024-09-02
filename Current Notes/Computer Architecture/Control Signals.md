Control signals are needed in the [[ALU and Datapath Design]], the [[Instruction Fetch Section]] and the [[Instruction Address Generator]]. They govern what mux input is selected, what operations are done in the [[Arithmetic and Logic Unit|ALU]] and so on so forth.

>[!def|*]- Control signals for the ALU and data path design
>![[Pasted image 20240325105012.png]]
>- The numbers next to `Address A`, `Address B` and `MuxC` for the `0` option come from [[Instruction Encoding]]. 
>- New data is loaded into the [[Computer Architecture/Register File|Register File]] only when `RF-write` is asserted.

>[!def|*]- Control signals for the Instruction Fetch Section
>![[Pasted image 20240325105455.png]]

>[!def|*]- Control Signals for the Instruction Address Generator
>![[Pasted image 20240325105543.png]]