---
aliases:
  - Java Object
---
>[!def|*] Java Object Basics
>- An object in java contains information stored in variables (called fields). Objects can be made of other objects. 
>- Objects do have methods associated to them that can be used (such as `.length()` with [[Java Strings]]).  
>- Objects are created using the [[New Operator]].

Once the object is created, we can use it:

>[!def|*] Using an Object
>Once the object is created, we can use it using the reference of the object (that we set when we initialized the object).
>Since objects refer to [[Java Method|Methods]] in classes, we must use `.` to access methods linked to our object. (`.` acts like the `->` operator in `C`)



### Old Notes

Objects in Java are a basic unit of Object-Oriented Programming. Objects are instances of a [[Java Class]] that are created to use the attributes and methods of a class. 

Objects in Java are normally created using the [[New Operator]] in combination with a [[Java Constructor]]. 

#### What Objects Consist Of
- State: Represented by attributes and properties of the object ([[Java Types]]).
- Behavior: Represented by the methods the object is used in.
- Identity: Represented by the unique name given to the object.

```java
class example {
	public static void main (string[] args) {
		String myString = "HelloWorld";
	}
}
```

The object is the ``String myString`` with:
- State: Represented by the ``String`` class.
- Behavior: None as I have not used it anywhere.
- Identity: Represented by the name ``myString``.

