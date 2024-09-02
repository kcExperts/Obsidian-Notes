>[!def|*] Constructor
>The [[New Operator]] is always followed by a constructor call. In essence:
>- The purpose of the constructor is to initialize the state of the newly created object

>[!rmk|*]- What do I mean by State of the Object
>When creating a class (assuming you make a good one), there will be many ways to initialize an object that uses that class. Consider the code shown below. Essentially, if I input `a` and `heigth`, my object will be initialized differently compared to the case where I just input `area`. 
>

>[!def|*]- No-argument Constructor
>Suppose, in your custom class, that you have a no-argument constructor, then the compiler will do the following:
>- Primitive-type fields are set to `0`.
>- Primitive-type boolean fields are set to `false`.
>- Reference-type fields are set to `null`.

A simple constructor class is shown below:
```Java
//A contructor class
public class Rectangle {
	//Constructor variables. Accessing them is identical to accessing
	//a struct variable in C. We would use name.base for example. 
	int base;
	int height;
	int area; 
	//First Constructor Object
	public Rectangle(int a, int height) {
		base = a;
		//Since the constructor object's variable is identical
		//to the class variable, the this. operator must be used.
		//this.name will refer to the class variable and not the
		//constructor object variable.
		this.height = height;
		area = a*height;
	}
	//Second Constructor Object
	public Rectangle(int area) {
		this.area = area;
		base = 0;
		height = 0;
	}
	//Null case
	public Rectangle() {
	
	}
}
```
```Java
public class Main {
	public static void (string[] args) {
		//Initialize the object
		Rectangle myRecA = new Rectangle(5);
		Rectangle myRecBH = new Rectangle(2, 3);
		//Print out corresponding field
		System.out.println("RecA Area:" + myRecA.area);
		System.out.println("RecBH Base:" + myRecBH.base);
	}
}
```
## Old Notes
A constructor in Java is a special [[Java Method]] that is used to initialize objects. It is usually preceded by the [[New Operator]]. The constructor is called when an object of a class is created. (Think of constructors as `struct` in C)

#### Basics 
The constructor first requires a `public class` with the name of the object. Inside this class, many constructor objects can be defined inside. A constructor object carries the same name as the class and does not include a return type, for example `public name() {}` would be an object than when assigned, would assign `null`. Once an object constructor is defined in the class, the `null` case must be manually reentered. The only way to differentiate between constructor objects in the same class is by the number of input parameters. Consider the example below:

```Java
//A contructor class
public class Rectangle {
	//Constructor variables. Accessing them is identical to accessing
	//a struct variable in C. We would use name.base for example. 
	int base;
	int height;
	int area; 
	//First Constructor Object
	public Rectangle(int a, int height) {
		base = a;
		//Since the constructor object's variable is identical
		//to the class variable, the this. operator must be used.
		//this.name will refer to the class variable and not the
		//constructor object variable.
		this.height = height;
		area = a*height;
	}
	//Second Constructor Object
	public Rectangle(int area) {
		this.area = area;
		base = 0;
		height = 0;
	}
	//Null case
	public Rectangle() {
	
	}
}
```
```Java
public class Main {
	public static void (string[] args) {
		//Initialize the object
		Rectangle myRecA = new Rectangle(5);
		Rectangle myRecBH = new Rectangle(2, 3);
		//Print out corresponding field
		System.out.println("RecA Area:" + myRecA.area);
		System.out.println("RecBH Base:" + myRecBH.base);
	}
}
```
#### Specifics
