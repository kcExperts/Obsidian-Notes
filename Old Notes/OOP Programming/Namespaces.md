Suppose you had two files that contained variables with the same name. During compilation, no errors will be thrown, but during linkage, an error will be thrown. Identically named variables and functions are often the cause of *naming collisions*. Within a given *scope region*, all identifiers must be unique. If we had two scope regions, with an identical variable name in both, no error will be thrown.

>[!def|*] Namespace
>A namespace provides another type of scope region (namespace scope) that allows for name declaration inside of it for the purpose of disambiguation. Declarations, definitions and function definitions can be present in the namespace. 

>[!rmk|*] Global namespace
>In C++, any name that is not defined inside a class, function, or a namespace is considered to be part of an implicitly-defined namespace called the global namespace.

In the namespace, you should only declare constant variables (using `const`). Simply using `type name` with or without an initializer (the `{}`) is strongly discouraged (but it will still compile). Statements are not allowed in the namespace.

Recall the library `<iostream>`. We often use `std::cout` and `std::cin`. In truth, only `cout` and `cin` are the function names whilst `std` is the namespace identifier. When working with multiple libraries and you want to access a variable or function that is used in multiple libraries, you need to tell the compiler which namespace to get the variable from.

>[!def|*] Scope resolution operator
>The `::` symbol is an operator called the scope resolution operator. `namespace::name` tells us to access `name` located in `namespace`. Leaving `namespace` blank assumes the global namespace. 
>
>Thus `std::cout` means “the `cout` that is declared in the namespace `std`”.

>[!def|*] Using directive
>Another way to access identifiers is to use a using-directive statement (`using namespace name`). This allows access to the namespace without the namespace prefix (as if the function `cout` was defined in your file). However, if identical names are used, an error will be thrown. It is almost always better to use the scope resolution operator.



