Enumerations allow us to group different information in different variable types under $1$ global variable.

>[!def|*] Enumerated Type
>An enumerated type us a type whose values consists of a fixed set of constants.

>[!rmk|*]- Old Style Enums
>Older versions of Java used to do enumerated types similar to how you would see it in `C`. We would write:
>``` Java
>public static final int SUNDAY = 0;
>public static final int MONDAY = 1;
>//so on so forth
>
>public static final int JANUARY = 0;
>public static final int FEBRUARY = 1;
>//so on so forth
>```
>
>However, this method this have some problems:
>- The main problem with this is that it was impossible to differentiate between them when inputting them for a function call. 
>- No easy way existed to translate the `int` value to a `string`, in other words, there was no `toString` method for `int`.

Java 1.5 added an `enum` type to the mix.

>[!rmk|*] Current Day Enum
>`enums` are a [[Java Class]] that acts as you would expect it to. You can also add methods and interfaces. However, the `enum` constructor is not accessible outside of the class (they are [[Private]]) Note that:
>- `enum` implements a [[ToString Method]].
>- `enum` implements a [[Comparable Interface]] (there is no way to override).
>- `enum` can be compared using `==` or `!=`.

>[!rmk|*]- How Comparing Works
>The `d1.compareTo(d2)` method will return an `int` that represents how far the `d2` is from `d1` in the way you ordered it. In the code below, suppose:
>- `Day d1 = Day.MONDAY` and `Day d2 = Day.THURSDAY`
>
>Then `d1.compareTo(d2) = -3`. Note that there is no circular looping.

>[!rmk|*]- `values()` Method
>Suppose, in the example code below, that I wanted to get an array containing all of them in order that I declared them. I only need to use the `values()` method. Hence:
>
>`Arrays.toString(Day.values())` would return an array containing all the `enum` types in order that I listed them. So for the code below, I would have:
>`[SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY]`

>[!rmk|*]- `valueOf(String)` Method
>`valueOf()` returns the constant that corresponds to the argument string. In the Month code, `valueOf(JANUARY)` would return `31` (as expected).

Moral of the story: Use `enum` when you need a set of constants whose values are known at compile time.

Consider the example code below:

```Java
public class Day {
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY;
}

	public static void main(string[] args) {
		Day d1 = Day.THURSDAY;
		System.out.println(d1); //Prints "THURSDAY"
		Day d2 = Day.SATURDAY;
		System.out.println(d1.compareTo(d2)); //Prints "-2"
		System.out.println(d2.compareTo(d1)); //Prints "2"
	}
```

Now we note that `enum` can have fields. 

```Java
public enum Month {
	JANUARY(31), //calls Month Constructor
	FEBRUARY(28);
	//So on so forth
	private final int days;
}
```






