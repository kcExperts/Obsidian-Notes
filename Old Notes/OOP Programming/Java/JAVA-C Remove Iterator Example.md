The following starter code will remove any values in the list (array-based with max capacity of 16) that are less than the specified value in the code below:
```Java
import java.util.Iterator;

public class MainClass {
	
	public static void main(String[] args) {
		MSList<Integer> list = new MSList<>();
		for (int i = 1; i < 17; i++) {
			list.add(i);
		}
		
		System.out.println(list);

		for (Iterator<Integer> iter = list.iterator(); iter.hasNext(); ) {
		    Integer val = iter.next();
		    if (val < 9) {
		        iter.remove();    // can call remove once for each call to next
		    }
		}
		System.out.println(list);
	}
}
```

The accompanying class is shown below:
```Java
import java.util.Iterator;
import java.util.NoSuchElementException;

public class MSList<E extends Comparable<E>> implements Iterable<E>{
	private Object[] list;
	private static final int ILS = 16;
	private int size;
	
	public MSList() {
		this.list = new Object[MSList.ILS];
		this.size = 0;
	}
	
	public int size() {
		return this.size;
	}
	
	public boolean isFull() {
		return this.size == MSList.ILS;
	}
	
	@SuppressWarnings("unchecked")
	public boolean add(E elem) {
		if (this.isFull()) {
			return false;
		} else if (this.size == 0){
			this.list[0] = elem;
			this.size++;
			return true;
		} else {
			int i = 0;
			//Get index that we need to place it at
			for (int k = 0; k < this.size; k++) {
				if (elem.compareTo((E) this.list[k]) > 0) {
					i++;
				}
			}
			//We have index, now insert
			for (int j = this.size; j > i; j--) {
				this.list[j] = this.list[j-1];
			}
			this.list[i] = elem;
			this.size++;
			return true;
		}
	}
	
	public boolean remove(Object obj) {
		//Get index
		int i = 0;
		while (i < this.size) {
			if (obj.equals(this.list[i])) {
				break;
			}
			i++;
		}
		if (i == this.size) {
			return false;
		}
		//We have index, now remove
		for (int j = i; j < this.size - 1; j++) {
			this.list[j] = this.list[j+1];
		}
		this.size--;
		return true;
	}
	
	public void removeIndex(int i) {
		if (this.size == 0) {
			throw new IllegalArgumentException("Empty List");
		}
		for (int j = i; j < this.size - 1; j++) {
			this.list[j] = this.list[j+1];
		}
		this.size--;
	}
	
	
	@Override
	public String toString() {
		if (this.size == 0) {
			return "Empty List";
		}
		StringBuilder b = new StringBuilder("List: ");
		for (int i = 0; i < this.size-1; i++) {
			b.append(this.list[i]);
			b.append(", ");
		}
		b.append(this.list[this.size-1]);
		b.append(".");
		return b.toString();
	}
	
	@Override
	public Iterator<E> iterator() {
		return new MSListIterator();
	}
	
	private class MSListIterator implements Iterator<E> {
		private int next;
		private int prev;
		
		public MSListIterator() {
			this.next = 0;
			this.prev = -1;
		}
		
		@Override
		public boolean hasNext() {
			return this.next < MSList.this.size;
		}
		

		@Override
		public E next() {
			if (!hasNext()) {
				throw new NoSuchElementException("No element found");
			}
			E out = (E) MSList.this.list[this.next];
			this.prev = this.next;
			this.next++;
			return out;
		}
		
		@Override
		public void remove() {
			if (this.prev == -1) {
				throw new IllegalStateException();
			}
			MSList.this.removeIndex(this.prev);
			this.next--;
			this.prev = -1;
		}
		
	}
	
}
```

