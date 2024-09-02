>[!exm|1]
>Consider the instruction: `Load R5,X(R7)`. Then to execute this instruction, the computer needs to:
>1. Fetch the instruction from [[Memory]] and place it in the `IR`.
>2. Increment the `PC`.
>3. Decode the instruction and determine the operation.
>4. Read `R7`.
>5. Compute `X+[R7]`.
>6. Use the sum as the effective address to access, and read the contents. 
>7. Load the data into the destination register `R5`.

>[!def|*] Generalizing the Load Instruction - The 5 step Process
>Consider any general load instruction: `Load Rt, X(Rs)`. Then:
>1. Fetch instruction into `IR` and increment `PC`.
>2. Decode the instruction: `read` contents of `Rs`
>3. Calculate effective address.
>4. `read` information at effective address.
>5. `load` information from `X(Rs)` into `Rt`.

>[!rmk|*] Generalization in RTN
>Consider [[Register Transfer Notation]] for the $5$ step process:
>1. `IR <- [[PC]]` and `PC = [PC] + 4` (Assume no jump/branch)
>2. Read source register `Rs`.
>3. Compute `X+[Rs]`
>4. Read `X+[Rs]`
>5. Perform `Rt <- X+[RS]`

