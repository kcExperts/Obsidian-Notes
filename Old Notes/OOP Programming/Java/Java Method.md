---
aliases:
  - Methods
  - Java Methods
---

>[!def|*] Method
>A method in Java is essentially a function that takes in arguments and modifies them with code (or just runs code when called).

>[!def|*]- Method Modifiers
>Methods can have the following modifiers:
> - `static` Modifier (forces the method to belong to the class, thus you can call the method using `.` method)
> - If it is non-static, the method can use any field belonging to an object in the computation.
> - [[Public]]: Allows the method to be seen by other classes.

>[!def|*]- Mutator Methods
>A method that changes the state of an object are called mutator methods. 

>[!def|*]- Accessor Methods
>A method that returns information about the state of an object is called an accessor method.

>[!def|*]- Static Factory Methods
>A static factory method is a method that is [[Static]] and that returns an instance of the class. Thus we use the term factory as it creates the object. These are essentially ways to get around the no constructor rule in a [[Utility Class]].

To declare methods, we use the following syntax:
- `modifier(+static or not) returnType name(arg1, arg 2, ...)`
The following are examples of method declarations:
```Java
public static void set(double x, double y) {}
//A no return public funtion with two input arguments

public int example(String t, ArrayList y) {}
//An int returning function with two input arguments
```

The name of the method along with the argument types form what is called the *Method Signature*. Consider:
```Java
public static void set(double x, double y) {}
//A no return public funtion with two input arguments

public static int set(double x, double y, double z) {}
//A no return public funtion with two input arguments
```
You might think that this is invalid, but these both have different *Method Signatures*, thus both of these methods are valid and can be used (by inputting the correct amount of arguments)

However, the following:
```Java
public static void set(double x, double y) {}
//A no return public funtion with two input arguments

public static int set(double x, double z) {}
//A no return public funtion with two input arguments
```
Have identical *Method Signatures*, thus this is invalid (the names and types are the same). The names of the types of the arguments do not matter to the *Method Signature*, hence why our methods above turn out to be mapped to the same signature.

