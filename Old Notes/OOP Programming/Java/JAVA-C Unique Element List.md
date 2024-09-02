Suppose you are given a Java Array List and you want to return a new list that removes all duplicate items. The following method does as expected (the type may be changed at will):

```Java
public static ArrayList<Integer> removeDup(ArrayList<Integer> list){
	HashSet<Integer> temp = new HashSet<>(list);
	ArrayList<Integer> sorted = new ArrayList<>();
	for (Integer i : temp) {
		sorted.add(i);
	}
	return sorted;
}
```

Below is an example program:

```Java
import java.util.ArrayList;
import java.util.HashSet;

public class MainClass {
	
	public static void main(String[] args) {
		int[] array = new int[] {3,3,1,4,2,3,2};
		ArrayList<Integer> list = new ArrayList<>();
		for (int i = 0; i < array.length; i++) {
			list.add(array[i]);
		}
		ArrayList<Integer> listND = removeDup(list);
		for(int i = 0; i < listND.size(); i++) {
			System.out.println(listND.get(i));
		}
	}	
		
	
	public static ArrayList<Integer> removeDup(ArrayList<Integer> list){
		HashSet<Integer> temp = new HashSet<>(list);
		ArrayList<Integer> sorted = new ArrayList<>();
		for (Integer i : temp) {
			sorted.add(i);
		}
		return sorted;
	}
}
```

Which outputs `1,2,3,4`.