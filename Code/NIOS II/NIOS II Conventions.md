The following are a list of registers than should only be used for the described purpose:

| Register |                  Purpose                   |
| :------: | :----------------------------------------: |
|    r0    |         Contains the constant `0`          |
|    r1    |    Temporary register for the Assembler    |
| r24, r29 |       Used for exception processing        |
| r25, r30 | Reserved exclusively for JTAG Debug Module |
|   r26    |     Global pointer to user prog. data      |
|   r27    |    Is the processor’s [[Stack Pointer]]    |
|   r28    |          Is the [[Frame Pointer]]          |
|   r31    |      Link register for return adress       |

>[!rmk|*] Notation
>NIOS II uses lower-case instruction mnemonics.

>[!rmk|*] Load and Store Instruction
>Only operations that can be used to move between memory or I/O. Alignment is required and the index (for this course) is required.

