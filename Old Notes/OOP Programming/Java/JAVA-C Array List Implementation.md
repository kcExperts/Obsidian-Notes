I’ve not an idea how t o implement a remove method for the iterator itself.

```Java
import java.util.Iterator;
import java.util.Arrays;
import java.util.NoSuchElementException;

public class SList<E> implements Iterable<E> {
	Object[] list;
	private final static int ILS = 16;
	private int size; //Amount of elems in list
	
	public SList() {
		list = new Object[SList.ILS];
	}
	
	public int size() {
		return this.size;
	}
	
	public boolean isEmpty() {
		return this.size == 0;
	}
	
	public void add(E elem) {
		if (this.size == this.list.length) {
			list = Arrays.copyOf(this.list, this.list.length * 2);
		}
		this.list[this.size] = elem;
		this.size++;
	}
	
	@SuppressWarnings("unchecked")
	public E get(int index) {
		if (index < 0 || index >= this.size)
			throw new IllegalArgumentException("Index out of bounds");
		return (E)this.list[index];
	}
	
	public void set(int index, E elem) {
		if (index < 0 || index >= this.size)
			throw new IllegalArgumentException("Index out of bounds");
		this.list[index] = elem;
	}
	
	@SuppressWarnings("unchecked")
	public void add(int index, E elem) {
		if (index < 0 || index > this.size)
			throw new IllegalArgumentException("Index out of bounds");
		this.add((E)this.list[this.size() - 1]);
		for(int i = this.size - 2; i > index; i--) {
			this.set(i, (E)this.list[i - 1]);
		}
		this.set(index, elem);
	}
	
	@SuppressWarnings("unchecked")
	public E remove(int index) {
		if (index < 0 || index >= this.size)
			throw new IllegalArgumentException("Index out of bounds");
		E temp = (E)this.list[index];
		for(int i = index; i < this.size - 1; i++) {
			this.list[i] = this.list[i+1];
		}
		this.list[this.size - 1] = null;
		this.size--;
		return temp;
	}
	
	@Override
	public Iterator<E> iterator() {
		return new SListIterator();
	}
	
	private class SListIterator implements Iterator<E> {
		private int curIndex;

		public SListIterator() {
			this.curIndex = 0;
		}
		
		@Override
		public boolean hasNext() {
			return this.curIndex < SList.this.size;
		}
		
		@SuppressWarnings("unchecked")
		@Override
		public E next() {
			if (!this.hasNext())
				throw new NoSuchElementException("No elements found");
			E temp = (E)SList.this.list[curIndex];
			this.curIndex++;
			return temp;
		}	
	}

	@Override
	public String toString() {
		StringBuilder b = new StringBuilder("List: ");
		for (int i = 0; i < this.size - 1; i++) {
			b.append(this.list[i]);
			b.append(", ");
		}
		b.append(this.list[this.size - 1]);
		b.append(".");
		return b.toString();
	}
}
```