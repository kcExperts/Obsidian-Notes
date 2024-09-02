A main method is a static [[Java Method]] which means that it belongs to a [[Java Class]]. When running the program, Java will go through the main method executing whatever code lies in it, going to other methods as necessary.
There are only two ways to write a main method header.
```java
public static void main (string... args) {}
public static void main (string[] args) {}
```
In each case, we have:
- The name of the method is main.
- The method can be accessed from any class (specified by [[Public]] keyword)
- The method should be invoked using the name of the class (specified by the [[Static]] keyword).
- The caller can insert one or more [[String]] arguments separated by commas. 