---
aliases:
  - Class
  - Classes
---
>[!def|*]- Required Background
> - [[Java Types]]: Set of values and the operations that can be performed with those values.
> - [[Java Types|Reference Type]]: Anything that is not a primitive type are reference types (including [[Arrays]])
> - Class: Implementation of a reference type.
> - [[Java Objects|Java Object]]: Instance of a class (`List<String> t = new ArrayList<>()`, in this case `t` is an instance of `List`)
> - [[Memory Organization]]
> - [[Memory]]
> - `Class Invariants` is some condition regarding the object or class in this case that is always true.

>[!def|*]- Object Model
> - #Abstraction: As a programmer, we don’t really want to care about the fine details of how the program or the computer handles the code. We also have the abstract data types, which are things like lists, trees, queues, hash maps etc.…
> - #Encapsulation: Process of compartmentalizing the elements of an abstraction. Essentially, for Java, we mean grouping up all methods for an abstraction into a `Class`.
> - #Modularity: Breaking a program down into multiple parts that can be reused anywhere as needed.

>[!def|*] Java Classes
>In Java, classes are implementations of [[Java Types]]. Every class is a child of the `java.lang.Object` class. Thus every class inherits the [[Java Method|Methods]] in the `java.lang.Object` class. There are $11$ of these methods, but the following $3$ are of high importance:
>1. [[ToString Method]]
>2. [[Equals Method]]
>3. [[HashCode Method]]

[[Java Fields]] are important for classes, especially the access modifiers.

See [[Organization of a Java Program]]

## Old Notes
Implementation of a type (except [[Abstract Classes]]). When a class is created, the programmer defines what information is used to represent the type and what operations can be performed by the type.

The purpose of a class is to act as a blueprint to create [[Java Objects]]. It is an entire file, denoted by:
```java
class name {}
```
Inside the class are the respective [[Methods]] and [[Java Fields]]. Java classes can either have the [[Public|public]] or [[Private|private]] modifier. 