---
aliases:
  - Java Field
---
A java field, or Field, is a variable inside a class.
```java
public class exmaple {
	String name;
	int salary;
}
```
In the above code, name and salary are fields as they are not in a [[Java Method]].

#### Java Field Access Modifiers
There are four possible modifiers that can be put on a field:
- [[Private|private]]
- [[Public|public]]
- [[Package|default]] (If nothing is put, it will be default)
- [[Protected|protected]]

>[!rmk|*] Rule of Thumb
>When deciding what modifier to use, we usually:
> - Use `public` if it is a constant value.
> - Use `private` if it is not.
> - Use `protected` for [[Java Inheritance]].


