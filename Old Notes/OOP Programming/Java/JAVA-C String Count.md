Suppose we were given a list of strings `t` and we want to check how many times a given string appears. Using [[Java Maps]] makes our life extremely easy.

Counts the times that the string appears in the map.
```Java
public static HashMap<String, Integer> countMap(ArrayList<String> list) {
	if (list.size() == 0) {
		throw new IllegalArgumentException("Empty list");
	}
	//Initialize new hashMap
	HashMap<String, Integer> count = new HashMap<>();
	//Count
	for (String i : list) {
		if (!(count.containsKey(i))) {
			count.put(i, 1);
		} else {
			int c = count.get(i);
			count.put(i, c+1);
		}
	}
	return count;
}
```

Prints the map:
```Java
public static void printMap(HashMap<String, Integer> map) {
	Set<String> keys = map.keySet();
	for (String i : keys) {
		int n = map.get(i);
		System.out.println("Key:" + i + " Count:" + n);
	}
}
```

Below is an example program:
```Java
import java.util.HashMap;
import java.util.Set;
import java.util.ArrayList;

public class MainClass {
	
public static void main(String[] args) {
	//Initialize
	ArrayList<String> t = new ArrayList<>();
	init(t); //Insert Strings
	//Create HashMap
	HashMap<String, Integer> count = countMap(t); 
	//Print key and count
	printMap(count);
}

public static void printMap(HashMap<String, Integer> map) {
	Set<String> keys = map.keySet();
	for (String i : keys) {
		int n = map.get(i);
		System.out.println("Key:" + i + " Count:" + n);
	}
}

public static HashMap<String, Integer> countMap(ArrayList<String> list) {
	if (list.size() == 0) {
		throw new IllegalArgumentException("Empty list");
	}
	//Initialize new hashMap
	HashMap<String, Integer> count = new HashMap<>();
	//Count
	for (String i : list) {
		if (!(count.containsKey(i))) {
			count.put(i, 1);
		} else {
			int c = count.get(i);
			count.put(i, c+1);
		}
	}
	return count;
}

public static void init(ArrayList<String> t) {
	t.add("hello");
	t.add("world");
	t.add("!");
	t.add("world");
	t.add("world");
	t.add("hello");
	t.add("!");
	t.add("!");
	t.add("!");
	t.add("world");
	t.add("world");
}

}
```