This class is a simple implementation of the [[Iterator Interface]]. Use this class in a for each loop to print out the elements from start to stop.

```Java
import java.lang.Iterable;
import java.util.Iterator;
import java.util.NoSuchElementException;


public class ForEach implements Iterable<Integer>{
	private	int start;
	private int stop;
	
	public ForEach(int stop) {
		this.start = 0;
		this.stop = stop;
	}
	
	public ForEach(int start, int stop) {
		if (stop < start)
			throw new IllegalArgumentException("Stop less than Start");
		this.stop = stop;
		this.start = start;
	}
	@Override
	public Iterator<Integer> iterator() {
		return new ForEachIterator();
	}
	
	private class ForEachIterator implements Iterator<Integer> {
		private int val;
		
		public ForEachIterator() {
			this.val = ForEach.this.start;
		}
		
		@Override
		public boolean hasNext() {
			return this.val < ForEach.this.stop;
		}
		
		@Override
		public Integer next() {
			if (!this.hasNext())
				throw new NoSuchElementException("No elements found");
			Integer result = this.val;
			this.val++;
			return result;
		}
		
	}
}
```