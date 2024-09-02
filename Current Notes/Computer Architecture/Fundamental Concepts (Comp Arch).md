
>[!def|*] How a processor executes code
>Suppose we have [[Byte Addressability]], then in [[Register Transfer Notation]], to execute an instruction, the computer needs to:
>1. `IR` $\leftarrow$ `[[PC]]` (Note the `PC` stores the memory location of the next instruction, so a double bracket here means that it needs to access the instruction pointed to by the `PC`).
>2. `PC` $\leftarrow$ `[PC] + 4` (In the case of a branch or jump instruction, a different offset may be used).
>3. Carry out the instruction in the [[Instruction Register]].
>
>Note that `PC` is the [[Program Counter]]

>[!def|*] Instruction fetch phase and instruction execution phase
>When an instruction is placed into the `IR`, it is called the instruction fetch phase. 
>
>Performing an operation in the instructions is the instruction execution phase. In the execution phase (excluding some exceptions), the possible instructions carried out are:
> - Read the contents of some `mem loc` and `load` into a processor register.
> - Read data from one or more processor registers.
> - Perform `ALU` operation and place result in a processor register.
> - Store data from a processor register into a given `mem loc`.

The hardware required to do the operations above are shown below:
![[Pasted image 20240324113326.png]]
Where:
- Processor communicates with memory using `Processor-memory Interface` storing current `PC` into `IR`.
- It then transfers data from and to during `read` and `write` operations.
- The `Instruction address generator` then updates `PC` after all instructions are fetched.
- The `IR` then executes the instructions utilizing the `Register file` to access any of the specified registers in the instructions.
- Then the contents of the registers are sent to the `ALU`. 
- The results are stored in registers using the `Register file`.
Where everything is controlled by the `Control circuitry`.

See [[Data Processing Hardware]]. 