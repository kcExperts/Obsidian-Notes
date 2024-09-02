```Java
public class MSList<E extends Comparable<E>> {
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
	
	@Override
	public String toString() {
		StringBuilder b = new StringBuilder("List: ");
		for (int i = 0; i < this.size-1; i++) {
			b.append(this.list[i]);
			b.append(", ");
		}
		b.append(this.list[this.size-1]);
		b.append(".");
		return b.toString();
	}
}
```