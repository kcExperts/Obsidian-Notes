In many cases, the version of `equals` that you get when trying to check that two objects are equal simply checks if they refer to the same object. If you create, using constructors, two different references with the same values, `equals` will return false even though to us, they are equal. Thus, in most cases, we need to override it.

>[!rmk|*]- Implementing Equals
>Today, there are two basic and one advanced version to implement equals. We will focus only on the two basic ones.

>[!def|*] Generating Equals
>In Eclipse, if you want to generate an `equals` (framework) for your class:
> - `Source` $\rightarrow$ `Generate hashCode() and equals()` and then choose the fields you want to compare for equality.

>[!def|*] Inheritance Equals Method
>The general method shown in the below definition if fine as long as it is never used in a [[Java Inheritance]]. If it will be, we need to

>[!def|*]- General Equals Method
>An `equals()` methid implements an [[Equivalence Relation]]:
> 1. It is [[Reflective]]. Always returning `true`.
> 2. It is [[Symmetric]].
> 3. It is [[Transitive]].
> 4. It is consistent meaning that multiple calls for the same arguments should always return the same result.
> 5.  For any non-null reference, `var.equals(null)` always returns `false`.
> 
> In the case of wanting to override, make sure to remember to insert `@override`.

>[!def|*]- Inheritance Equals Method
>The general method shown in the below definition if fine as long as it is never used in a [[Java Inheritance]]. If it will be, it needs to have:
>1. Instances always equal to itself
>2. Instance of compatible types can be equal. We would use `instanceof` operator. Suppose `t` is a list. If you did `t instanceof list` which would return true. Note that `.` is not used as this is an operator.
>	- Note that `instanceof` a `null` is always false.

An example override for a **general** equals method is shown below: (Generally generated automatically by Eclipse)
```Java
//"Object" must be used, do not replace it with the class name
@Override
public boolean equals(Object obj) {
//First 4 steps (excluding step 3) dont change
	if (this == obj) { //For (1)
		return true;
	}
	if (obj == null) { //For(5)
		return false;
	}
	if (this.getClass() != obj.getClass()) { //Not same object
		return false;
	}
	Point2 other = (Point2) obj;
	//Compares 2d vector coordinates
	//doubleToLongBits necessary to compare double
	//as we turn them into bits (binary)
	if (Double.doubleToLongBits(this.x) != Double.doubleToLongBits(other.x)) {
		return false;
	}
	if (Double.doubleToLongBits(this.y) != Double.doubleToLongBits(other.y)) {
		return false;
	}
	return true;
}
```

An example override for a [[Java Inheritance]] equals method is shown below: 
```Java
@Override
public boolean equals(Object obj) {
//First 4 steps (excluding step 3) dont change
	if (this == obj) { //For (1)
		return true;
	}
	if (!(this instanceof Point2)) {
		return false;
	}
	Point2 other = (Point2) obj;
	//Compares 2d vector coordinates
	//doubleToLongBits necessary to compare double and floats
	//as we turn them into bits (binary)
	if (Double.doubleToLongBits(this.x) != Double.doubleToLongBits(other.x)) {
		return false;
	}
	if (Double.doubleToLongBits(this.y) != Double.doubleToLongBits(other.y)) {
		return false;
	}
	return true;
}
```
It only really differs with the second `if` statement essentially combining the two `if` from the general one into a single `if` statement.

When you implement `equals` using Eclipse, you are also forced to implement [[HashCode Method]]. This happens in general. 