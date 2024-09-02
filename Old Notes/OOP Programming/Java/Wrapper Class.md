The wrapper class is a class that contains the long form name of [[Java Types|Primitive Types]]. This class allows you to transform the primitive type into a [[Java Objects|Java Object]]. 
The table below shows the wrapper class for each primitive data type. The compiler gives special attention to wrapper classes in the sense that they will convert between the primitive and wrapper class if need be.

| Primitive Types | Wrapper Class |
| :----: | :----: |
| int | Integer |
| short | Short |
| long | Long |
| byte | Byte |
| float | Float |
| double | Double |
| char | Character |
| boolean | Boolean |
These allow you to find the respective max value that each primitive type can hold: ``wrapperClass.MAX_VALUE`` or ``wrapperClass.MIN_VALUE``. 

#### Character Wrapper Class
The `kava.lang.Character` class contains fields and methods that are useful with `char` values: 
- `.isDigit()` Verifies if index `i` is a digit or not. 
- `.isLetter()` Verifies if index `i` is a letter or not.
- `.isLowerCase()` Verifies if index `i` is lower case or not.
- `.isUpperCase()` Verifies if index `i` is upper case or not.
- `wrapperType.compare(1, 2)` Compares `1` and `2`. 
- `.toLowerCase()` Turns a string to lower case.
- `.toUpperCase()` Turns a string to upper case. 
 

