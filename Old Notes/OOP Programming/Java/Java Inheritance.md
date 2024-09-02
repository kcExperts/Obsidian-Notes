
>[!def|*] Inheritance
>Inheritance is the strongest possible form of relationships between two classes. Java is a single inheritance language meaning every class can only have one superclass. A superclass may have infinite subclasses however.
>- Inheritance models the `is-a` or `is-substitutable-for` relationship.
>- Substitutability means that if you have a variable `X`, any reference that is a subclass of can be stored in `X`. See [[Inheritance Substitutability]].
>- Using `super` allows the subclass to use its superclass. `super()` will use the constructor and `super.` will allow the use of any methods.

>[!def|*]- Class Hierarchy
>`java.lang.Object` is the topmost class in the class hierarchy. Every java class (excluding `Object`) is a subclass of `Object`. For example, `String` is a subclass of `Object` and we denote this using:
>![[Pasted image 20240403123216.png]]
>A hierarchy can have infinite depth. `java.util.Stack` is an example of a moderately deep class hierarchy. Consider: 
>![[Pasted image 20240403123347.png]]
>Then we would say that:
> - Stack is a `Vector` **and** an `AbstractList` **and** an `AbstractCollection` **and** an `Object`.

To make a class a subclass, one would declare their class using:
```Java
public class SubClass extends SuperClass {}
```

When a subclass decides to change a method inherited by its superclass, we say it `overrides` the inherited method. Hence the use of `@Override` as we have seen in [[ToString Method]], [[Equals Method]] and the [[HashCode Method]]. 

Usually, the more we go down an inheritance, the more specialized a class will become, as shown below:
![[Pasted image 20240403124146.png]]
#### Old Notes


>[!def|*] Inheritance
>Inheritance is a relationship between two classes where one class is derived from another class. It is a “Is-a” relationship (is-substitutable-for).
> - For example, Circle may or may not have an “Is-a” relationship with an Ellipse depending on what methods are involved in the Ellipse field. If the ellipse can do something the circle cannot, then it cannot be an “Is-a” relationship.

Some other useful definitions are:
 - Subclass: A class that is derived from another class (only has one superclass).
 - Superclass: The class from which a subclass is derived (**In Java, only a max of a single subclass is acceptable**).
 - Descended: Any class that connects back up to `java.lang.object` is called the descendent of all the classes above it.
 - Ancestors: Similar definition as descended.

>[!rmk|*] Why use Inheritance
>A subclass has the following abilities:
>- The new class has direct access to the public and protected fields and methods.
>- No constructors from the ancestor can be used.
>- The new class can introduce new fields and methods.
>- The new class can re-define its superclass methods.

>[!def|*] Implementation
>Use the keyword `extends` after the class name and then put the class being extended. This will define an inheritance.

>[!exm|1]- What not to do
>Suppose we implement a stack by extending a list. Say for example, we:
>`extends ArrayList<Integer>`. This sounds like a logical thing to do, but remember, our stack must be able to do everything a list can, which includes getting and setting elements in the middle, which a stack should not be able to do. Hence we cannot use inheritance here. 
>- Instead a Stack is a “has-a” List relation.




