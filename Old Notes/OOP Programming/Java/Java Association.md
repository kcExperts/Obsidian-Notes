
>[!def|*] Association
>Association is a stronger relation then [[Java Dependency]]. We say an association relationship exists between classes if one class has a field that is the type of another class.
>- Association models the `has-a` relationship between two classes.

Consider the following code:
```Java
public class TurtleCommand {
	Turtle turtle;
}
```
Then `TurtleCommand` **has-a** relationship with the `Turtle` class.

>[!rmk|*]- UML diagram
>The UML diagram of the example code is shown below. The `0..1` represents the multiplicity element. It specifies the number of `Turtle` objects that participate in the relation. Using `*` as the multiplicity element means an unlimited amount can exist.
>![[Pasted image 20240403094353.png]]

[[Java Aggregation]] presents a stronger form of association.

>[!exercise|1]
>Consider the current course offerings for a university and students currently enrolled in courses at a university. For every course, it is known which students are enrolled in the course. For every student, it is known what courses the student is currently enrolled in. Draw the UML diagram illustrating the relationship between students and courses.

>[!claim|*]- Solution
>Note that I labelled the connection `Offering`. We also assume courses can have unlimited students and students can enroll in unlimited classes.
>![[Pasted image 20240403095248.png]]