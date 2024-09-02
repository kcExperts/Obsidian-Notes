Consider two sets `s1` and `s2`, the code below does the following:
 - `s1` $= \{1,2,3,4,5\}$
 - `s2` $= \{3,4,5,6,7\}$
 - `sU` $=$`s1` $\cup$ `s2`
 - `sI` $=$`s1` $\cap$ `s2`
 - `sD` $=$ `s1`/`s2`

```Java
public static void main(String[] args) {
	//Initialize
	HashSet<Integer> s1 = new HashSet<>();
	for (int i = 1; i <= 5; i++)
		s1.add(i);
	HashSet<Integer> s2 = new HashSet<>();
	for (int i = 3; i <= 7; i++)
		s2.add(i);
	//Methods directly from the set
	HashSet<Integer> sU = new HashSet<>(s1);
	HashSet<Integer> sI = new HashSet<>(s1);
	HashSet<Integer> sD = new HashSet<>(s1);
	
	//Union
	System.out.println("Union");
	sU.addAll(s2);
	for (Integer i : sU)
		System.out.println(i);
	System.out.println("---");
	
	//Intersection
	System.out.println("Intersection");
	sI.retainAll(s2);
	for (Integer i : sI)
		System.out.println(i);
	System.out.println("---");
	
	//Difference
	System.out.println("Difference s1/s2");
	sD.removeAll(s2);
	for (Integer i : sD)
		System.out.println(i);
	System.out.println("---");
}
```

