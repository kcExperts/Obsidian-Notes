---
aliases:
  - Java Set
---

>[!def|*]- Java Set
>A set in java behaves the same way as it would a [[Sets]] in mathematics. The standard operations apply. Very useful for removing duplicate elements of a list. We note that the [[Wrapper Class]] needs to be used. See Operations.

>[!def|*]- HashSet and LinkedHashSet
> - Declared using `HashSet<type> name = new Hashset()` Note that a list can be imputed to generate the elements. It will automatically remove duplicate elements.
> - Very fast standard set. Works exactly as expected.
> - Faster time complexity than `TreeSet`.
> - A `LinkedHashSet` preserves the order that the elements were imputed (slightly slower time complexity).

>[!def|*]- TreeSet
>- A set that orders its elements.
>- Slower time complexity than a HashSet
>- Elements must have type that implements `Comparable` or the set must be initialized with a `Comparator` object.

>[!def|*] Operations
>- `set1.addAll(set2)` creates the union of `set1` and `set2`.
>- `set1.retainAll(set2)` creates the intersection of `set1` and `set2`.
>- `set1.removeAll(set2)` computes the difference between `set1` and `set2`.
>- Sets do not support indexing. The only way to access each element is using a [[For-Each Loop]].

See [[JAVA-C Set Example]] on how it looks when it is coded.
[[JAVA-C Unique Element List]] shows how the uniqueness of elements of a set can be used to remove duplicate elements.
It is important to know what [[Java Sets]] are as [[Java Maps]] make use of them.

