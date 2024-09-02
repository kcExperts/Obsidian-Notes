Aggregation and Composition are stronger forms of association ([[Relationships Between Classes]]).

#### Aggregation

>[!def|*] Aggregation
>Aggregation describes a “has-a” relationship. We note:
>- Aggregation does not imply ownership (If an office looses a worker, then both the office and the worker still exist).
>- “Sub” items can exist on their own.

Consider
```Java
public class Person {
	private String name;
	private Date birthDate;

	public Person (String name, Date birthDate) {
		this.name = name;
		this.birthDate = birthDate;
	}

}
```

Then `name` and `birthDate` refer to the `String` and the `Date` object. They do not create new instances (they literally, in memory, point to the same object). Hence destroying our `Person` instance will **not** make the `String name` and `Date BirthDate` disappear.

If you change `Date birthDate`, then `Person.birthDate` will also change. The same also holds in reverse. However, this does not hold for `String name` as [[Java Strings]] are immutable.

![[Pasted image 20240321112502.png]]

#### Composition

>[!def|*] Composition
>Composition also describes a “has-a” relationship. We note:
>- Composition implies ownership (If the office closes, then the department ceases to exist).
>- “Sub” items are not meaningful on their own.

The point of Composition is to force the user to modify the value of `Person` to get a different `Person.birthDate` instead of freely modifying `birthDate` outside of the `Person` object. This will usually be done by copying the object (called a defensive copy). This needs to be done to ensure exclusive access by the class. There is a price for using Composition; the memory and time required to make the copy.

>[!def|*] Privacy Leak
>A privacy leak occurs when a class exposes a reference to a non-public field (that is not a primitive or immutable).

```Java
//This is a privacy leak, this is mutable hence it can be changed
public X(Y y) {
	this.y = y; 
}

//This means you are willing to share your internal object
public Y getY() {
	return this.y;
}
```

A privacy leak would make an assumed composition relation no longer a composition. Hence we want immutable things only, the following are steps to follow to achieve this:
1. Do not provide any methods that can alter the state of the object
2. Prevent the class from being extended (see [[Java Inheritance]]).
3. Make all fields `final`.
4. Make all fields `private`.
5. Prevent clients from obtaining a reference to any mutable fields.
