>[!def|*] Static Field (Class Variable)
>A Static Field is a field that is `static`. Meaning it belongs to the class and not any particular object. Thus there is only one copy of the field (as it is associated with the class).

As an example, consider:
```Java
public class Domino {
	public static final int MIN_VALUE = 0
	public static final int MAX_VVALUE = 6;

	private int val1:
	private int val2;
}
```
In this code, `MIN_VALUE` and `MAX_VALUE` are given the `static` field as there will only ever be $1$ of such values. `static` is not given to `val1` or `val2` as they can change (or else every domino would be the same). 
- Note that `final` here is used to say that the value cannot be changed. If you were to try and assign elsewhere, the code will not compile. The same holds for immutable objects (such as [[Java Strings]]).
- Using `final` on a mutable type (such as [[Java Array Lists]]), they can still be changed. For example, we can still use `.add` to insert into our so called “constant” array list. 

>[!rmk|*] Bad Practice
>Consider a method in a [[Java Class]] that is `public static`. It is considered bad form to access it using `className.field` (object reference). In a [[Utility Class]], just use `static` and not `public static`. 