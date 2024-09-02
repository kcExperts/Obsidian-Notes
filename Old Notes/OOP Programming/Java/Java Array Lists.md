An array list is one of the two kinds of lists in Java, the other being a [[Java Linked List]]. `ArrayList` is a class that provides an implementation of the `List` [[Java Interface]]. `ArrayList` require information regarding the type of element that will be stored in the collection, denoted by `<>`: `ArrayList<type>`.

Since `ArrayList` is a class which means the [[New Operator]] and a [[Java Constructor]] is required. The no argument constructor creates an empty list. Unlike [[Arrays]], Array Lists require the use of a [[Wrapper Class]] as we are working with a collection of objects. 

```Java
//Example decleration for an empty list of integers
ArrayList<Integer> myList = new ArrayList<Integer>();
```
#### Useful Methods
The following are common methods that will be used extensively:
- `.size()`: Returns the length of the list.
- `.add(value)`: Adds a value of the list type to the end of the list.
- `.add(int index, value)`: Inserts a value of the list type into the specified index position. 
- `.get(int)`: Returns an element at the specified index of a list. An exception is throwed if the list is empty.
- `.set(int index, newValue)`: Changes the stored value at the specified index to the new value.
- `.contains(value)`: Checks if the list contains the specified value. Returns false if the value is not found. 
- `.remove(int index)`: Removes the element from the specified index from the list. 
- `.remove(Object o)`: Removes the first occurrence of the object `o` of the list. Returns false if failed. 
- `Collections.shuffle(list)`: Shuffles the elements of the list. 