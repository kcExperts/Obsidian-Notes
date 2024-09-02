The following method below checks whether two input strings are identical or not.

```Java
/**
*Ret true if {@code s} and {@code t} are equal with non zero length
*@param {@code s} input string
*@param {@code t} input string
*@return false if conditions not met, true if they are met
*/
public static boolean eqNotEmpty(String s, String t) {
	if (s.length() != t.length() || s.length() == 0)
		return false;
	for (int i = 0; i < s.length(); i++) {
		if (s.charAt(i) != t.charAt(i))
			return false;
	}
	return true;
}
```

A more compact implementation involves the `.equals(Obj obj)` method.
```Java
/**
*Ret true if {@code s} and {@code t} are equal with non zero length
*@param {@code s} input string
*@param {@code t} input string
*@return false if conditions not met, true if they are met
*/
public static boolean eqNotEmpty(String s, String t) {
	if (s.length() != t.length() || s.length() == 0)
		return false;
	if (s.equals(t))
		return true;
	return false;
}
```


