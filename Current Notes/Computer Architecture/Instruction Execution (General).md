Consider the three fundamental instructions below. We will show how exactly they are executed.

>[!def|*]- Steps of an Arithmetic and Logic Instruction
>These types of instructions differ from a Load instruction in two fundamental ways; no memory access is required and two source registers (or one source and one immediate) are needed.
>
>Now consider the typical instruction: `Add R3, R4, R5`:
>1. Fetch the instruction and increment the [[Program Counter]].
>2. Decode instructions and read the contents of source registers `R4` and `R5`.
>3. Compute `[R4] + [R5]`.
>4. Load the result into the destination register, `R3`.
>
>With an Immediate Value, step `3` changes to include `X` instead.

We can generalize everything to a five-step design:

>[!def|*] The five-step design
>1. Fetch an instruction and increment the `PC`.
>2. Decode the instruction and read registers from the [[Register File]].
>3. Perform an [[Arithmetic and Logic Unit|ALU]] operation.
>4. Read or write memory data if instruction involved memory operand.
>5. Write the result into the destination register, if needed.

Not all instructions will have five-steps, but you can start from this template and remove points depending on the instruction. But it is advantageous to keep everything to a five step design. So if, for example, we were not doing a `load` or `store` instruction. We would simply do nothing at step 4.




