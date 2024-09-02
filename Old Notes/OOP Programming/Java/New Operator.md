>[!def|*] New Operator
>The new operator is similar to `malloc` in `C`. The new operator does three things: 
>1. Allocated memory for the new [[Java Objects|Java Object]].
>2. Calls a [[Java Constructor]] which initializes the state of the new object.
>3. Returns a reference to the new object.

Suppose we wanted to store points in $\mathbb{R}^2$ in a variable. Now suppose `Point2` is a defined class, then:
```Java
//import ca.queensu.cs.cisc124.notes.basics.geometry;
Point2 p1 = new Point2(); //Initializes 0 vector
Point2 p2 = new Point2(1.0, 0.5); //Initializes (1.0, 0.5) in p2
Point2 p3 = new Point2(p2); //Makes p3 = p2
//Note that Point2 is a class part of a custom made library
```
## Old Notes

In Java, the `new` operator dynamically allocates the appropriate amount of memory for a new class or object and returns a reference to the object it created. 

If a new class object is to be created, the use of the `new` operator is required or else there would be nowhere to reference the object. A `new` operator is usually follow by a [[Java Constructor]].

In all, the combination of `new` and the class constructor is used to create custom classes containing custom objects that can be quickly used to assign to a variable (See [[Java Constructor]]).