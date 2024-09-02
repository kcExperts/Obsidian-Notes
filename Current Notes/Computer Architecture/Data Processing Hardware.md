Computation operates on data stored in registers. The data in the registers are processed using combinational circuits such as [[Adders]], and the results are placed into a register.

A clock signal is used to control data transfer. Registers comprise of edge-triggered [[Flip-Flops]] (assume that the clock period is long enough for computations to be done).

In essence: $$\text{register} \rightarrow \text{combinational \ logic} \rightarrow \text{registers}$$Which applies for data and any state-machine control.

