Consider a program where the user uses a variable that has not been initialized or branches off to another undefined location, how can we handle this problem?

>[!def|*] Two-Pass Assembler
>The assembler scans through the source program twice.
> - In the first pass, it creates a symbol table for all variables, setting values for equation directives and determines the address label values.
> - In the second pass, it executes the program by doing lookups in the symbol table as required.

