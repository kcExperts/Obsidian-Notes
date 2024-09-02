
### Basics
Imagine you had multiple coding files with functions in one and the main routine in the other. In the main routine, you would need to forward declare every function from the other files to let the compiler know that your function name is an identifier for said function. 

A solution to this is to use a header file. In this file, you can declare all your functions so that the compiler knows your function identifiers without having your files have a bunch of forward declarations.

>[!rmk|*] Best Practice
>- **Always include header guards** (see section of same name)
>- If a header file is paired with a code file, they should both have the same base name.
>- Do not define the function is the header file. 
>- Avoid `#including` `.cpp` files.
>- Each file should explicitly `#include` all of the header files it needs to compile, do not rely on headers included transitively from other headers. 

>[!rmk|*] Proper Ordering of Headers
>To maximize the chance that missing includes will be flagged by the compiler, order your `#include` as follows:
>1. Paired header file (if you have an `add.cpp` file that has a function declared in `add.h`, then `add.h` is your paired header file)
>2. Other headers from your project 
>3. 3rd party library headers (`raylib.h` as an example)
>4. Standard library headers (`iostream` as an example)

>[!rmk|*]- Identifying Header Files
>Header files either have a `.h`, `.hpp` or no extension at all.
### Angle Brackets vs Double Quotes
You may notice that angled brackets and double quotes are used in the `#include`. 
```cpp
#include <iostream>
#include "header.h"
```
They are used to give the [[Preprocessor]] a information on where it should look for header files.
- `<>` are used to tell the preprocessor that this is a header file that **we did not write ourselves**. The preprocessor will search for the header only in the directories specified by the `include directories`. These directories are configured as part of your project/IDE/compiler settings. It will not search for the header file in your project’s source code directory.
- `""` are used to tell the preprocessor that this is a header file **we wrote ourselves**. It will first search for the header file in the current directory. If it cannot find it there, it will then search in the `include directories`. 

>[!rmk|*]- Why doesn’t `iostream` have a `.h` extension
>Simple answer is that `iostream.h` is a different header file than `iostream`. When `C++` was first created, all the headers in the standard library had a `.h` suffix. When the language was standardized, all names were moved to the `std` [[Namespaces|Namespace]]. For our purposes, continue using `iostream` without `.h`. 
>
### Including Header Files from other Directories
A common question is how to include header files from other directories. A (**bad**) way to go solving this problem is to include the path in your `#include` line:
```cpp
#include "header/myHeader.h"
```
But this can get unnecessarily long and your code would definitely not work on another computer. 

The actual way to do it would be to tell your compiler that you have a bunch of header files in another location. This can be done by setting an *include path* or *search directory* in your IDE project settings. 

>[!rmk|*] For VSCode users
>In your `tasks.json` configuration file, add a new line in the `"Args"` section:
>`-I/source/includes",`

### Header Guards
When working with multiple header files, it is possible that a function name gets included more than once (for example when a header `#include` another header file, which is common). 

Suppose we had 4 files, `main.cpp`, `vector.h`, `add.h`, and `add.cpp` where:
- `main.cpp` includes `add.h` and `vector.h` (for addition)
- `vector.h` includes `add.h` (for vector addition)
This program would not compile, as we recall that the [[Preprocessor]] will replace the header file with the respective code leading to the `add.h` function declarations being repeated. 

To avoid this, we use a header guard of the following form (in your `.h` files):
```cpp
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// declarations (with certain types of definitions) here

#endif
```
When this header is included, the preprocessor will check where our unique name has been previously defined. If its the first time, it will include the contents of the file, and if not, it will not include the contents. It is easy to see how this will protect us from problems in our example as the `add.h` in `vector.h` will not be included, leaving only one `add.h` to be included. 

>[!rmk|*] Naming
>For your unique name, just use the file name in all caps: `FILENAME_H`. In bigger projects, there may be files with the same name located in different directories. It is advised to write the whole project path, so: `PROJECT_PATH_FILE_H` as an example.

There are real problems which will occur if you put function definitions inside your header file. **AVOID DOING SO IF POSSIBLE**. See https://www.learncpp.com/cpp-tutorial/header-guards/ at the “Header guards do not prevent a header from being included once into different code files” section. 


