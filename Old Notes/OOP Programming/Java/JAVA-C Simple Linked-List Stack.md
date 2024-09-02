```Java

public class LinkedStack {
	private int size;
	private Node top;
	
	public LinkedStack() {
		this.size = 0;
		this.top = null;
	}
	
	private static class Node {
		String elem;
		Node next;
		
		Node(String elem, Node next) {
			this.elem = elem;
			this.next = next;
		}
	}
	
	public int size() {
		return this.size;
	}
	
	public void push(String t) {
		Node temp = new Node(t, this.top);
		this.top = temp;
		this.size++;
	}
	
	public String pop() {
		if (this.size == 0) {
			throw new RuntimeException("Empty Stack");
		}
		String out = this.top.elem;
		this.top = this.top.next;
		this.size--;
		return out;
	}
	
	@Override
	public String toString() {
		StringBuilder b = new StringBuilder("Stack:");
		Node n = this.top;
		while (n != null) {
			b.append('\n');
			b.append(n.elem);
			n = n.next;
		}
		return b.toString();
	}
}
```


