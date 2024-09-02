The following is a class implements the following basic operations:
- Add vectors
- Scale vectors
- Compute the dot product
- Compute the length of a vector

```Java
public class BasicGeometry {
	
	//Will need to be initialized when constructor is called
	private double[] vector; //0 index based
	private int size; //Measurement, starts at 1
	
	/**
	 * Initialize a zero-vector with the specified size.
	 * @param {@code size} dimension of the vector
	 * @throws Fails if {@code size <= 0}
	 */
	public BasicGeometry(int size) {
		if (size <= 0) {
			throw new IllegalArgumentException("size <= 0");
		}
		this.size = size;
		this.vector = new double[size]; //Initialize vector
		for (int i = 0; i < size; i++) {
			this.vector[i] = 0; //Make 0 vector
		}
	}
	
	/**
	 * Initialize vector with the given elements
	 * @param {@code elems} array of elements for the vector
	 * @throws Fails if {@code size <= 0}
	 */
	public BasicGeometry(double...elems) {
		//length() is for size of strings
		//length is for size of array
		int size = elems.length;
		if (size <= 0) {
			throw new IllegalArgumentException("size <= 0");
		}
		this.size = size;
		this.vector = new double[size];
		for (int i = 0; i < size; i++) {
			this.vector[i] = elems[i]; 
			//Vector with components from elems
		}
	}
	
	/**
	 * Gives element in the vector at the given 0 based {@code index}
	 * @throws index must be in the dimension of the vector
	 * @param {@code index} 0 based index representing the component
	 * @return value of the index component 
	 */
	public double elemAt(int index) {
		if (index - 1 > this.size) {
			throw new IllegalArgumentException("Index out of bounds");
		}
		return this.vector[index];
	}
	
	/**
	 * Outputs the dimension of the vector
	 * @return size of the vector
	 */
	public int sizeOf() {
		return this.size;
	}
	
	/**
	 * Replaces element at {@code index} with {@code elem}
	 * @throws index must be in the dimension of the vector
	 * @param {@code index} index to be replaced
	 * @param {@code elem} value to insert
	 */
	public void insert(int index, double elem) {
		if (index-1 > this.size) {
			throw new IllegalArgumentException("Index out of bounds");
		}
		this.vector[index] = elem;
	}
	
	/**
	 * Function to add 2 vectors together
	 * @param {@code vector2} vector to be added
	 * @thrws sizes of vectors are not equal
	 * @return new vector
	 */
	public BasicGeometry add(BasicGeometry vector2) {
		if (this.size != vector2.size) {
			throw new IllegalArgumentException("size (v1 != v2)");
		}
		//Create new vector
		BasicGeometry temp = new BasicGeometry(this.size); 
		double sum;
		for (int i = 0; i < this.size; i++) {
			sum = this.vector[i] + vector2.elemAt(i);
			temp.insert(i, sum);
		}
		return temp;
	}
	
	/**
	 * Function to multiply the entire vector by some scalar
	 * @param {@code a} value to scale vector by
	 * @return scaled version of the vector
	 */
	public void scale(double a) {
		for (int i = 0; i < this.size; i++) {
			this.vector[i] = this.vector[i] * a;
		}
	}
	
	/**
	 * Function that computes the dot product and returns it
	 * @param {@code vector2} vector to use in dot product
	 * @throws if the vectors are not of the same dimension
	 * @return double value of the dot product of the vectors
	 */
	public double dotProduct(BasicGeometry vector2) {
		if (this.size != vector2.size) {
			throw new IllegalArgumentException("size (v1 != v2)");
		}
		double dot = 0;
		for (int i = 0; i < this.size; i++) {
			dot += this.vector[i] * vector2.elemAt(i);
		}
		return dot;
	}
	
	/**
	 * Function that computes the length of the vector 
	 * @param {@code v} vector whose length is to be found
	 * @return double value representing the lenght of the vector
	 */
	public double lengthOf(BasicGeometry v){
		double length = 0;
		length = v.dotProduct(v);
		length = Math.sqrt(length);
		return length;
	}
}
```
