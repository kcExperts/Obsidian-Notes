>[!def|*] `toString()`
>The `toString`() method *should* return a textual representation of the object. Essentially turning it into a string. 
>

Typical declaration is shown below:
```Java
int x = 5;
System.out.println(x.toString());
```

>[!def|*] Override
>When working with objects, it may be useful to override the `.toString()` method to make our own that works with our custom class. Why? Because `toString()` may fail to do what you want it to do for our class.

As mentioned above, we may also override the method to create our own:
```Java
//This MUST be inside of a class
private double x;
private int y;

@override
public String toString(){
	return "(" + this.x + ", " + this.y + ")";
}
//Returns the String (this.x, this.y)
//Where x,y are predefined strings in our class
 ```

To override, the *Method Signature* must be the same to the method you want to override.
