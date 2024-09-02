---
aliases:
  - Interfaces
---

>[!def|*] Interfaces
>A Java interface is a type (**not a class**) that specifies the contracts of the [[Java Method|Methods]] that must be implemented in a class. Notice:
>- Methods in an interface **have no implementation** (the class is responsible for this).
>- Interfaces are types.

For example, the [[Comparable Interface]], if implemented into a class, needs to follow the conventions that the interface specifies. 

>[!def|*] What it means for an Interface to be a type
>Consider an example, `List`. This is an interface and `ArrayList` is an implementation of `List`. This is why we can write: `List<String> t = new ArrayList<>()`.


### Old Notes

>[!def|*] Interface
>An interface is a group of related [[Java Method|Methods]] that have no implementations.
>- An interface defines a type.

>[!example|*]-
>`ArrayList` implements every method in the `List` interface. And `List` is a sub-interface of `Collection`.

In Java, Interfaces have a hierarchy as shown in the remark below:

>[!rmk|*]- UML Hierarchy
>In the below image, the hierarchy of the interfaces are shown. For example, `List` contains all the [[Java Method|Methods]] that `Collection` contains and includes extra ones unique to `List`. The reverse is not true, as indicated by the arrows. 
>Note that `SortedSet` is a sub-interface of `Set`, thus you cannot switch from `SortedSet` to a `List` or a `Queue`.
>![[Pasted image 20240306112222.png]]
>
>We also have a hierarchy separate from the one above for `Map`. We note that a `TreeMap` is part of the `SortedMap` interface whilst `HashMap` is part of the `Map` interface. Recall that there is no `Iterator` in map (hence a [[For-Each Loop]] loop is needed).
>![[Pasted image 20240306112248.png]]

A [[Java Class]] that implements an interface promises to provide an implementation for **every** method in the interface.

>[!def|*] Creating an Interface
>Creating an interface is similar to declaring a class except:
>- We change the word `class` to `interface`. 
>- Everything must be `public`.
>- Only the method declaration lies in the interface, no actual body is present.

Types are:
- [[Iterator Interface]]
- 
