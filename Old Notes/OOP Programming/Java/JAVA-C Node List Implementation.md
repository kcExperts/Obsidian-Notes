```Java
import java.util.NoSuchElementException;
import java.util.Iterator;

public class SNodeList<E> implements Iterable<E> {
	
	static class Node<E> {
		E data;
		Node<E> next;
	
		public Node(E data, Node<E> next){
			this.data = data;
			this.next = next;
		}
	}
	
	private int size;
	private Node<E> head;
	private Node<E> tail;
	
	public int size() {
		return this.size;
	}
	
	/*
	 * We implement package private head and tail methods
	 * as many algorithms require access to the head and the tail nodes.
	 */
	Node<E> head() {
		return this.head;
	}
	Node<E> tail() {
		return this.tail;
	}
	
	public SNodeList() {
		this.size = 0;
		this.head = null;
		this.tail = null;
	}
	
	public boolean isEmpty() {
		return this.size == 0;
	}
	
	//Adds to the back
	public void add(E data) {
		if (this.isEmpty()) {
			this.head = new Node<>(data, null);
			this.tail = this.head;
		} else {
			Node<E> temp = new Node<>(data, null);
			this.tail.next = temp;
			this.tail = this.tail.next;
		} 
		this.size++;
	}
	
	public Node<E> moveTo(int index) {
		if (index >= this.size)
			throw new IllegalArgumentException("Index out of bounds");
		Node<E> out = this.head;
		for(int i = 0; i < index; i++) {
			out = out.next;
		}
		return out;
	}
	
	public E get(int index) {
		if (index >= this.size)
			throw new IllegalArgumentException("Index out of bounds");
		return this.moveTo(index).data;
	}
	
	public void set(int index, E data) {
		if (index >= this.size)
			throw new IllegalArgumentException("Index out of bounds");
		this.moveTo(index).data = data;
	}
	
	public void addFront(E data) {
		this.head = new Node<>(data, this.head);
		this.size++;
	}
	
	public void add(int index, E data) {
		if (index == 0) {
			this.addFront(data);
		} else {
			if (index >= this.size)
				throw new IllegalArgumentException("Index out of bounds");
			Node<E> previous = this.moveTo(index - 1);
			Node<E> temp = new Node<>(data, this.moveTo(index));
			previous.next = temp;
			this.size++;
		}
	}
	
	public E removeFront() {
		if (this.isEmpty())
			throw new NoSuchElementException("Empty List");
		E out = this.head.data;
		this.head = this.head.next;
		this.size--;
		return out;
	}
	
	public E remove(int index) {
		if (index == 0) {
			return this.removeFront();
		} else {
			E out = this.moveTo(index).data;
			Node<E> previous = this.moveTo(index - 1);
			previous.next = previous.next.next;
			this.size--;
			return out;
		}
	}
	
	@Override
	public String toString() {
		StringBuilder b = new StringBuilder("List: ");
		Node<E> curNode = this.head;
		for(int i = 0; i < this.size - 1; i++) {
			b.append(curNode.data);
			b.append(", ");
			curNode = curNode.next;
		}
		b.append(curNode.data);
		b.append(".");
		return b.toString();
	}
	
	public Iterator<E> iterator() {
		return new SNodeListIterator();
	}
	
	private class SNodeListIterator implements Iterator<E> {
		private Node<E> curNode; //Node before main node
		//Thats just how an iterator works so we
		//can guarantee last element is iterated over
		
		public SNodeListIterator() {
			this.curNode = new Node<>(null, SNodeList.this.head);
		}
		
		@Override
		public boolean hasNext() {
			return this.curNode.next != null;
		}
		
		@Override
		public E next() {
			if (!this.hasNext())
				throw new NoSuchElementException("No elements found");
			E temp = this.curNode.next.data;
			this.curNode = this.curNode.next;
			return temp;
			
		}
	}
}
```