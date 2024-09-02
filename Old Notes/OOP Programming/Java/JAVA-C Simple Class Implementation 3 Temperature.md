The following class implements a simple temperature methods:

>[!rmk|*]- Careful Considerations for the Order of Operations
>Consider `((9)*this.degCel)/5 + 32` and `((9/5)*this.degCel) + 32`. The first one is in the program, the second one was what I had put in to begin with thinking it was correct. But the second one does not give the correct value. This is because of order of operations. 
>Consider `this.degCel` $= 20$. 
>For the first expression `((9)*this.degCel)/5 + 32`
>1. `(9 * 20) / 5 + 32`
>2. `(180) / 5 + 32`
>3. `36 + 32`
>4. `68` which is the desired result.
>
>However, for `((9/5)*this.degCel) + 32`, we get:
>1. `(9 / 5) * 20 + 32`
>2. `1 * 20 + 32` Truncation occurs as $9$ and $5$ are technically `int` values.
>3. `20 + 32`
>4. `52` which is incorrect.
>
>The error for the second case lies in step $1 \rightarrow 2$ where $\frac{9}{5}$ gets truncated to $1$ instead of staying as a double. If you really want to use the second way of writing it, you must cast `(double)` to both the $9$ and the $5$ for their division to be itself a double. Thus the correct way is:
>`(((double) 9 / (double) 5)*this.degCel) + 32`

```Java
public class Temp {
	private double degCel;
	private double degFah; 
	private boolean isCel; //True if Obj created for celcius

	public Temp() {
		this.degCel = 0;
		this.degFah = ((9)*this.degCel)/5 + 32;
		this.isCel = true;
	}
	
	public Temp(double deg) {
		this.degCel = deg;
		this.degFah = ((9)*this.degCel)/5 + 32;
		this.isCel = true;
	}

	public static Temp degF(double f) {
		Temp tempF = new Temp();
		tempF.isCel = false;
		tempF.degFah = f;
		tempF.degCel = (5/9) * (tempF.degFah - 32);
		return tempF;
	}

	public double tempRet() {
		if (this.isCel){
			return this.degCel;
		}
		return this.degFah;
	}

	public double curTempF() {
		return this.degFah;
	}
	
	public double curTempC() {
		return this.degCel;
	}
	
	@Override
	public boolean equals(Object b) {
		if (this == b) {
			return true;
		}
		if (!(this instanceof Temp)) {
			return false;
		}
		Temp other = (Temp) b;
		if (Double.doubleToLongBits(this.degFah) != Double.doubleToLongBits(other.degFah)) {
			return false;
		}
		return true;	 
	}
}
```

The following code can be used to test:
```Java
public static void main(String[] args) {
	Temp temp1 = new Temp(20);
	Temp temp2 = Temp.degF(68);
	Temp temp3 = new Temp(20);
	System.out.println(temp1.equals(temp2));
	System.out.println(temp1.equals(temp3));
	System.out.println(temp1.curTempF());
	System.out.println(temp3.tempRet());
	System.out.println(temp2.tempRet());
}
```
Which, in its default state, will print `true`, `true`, `68.0`, `20.0` and `68.0`.