When [[Equals Method]] is overwritten, the `hashCode` method is also overwritten. If it is not, the hashed containers will not work properly. 

>[!def|*] HashCode
>HashCode in Java is essentially a Hash Table, which is essentially an array that can hold multiple values in an index. It maps values to an index in its table. With a good HashCode, your values will be spread out equally throughout your Table.
>
>A HashCode is of: `public int hashCode()`

But if you don’t overwrite `hashCode`, it will use the memory location of the object to verify if it is in the `hashCode`. You can clearly see the problem with this when comparing objects. 

In general, for Java, if you are asked to `@Override` a HashCode, implement:
```Java
@Override
public int hashCode(){
	return Objects.hash(arg1, arg2, ..., argn)
}
```
Essentially it will use the $n$ arguments to produce a good hash. 

In Eclipse, one can do `Source` $\rightarrow$ `Generate hashCode() and equals()` to get a suitable HashCode.

