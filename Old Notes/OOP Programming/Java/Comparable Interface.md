`compareTo` is the method that should be used if you want to compare order of objects. It is the coding implementation of [[Ordering]]. 

>[!def|*] Comparable Interface
>The comparable interface contains only $1$ [[Java Method]]:
> - `compareTo()`

>[!def|*] Usage
>To use the interface, we must first do `public interface Comparable<type>` and then specify the `compareTo()` method in it. The method must:
> - Return $\mathbb{Z}_-$ if it is less than the specified object
> - Return $0$ if it is “equal” to the specified object
> - Return $\mathbb{Z}_+$ if it is greater than the specified object.
> - It does not need to be consistent with `equals()`
> 
> To override the method, on top of the usual `@Override`, one must add `implements Comparable<className>` in front of the usual class declaration.
> As an example, `public class Point2` becomes `public class Point2 implements Comparable<Point2>`. 

Note that the equal case is not always going to be the same as the `equals()` method. For example, consider the distance of a point away from the origin. Any point on the circle of radius $r$ around $0$ will have the same distance. Thus `compareTo()` will return $0$ whilst `equals()` will return false as they are not the same vector (unless you compare the same vectors).

>[!rmk|*] Comparing floats and doubles
>If you want to compare doubles, for Java, use the `Double.compare(x1, x2)` (as compare is a [[Static Field]]). Use `Float.compare(x1, x2)` for floating point values. 
