When your program in being compiled, each code file goes through a preprocessing phase. A program, called the preprocessor, makes various temporary changes to the text of the code file (such as removing comments and ensuring files end with a newline). It also scans the files, looking for **preprocessor directives**. The result is called a translation unit, which is then compiled by the compiler. 

>[!def|*] Preprocessor directives
>Preprocessor directives (often called directives) are instructions that start with a `#` symbol and end with a newline. These directives tell the preprocessor to do certain tasks. Note that the preprocessor uses its own syntax and so it does not understand `C++`. Putting a directive inside a function will not make it run when the function is run, as the preprocessor does not understand what a function is.

>[!def|*] Include directive
>The include directive (`#include`), when used, tells the preprocessor to replace the directive with the contents of the included files, which are then preprocessed, so on and so forth until all files are preprocessed. The include directive is almost exclusively used to include [[Header Files]]. 

>[!def|*] Define directive
>The define directive (`# define`) is used to create a macro (a rule that defines how input text is converted into replacement output text). They are defined as `#define IDENTIFIER substitution_text`. Thus when the identifier (in all caps) is written in your code, the preprocessor will convert it to the substitution text. No substitution will take place if the identifier is used in preprocessing code. 
>
>If `substitution_text` is left *blank*, the preprocessor will literally leave it blank. This does have uses in conditional compilation described below.

>[!rmk|*]
>If you include a [[Header Files|Header file]], the define identifier in the header file will be usable in the main file.
### Conditional Compilation
The conditional compilation directives allow you to specify under what conditions something will or will not compile. 

- `#ifdef` allows the preprocessor to check whether an identifier has been **previously** `#defined`. If so, the code between `#ifdef` and `#endif` is compiled.
- `#ifndef` does the opposite of `#ifdef`; it checks whether an identifier has NOT been defined. If so, it runs the code between `#ifndef` and `#endif`.
- `#if 0` is used to exclude a block of code from being compiled (until `#endif`). This provides a convenient way to “comment-out” code that already contains comments.








