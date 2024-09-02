
>[!def|*]- Maps
>A map essentially maps a value to another value. In other languages, they are sometimes referred to as associative arrays. 
>
>A map is a $2$-column table where the elements in the first column are unique. They represent the entries of the table (hence why we say these implement [[Java Sets]]).

>[!def|*]- Map Interface
>A map models a group of elements that are accessed by keys (one can think of it as an [[Injective]] function).
> - Keys must be unique
> - Each key is [[Injective]]. 
> - Multiple keys can map to the same value.
> - Key-value pairs are called entries

>[!example|*]-
>![[Pasted image 20240305182022.png]]
>The first column represents the months, they are unique. The second column contains the days in that month, which need not be unique. 

>[!def|*] Operations
> - `HashMap<type,type> name = new HashMap<type,type>();` declares a `HashMap`. The same can be done for a `TreeMap`.
> - `.put(key, value)` inserts the key and the value associated to that key into the map. 
> - `.get(key)` retrieves the value associated to the imputed key. If the key is not in the map, it returns `null`.
> - `.containsKey(key)` verifies if the key is present in the map.
> - `.keySet()` returns a [[Java Sets|Java Set]] containing all the keys in the map. Specifically, it returns `Set`, which is an [[Java Interface]].
> - `.values()` returns a `Collection` that contains all the values. Where `Collection` is also a [[Java Interface]].

See [[JAVA-C String Count]] for an example program using a `HashMap`.

There are two main types of maps (we usually use `HashMap`):

>[!def|*]- HashMap
>A `HashMap` in Java works exactly as a hash table would in `C`. 
>- There is no guarantee of ordering.
>- `LinkedHashMap` remembers the order of entry.
>- `HashMap<type,type> name = new HashMap<type,type>();`

>[!def|*]- TreeMap
>A `TreeMap` is essentially a binary search tree.
