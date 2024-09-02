---
aliases:
  - Polymorphism
---

>[!def|*] Polymorphism
>A benefit of [[Java Inheritance]] is that it allows the programmer to use different types of objects (related by Inheritance) in the same way. The ability to use the same code with different objects is called Polymorphism.
>- If you assign a superclass variable as a reference to a subclass type, then that variable can only be used in the superclass itself. The compiler will only recognize that variable as the superclass type.

>[!def|*] Inheritance Substitutability
>Since [[Java Inheritance]] is a `is-a` or `is-substitutable-for` relationship, then a subtype object should be usable whenever a supertype object is required (doing so will not cause the program to just die).