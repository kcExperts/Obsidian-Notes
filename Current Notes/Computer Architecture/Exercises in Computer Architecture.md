
>[!exercise|*] Tutorial $9$ Q$3$
>Consider the following sequence of RISC-style instructions at the specified locations in memory: $$\begin{array}{ccc}  \text{0x6C0 \; \; \; Add \; R3,R4,R5} \\ \text{0x6C4 \; \; \; Store \; R3, 0x1000(R0)} \end{array}$$
>Consider the execution of this sequence on a processor of the form discussed in Chapter 5. At the point that the first instruction is to be executed, R4 has the value 0x00008765 and R5 has the value 0xFFFFFFFA. Track the contents of PC, IR, and internal data path registers RA,RB,RZ,RM,RY as the instructions in the sequence proceed through their execution. Create a chart with one row per clock cycle. Number the rows for reference purposes. There should be 8 columns in total, including the column with row numbers. In each row, show the values of the various registers _during_ the cycle corresponding to that row. Use "--" to indicate unknown values, and provide separate comments below the chart to describe the nature of those unknown values.

#### Solution
We must have $10$ cycles as we assume each stage takes a cycle to complete and there are $2$ instructions hence $10$ cycles. We also assume the previous instruction was $4$ behind. **Scroll to see the full table**.
Do note that ‘‘’ means it is the same as the cell above.

| Cycle | PC      | IR      | RA           | RB           | RZ           | RY           | RM           |
| :---: | ------- | ------- | ------------ | ------------ | ------------ | ------------ | ------------ |
|   1   | `0x6C0` | `0x6BC` | - -          | - -          | - -          | - -          | - -          |
|   2   | `0x6C4` | `0x6C0` | - -          | - -          | - -          | - -          | - -          |
|   3   | ‘‘’     | ‘‘’     | `0x00008765` | `0xFFFFFFFA` | - -          | - -          | - -          |
|   4   | ‘‘’     | ‘‘’     | ‘‘’          | ‘‘’          | `0x0000875F` | - -          | `0xFFFFFFFA` |
|   5   | ‘‘’     | ‘‘’     | ‘‘’          | ‘‘’          | ‘‘’          | `0x0000875F` | ‘‘’          |
|   6   | `0x6C8` | ‘‘’     | ‘‘’          | ‘‘’          | ‘‘’          | ‘‘’          | ‘‘’          |
|   7   | ‘‘’     | `0x6C4` | ‘‘’          | ‘‘’          | ‘‘’          | ‘‘’          | ‘‘’          |
|   8   | ‘‘’     | ‘‘’     | `0x00000000` | `0x0000875F` | ‘‘’          | ‘‘’          | ‘‘’          |
|   9   | ‘‘’     | ‘‘’     | ‘‘’          | ‘‘’          | `0x00001000` | ‘‘’          | `0x0000875F` |
|  10   | ‘‘’     | ‘‘’     | ‘‘’          | ‘‘’          | ‘‘’          | ‘‘’          | ‘‘’          |

>[!rmk|*]- Notes
>- `0x6BC` in the `IR` for cycle $1$ comes from taking `0x6C4` and subtracting $4$ to get previous instruction.
>- In cycle $1$, all other values are empty as we do not know what the previous instruction was.
>-  In cycle $2$, the `IR` finally gets updated with the `PC` from cycle $1$.
>- In cycle $3$, we get to store our values.
>- In cycle $4$, since this is an `add` operation, we will store in `RZ` the value of `[RA] + [RB]`. Also, since `RM` is technically in this stage, it will take the value of `RB` as shown in [[ALU and Datapath Design]]. However, it won’t do anything with it as it is not a store instruction.
>- In cycle $5$, we need only store the value into `RY` and be done. There is no use of `RM` as we are not storing anything. Thus `RY <- [RZ]`.
>- We are now done with the add instruction.
>- As per our “regulations”, the `IR` will not be updated with the new instruction until stage $2$ (cycle $7$).
>- In cycle $6$, we simply update the `PC`, as we would expect.
>- In cycle $8$, we need to store `R0` (`0x00000000`) in `RA`. As per the store instruction specification in [[Instruction Fetch and Execution Steps]], we will also have `RB <- [R3]`. But since we just calculated that value in `RZ`, we will just transfer the contents of `RZ` to `RB`. 
>- In cycle $9$, we compute the effective address. By the store instruction specification in [[Instruction Fetch and Execution Steps]], at the same time, the circuitry will get `RM` from `RB`. 
>- In cycle $10$, we do nothing.


