Suppose $a,b \in \mathbb{Z}$. The code below determines the [[Maximum]] element:

```Java
public class Maximum {

	public static int max2(int a, int b) {
		if (a >= b)
			return a;
		return b;
	}
} 
```

The code above can be generalized. Another clever way of writing it for only $2$ elements is to do the following (Assuming overflow does not occur):

```Java
public class Maximum {

	public static int max2(int a, int b) {
		int twiceMax = a + b + Math.abs(a-b);
		return twiceMax / 2;
	}
	
}
```

