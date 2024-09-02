The `@SuppressWarnings("unchecked")` are not needed.

```Java
public class ArrayQueue<E> {
	private static final int IQS = 16;
	private Object[] arr;
	private int front;
	private int back;
	private int size;	//# Elems in arr
	
	public ArrayQueue() {
		arr = new Object[ArrayQueue.IQS];
		this.front = 0;
		this.back = -1;
		this.size = 0;
	}
	
	public boolean isEmpty() {
		return this.size == 0;
	}
	
	public int size() {
		return this.size;
	}
	
	public void enqueue(Object in) {
		if (this.size == this.arr.length) 
			throw new RuntimeException("Capacity Reached");
		this.size++;
		this.back = (this.back + 1) % this.arr.length;;
		this.arr[this.back] = in;
	}
	
	@SuppressWarnings("unchecked")
	public E dequeue() {
		if (this.isEmpty())
			throw new RuntimeException("Q Empty");
		Object elem = this.arr[this.front];
		this.arr[this.front] = null;
		this.front = (this.front+1) % this.arr.length;
		return (E) elem;
	}
	
	@SuppressWarnings("unchecked")
	public E front() {
		if (this.isEmpty())
			throw new RuntimeException("Q Empty");
		return (E) this.arr[this.front];
	}
	
	@SuppressWarnings("unchecked")
	public E back() {
		if (this.isEmpty())
			throw new RuntimeException("Q Empty");
		return (E) this.arr[this.back];
	}
	
	@Override
	public String toString() {
		StringBuilder b = new StringBuilder("Queue:");
		if (this.isEmpty()) {
			b.append(" Is Empty");
			return b.toString();
		}
		b.append("\n");
		for (int i = 0; i < this.size-1; i++) {
			int index = (this.front+i) % this.arr.length;
			b.append(this.arr[index].toString());
			b.append("\n");
		}
		return b.toString();
	}
}
```