
>[!def|*] Aggregation
>Aggregation, simply put, is a stronger form of [[Java Association]]. In aggregation, one class (aggregate or the whole) is made up of one or more instances of another class (parts).
>- Aggregation models a `part-of` relationship between two classes.
>- Aggregation implies shared ownership. Parts can make up multiple other aggregates. See [[Consequences of Aggregation]].
>- Aggregation **cannot** be a two way relationship.

Consider the following code below:
```Java
public class Card {
	private Rank rank;
	private Suit suit;
	public Card(Rank rank, Suit suit) {
		this.rank = rank;
		this.suit = suit;
	}
	public Rank rank() {
		return this.rank;
	}
	public Suit suit() {
		return this.suit;
	}
}
```
Clearly `Card` contains the `Rank` and `Suit` class. But here, this class is made up of `Rank` and `Suit`. (In reality, a card is made up of a rank and suit). Hence this is an aggregation of one `Rank` and one `Suit` object.

>[!rmk|*]- UML Diagram
>The UML diagram for the above code is:
>![[Pasted image 20240403100411.png]]
>Where the number represents how many objects the `Card` class contains. 
>

>[!exercise|1]
>Consider Exercise $1$ in [[Java Association]]. Explain why it is **not** an aggregation

>[!claim|*]- Solution
>Consider a `Student`. It need not enroll in a `Class` which will still exist even if $0$ students enroll. The same holds in reverse. In other words, a `Class` is not made up of `Student` and `Student` does not make up `Class`.
>

