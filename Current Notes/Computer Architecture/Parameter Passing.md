See [[NIOS II Conventions]] for details on parameter passing. 

In high level code, we pass arguments into the function that then become function specific variables. Unfortunately, such convenience does not exist. Thus, if we pass the registers to the function without saving the contents they had in beforehand, they risk being modified inside the function and loosing the content they were holding onto before. 

The solution to this is to use the [[Stack Pointer]]. We load the contents of the registers that will be modified into the stack pointer at the start of the subroutine then extract them back on to the registers at the end of the subroutine. See [[NIOS II Conventions]] for details. 

For lists, passing a pointer to the first number in the list is a wise idea.