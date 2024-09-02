
>[!def|*] Dependency
>We say a dependency exists between two elements if changing the definition of one (supplier) changes the definition of the other (client). Note that if a class changes its interface, any message sent to that class may no longer be valid.
>- A dependency relationship models a `uses` relationship between two classes.
>- Dependency is the “weakest” form of relationships between classes.

With classes, dependencies exists for various reasons;
1. A class sends a message to another class;
2. One class has another class as part of its data;
3. One class mentions another as a parameter to an operation.

>[!exm|1]
>A class `X` that overrides the [[ToString Method]] must return a reference to a [[Java Strings]] object. Creating this object requires the constructor and methods of the `String` class. Hence `X` depends on `String`.

Every class will have a dependency with interfaces, but every class will have stronger forms of “connections” with the `Object` class. See [[Java Inheritance]]. 

>[!rmk|*]- UML Diagram
>The UML diagram of a dependency relationship is as follows:
>![[Pasted image 20240402202548.png]]

>[!exercise|1]
>Study the API for the class `java.util.Date`. Draw the UML class diagram showing the `Date` class and its dependencies (Hint, there will be $8$).

>[!claim|*]- Solution
>The solution is found by looking at the official documentation and looking for what it implements and the methods that use objects of other classes.
>![[Pasted image 20240402203929.png]]



