
>[!def|*] Iterator
>An iterator is an object that knows how to iterate over a collection of elements. A [[For-Each Loop]] implements an Iterator (technically, it implements the **Iterable Interface** but that just contains an Iterator Object)

The iterator interface looks like:
```Java
package java.util;

//T is the type of what your iterating over
public interface Iterator<T> {
	public boolean hasNext();
	public T next();
	
//two more default methods not shown here
}
```

The iterator interface is used to implement the Iterable interface. Note that it counts up to but **not including** the stop value. Iterators and usually nested classes. 