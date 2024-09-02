
>[!def|*] Utility Class
>The purpose of a utility class is to group together related fields and methods where creating an object is not necessary. Thus:
>1. No objects are created in a utility class (No constructors).
>2. All features are marked as being a [[Static Field]]. (Name of the utility class is used to access the feature)

>[!exm|*]-
> - `java.lang.Math`: Consider `Math.abs()`. Hence we note that every method in `java.util.Math` is a static field.
> - `java.util.Arrays`
> - `java.util.Collections`

If a utility class is not put inside the main class, one should use the [[Private|Private Modifier]] on the class to prevent Java from creating the no-argument constructor.

See [[Java Method|Methods]] for information on Static Factory Methods
See [[JAVA-C Simple Class Implementation 1 Rectangles]] (bottom part of code) for an example of a utility class.