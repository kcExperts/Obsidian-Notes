The following class does:
 - Represents a rectangle using coordinates. $(x_1,y_1)$ is the top left part and $(x_2, y_2)$ is the bottom right.
 - Determines if a point $(x,y)$ is in the rectangle.
 - Compares rectangle area.
 - Contains a utility class `RectUtility` to determine if two `Rect` objects overlap.

```Java
public class Rect implements Comparable<Rect> {
	int x1;
	int y1;
	int x2;
	int y2;

	public Rect(int x1, int y1, int x2, int y2) {
		if (x1 == x2)
			throw new IllegalArgumentException ("x1 == x2");
		if (y1 == y2)
			throw new IllegalArgumentException ("y1 == y2");
		this.x1 = x1;
		this.y1 = y1;
		this.x2 = x2;
		this.y2 = y2;
	}
	//Taxicab distance
	public boolean contains(int x, int y) {
		if (this.x1 <= x && x <= this.x2) {
			if (this.y2 <= y && y <= this.y1)
				return true;
		}
		return false;
	}

	@Override public int compareTo(Rect other) {
		int area1 = Math.abs(this.x2 - this.x1) * Math.abs(this.y2 - this.y1);
		int area2 = Math.abs(other.x2 - other.x1) * Math.abs(other.y2 - other.y1);
		if (area1 == area2) {
			return 0;
		} else if (area1 <= area2) {
			return -1;
		}
		return 1;
	}
}

//In main class Rect
class public RectUtility {
	//No Argument Constructor
	private RectUtility() {
	}
	//Static says that we access function by using RectUtility.overlap
	static boolean overlap(Rect rect1, Rect rect2) {
		if (rect1.contains(rect2.x1, rect2.y1) || rect1.contains(rect2.x2, rect2.y2)) {
			return true;
		} else if (rect2.contains(rect1.x1, rect1.y1) || rect2.contains(rect1.x2, rect1.y2)) {
			return true;
		}
		return false;
	}
}
```

The following code can be used to test the class.
```Java
public static void main(String[] args) {
	Rect rect1 = new Rect(-1, 1, 1, -1);
	Rect rect2 = new Rect(-1, 2, 1, 0);
	System.out.println(rect1.contains(0, -1));
	System.out.println(rect1.compareTo(rect2));
	System.out.println(RectUtility.overlap(rect1, rect2));
}
```
By default it will print `true`, `0` and `true`.

