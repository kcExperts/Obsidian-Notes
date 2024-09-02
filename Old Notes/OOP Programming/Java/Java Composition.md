
>[!def|*] Composition
>Composition is a stronger form of [[Java Aggregation]]. This time, the composite class is made up of parts that **cannot** be part of other aggregates. Hence a composite class has **sole ownership** of the parts that make it.

>[!def|*] Rules of Composition
>In a composition, the composite is *responsible for the creation and destruction of its parts*. This means three things:
>1. *Creation*: The constructors must create new objects when assigning values to the fields of an object.
>2. *Destruction*: Methods that return information about the state of an object must never directly return a field. (An accessor method must make a new copy of an object and return references to the copy rather than the original field).
>3. *Destruction*: Methods that assign a value to a field must never assign the value of a parameter directly to a field. (A mutator method must make a new copy of the object referred to by a parameter and then assign a reference to the copied object to the field).
>
>*Why Rule 2 and 3 exist*: In Java, objects are destroyed via the garbage collection process. An object `obj` cannot be removed from memory if another object, or class has a reference to `obj`. For rule 2, if the field of the object is returned, then we are returning a reference to that `obj` and hence we cannot control destruction. For rule 3, assigning a parameter directly to a field means that parameter has a reference to `obj` and thus `obj` cannot be reliably destroyed.

>[!def|*] Privacy Leak
>When a [[Private]] field becomes accessible outside of a class, a *privacy leak* has occurred. Properly implemented Composition will avoid privacy leaks.

>[!rmk|*]- UML Diagram
>Almost identical to that of a [[Java Aggregation]] except that the diamonds are filled:
>![[Pasted image 20240403111707.png]]
#### Privacy Leak Example
Consider the following:
```Java
public class BrokenStack {
	private List<String> elems;
	//Other okay methods

	//Privacy leak method
	public List<String> getElements() {
		return this.elems;
	}
}
```

Here we have a privacy leak as we are returning a reference to the list. Hence using this reference, we can add elements where ever into the list we want (defeating the purpose of a stack). Consider executing the following:

```Java
s.getElements().add(2, "broken");
```

The above code will actually insert the `String` `broken` into the second position of the list. This is because we returned a reference to our list.

#### Composition Example
```Java
public class Particle {
	private Point2 position;
	private Vector2 velocity;

	//Initializes to 0 for both
	public Particle(Point2 position, Vector2 velocity) {
		this.position = new Point2(position);
		this.velocity = new Vector2(velocity);
		//As opposed to:
		//this.position = position;
		//this.velocity = velocity;
	}

	//Returns current position
	public Point2 position() {
		return new Point2(this.position);
		//As opposed to:
		//return this.position;
	}

	//Sets new position and returns previous position
	public Point2 setPosition(Point2 position) {
		Point2 old = this.position;
		this.position = new Point2(position);
		return old;
	}
}
```
Notice:
- In the constructor, we are creating new objects (Rule 1).
- In the `position()` method, we are returning the position through a copy of the object instead of directly returning a reference to the object (Rule 2).
- In the `setPosition()` method, we can just return the old position as it is not needed in the class. More importantly, to set our new position, we have to (yet again) create a new object then assign it to position (Rule 3).


