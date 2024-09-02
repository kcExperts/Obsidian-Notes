The following describes the Instruction Fetch Section:
![[Pasted image 20240324124556.png]]Note:
- The addresses used to access memory come from `PC` when fetching instructions and from `RZ` in the [[ALU and Datapath Design]]. `MuxMA` then selects one of these two to be sent to the Processor-Memory Interface. 
- Instructions in the `IR` may require an Immediate value. Depending on the cases, we need to extend to 32 bits in `Immediate`. Once that is done, it is sent to `MuxB`. 