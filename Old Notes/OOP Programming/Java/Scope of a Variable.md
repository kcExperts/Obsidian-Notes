>[!def|*] Scope of a Variable
>The scope of a variable is the region of code where a declared variable name is usable.

Consider: 
```Java
public static double max2(int a, int b) {
	twiceMax = a + b - Math.abs(a-b);
	return twiceMax / 2;
}
```
Then the scope of `twiceMax` is limited to the method `max2`. The variable cannot be used outside the method.