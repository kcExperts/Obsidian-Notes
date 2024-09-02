The following is an array stack for strings.

```Java
import	java.util.ArrayList;

public class Stack {
	private ArrayList<String> stack;
	
	public Stack() {
		this.stack = new ArrayList<>();
	}
	
	public int size() {
		return this.stack.size();
	}

	
	public void push(String t) {
		this.stack.add(t);
	}
	
	public String pop() {
		//Recall that size returns the number of elements
		//Thus -1 to get 0 index
		String elem = this.stack.remove(this.stack.size()-1);
		return elem;
	}
	
}
```

