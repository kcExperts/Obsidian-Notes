```Java
import java.util.List;
import java.util.ArrayList;

public class ListQueue<E> {
	private List<E> q;
	
	public ListQueue() {
		this.q = new ArrayList<>();
	}
	
	public boolean isEmpty() {
		return this.q.size() == 0;
	}
	
	public int size() {
		return this.q.size();
	}
	
	public void enqueue(E e) {
		this.q.add(e);
	}
	
	public E dequeue() {
		if (this.q.isEmpty())
			throw new RuntimeException("Empty q");
		return this.q.remove(this.q.size()-1);
	}
	
	public E front() {
		if (this.q.isEmpty())
			throw new RuntimeException("Empty q");
		return this.q.get(0);
	}
	
	public E back() {
		if (this.q.isEmpty())
			throw new RuntimeException("Empty q");
		return this.q.get(this.q.size() - 1);
	}
}
```