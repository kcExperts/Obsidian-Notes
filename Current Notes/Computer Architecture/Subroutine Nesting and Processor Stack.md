---
aliases:
  - Subroutine Nesting
---
It is often useful to be able to nest [[Subroutines]] in a subroutine. Either for recursive relations or other purposes. However, as seen in the [[Subroutines]] section, the link register only holds only one return address. Thus, for nesting, we need a way to hold multiple return addresses.

Now, thinking of nested subroutines, once they reach their lowest level, they return to the level directly before it. One then thinks of a stack and how nesting is essentially a LIFO order. Thus subroutine return addresses should be pushed onto a Processor Stack. For [[NIOS II]], this will mostly be in the form of the [[Stack Pointer]]. 

See [[NIOS II Conventions]] for the register that holds this processor stack.



