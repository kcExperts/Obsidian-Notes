>[!def|*] Exception
>An exception is an event, which occurs during the execution of a program, that disrupts the normal flow of the program’s instructions.

For our purposes, we focus on the following $3$ types: 
 - `IllegalArgumentException`: Indicates that a method has been passed an illegal or inappropriate argument.
 - `IndexOutOfBoundsException`: Indicates that an index of some sort (array, string…) is out of range.
 - `NullPointerException`: Thrown when an application attempts to use `null` in a case where an object is required.

Declaring an exception is easy, we use `throw` followed by the [[New Operator]], followed by the type of exception and the argument for the exception. We will most commonly use the `IllegalArgumentException`. Thus: 
```Java
throw new IllegalArgumentException("Custom Error Message Here");
```
