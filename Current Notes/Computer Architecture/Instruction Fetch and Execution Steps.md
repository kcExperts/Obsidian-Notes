Using our new found knowledge on the [[ALU and Datapath Design]], [[Instruction Fetch Section]] and [[Instruction Address Generator]]. Let us expand on how certain operations are handled in computers using the generalized $5$ stage process.

>[!rmk|*] Sign Extended
>For any instruction involving an immediate value, one should write in step $2$, “Sign extend immediate value”.

>[!exm|1] Add
>Consider `Add Rd, Rs, Rt`, then:
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode instruction: `RA <- [Rs]`, `RB <- [Rt]`
>3. `RZ <- [RA] + [RB]`
>4. `RY <- [RZ]`
>5. `Rd <- [RY]` (Destination register gets result)

>[!exm|2] Load
>Consider `Load Rt, X(Rs)`, then:
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode instruction: `RA <- [Rs]`
>3. `RZ <- X + [RA]`
>4. `Memory Address <- [RZ]`, read memory, `RY <- Memory data`
>5. `Rt <- [RY]`

>[!exm|3] Store
>Consider `Store Rt, X(Rs)`
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode instructions: `RA <- [Rs]` and `RB <- [Rt]`
>3. `RZ <- X + [RA]` and `RM <- [RB]`
>4. `Memory Address <- [RZ]`, `Memory Data <- [RM]`, write memory
>5. No action, handled somewhere else.

>[!exm|4] Unconditional Branch
>Consider `Branch loc`, then:
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode Instruction
>3. `PC <- [PC] + branch offset from IR` (handled by [[Instruction Address Generator]])
>4. No action.
>5. No action.

The same holds true for conditional branches except that we evaluate the condition using and `if` and `then`. 

>[!exm|5] Call
>Consider `Call address`, then:
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode Instruction
>3. `PC-Temp <- [PC]`, `PC <- address from instruction` (handled in [[Instruction Address Generator]])
>4. `RY <- [PC-Temp]`
>5. `Link Register in GPR file <- [RY]`
>
>

If we wanted to call from a register `Rs`, then in step $2$, we would have `RA <- [Rs]` and in step $3$, it would be `PC <- [RA]`.

>[!exm|6] Return
>Consider `Return`, then:
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode Instruction: `[RA] <- Link register in GPR file`
>3. `PC <- [RA]` (handled in [[Instruction Address Generator]])
>4. No action
>5. No action

>[!exm|7] Jump
>Consider `Jump address`, then:
>1. `Memory Address <- [PC]`, read memory, `IR <- Memory data`, `PC <- [PC] + 4`
>2. Decode Instruction
>3. `PC <- address from instruction` (handled in [[Instruction Address Generator]])
>4. No action
>5. No action

If it were from a register, we would have to put it in `RA` in step $2$ and then in step $3$, we would perform `PC <- [RA]`.



