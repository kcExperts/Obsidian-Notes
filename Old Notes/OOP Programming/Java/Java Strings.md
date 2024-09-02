---
aliases:
  - Java String Methods
---
The `String` class is the only class in Java that has literals. A java string literal is a sequence of characters enclosed by double quotes.
#### Immutability
Java Strings are immutable; once a string is created, the sequence of characters in the string cannot be changed. This is done to save [[Heap Space]] as multiple objects that correspond to the same thing do not need to be created.
```Java
String greeting = "Hello, world!";
String greetingC = "Hello, world!"; //greetingC points to the String object, being the same one that greeting points to. 
//Thus there exists only 1 Hello, world! object in memory.
greetingC = "Bonjour!";
//A second String object is created to which greetingC refers to
```
#### Concatenation
The Java String class has its own operator `+` for string concatenation. Adding two strings together creates a new reference to a new String object.
```Java
String first = "Hello,";
String second = " world!";
String out = s + t;
System.out.println(out); //Prints Hello, world!
```
Concatenating a `String` object with a non-`String` object simply coverts the non-`String` into a `String` then performs concatenation.
```Java
int i = 9;
String arrayDesc = "Index at position: ";
String out = arrayDesc + i;
System.out.println(out); //Prints Index at position: 9
```
#### String Methods
The String class contains a large amount of methods. Here we go through the most useful:
- `.equals(Object obj)`: Can be used to test if two Strings are identical.
- `.length()`: Returns the length of the string.
- `.isEmpty()`: Returns true if the string is empty and false otherwise.
- `.charAt(int)`: Returns the character in the `String` at position `int`.
- `.indexOf(char)`: Returns the index of the first occurrence of the specified character. If it is not found, returns `-1`. 
- `.startsWith(String)`: Verifies if a string starts with a specified substring.
- `.endsWith(String)`: Verifies if a string ends with a specified substring.
- `.toUpperCase()`: Returns a String object that represents the lowercase version of the original String (does not modify original String).
- `.toLowerCase()`: Returns a String object that represents the uppercase version of the original String (does not modify original String).
- `.substring(int)`: Returns a substring of the original string starting at the specified index `int`.
- `.substring(int, int)`: Returns a substring that includes the starting index but not the end index character respectively. 

