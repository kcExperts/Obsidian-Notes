>[!def|*]- Dependency
>Recall that an object of type `X` that is composed of an object of type `Y` means: 
>- `X` has a `Y` object
>- `X` owns the `Y` object
>
>Hence `X` has exclusive access to its `Y` object.
>This is the weakest form of relationships between classes.
>
>Dependency can be shown in a [[UML Class Diagram]] using a dashed line dinging in an open arrow that points to the class it depended on. Suppose `Point2` depends on `Vector2` and `String` and `Vector2` depends on `String`, then:
>![[Pasted image 20240315142132.png]]

>[!def|*] Association
>Association is a stronger form of dependency. If a class `X` has a field of type `Y`, then `X` has an association with `Y`.  Note that these can be two way-relationships.
>
>We show association by using a solid line connecting the two classes. 

Stronger forms include [[Aggregation and Composition]]


