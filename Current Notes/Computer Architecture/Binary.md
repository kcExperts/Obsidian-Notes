Every number can be internally represented in binary form (base 2). Thus they consist of only 1’s and 0’s. A sequence of [[Bits]] in binary are the respective powers of two that make up the number.

To get a decimal to a binary number, subtract the highest power of $2$ that you can and keep doing so until you hit $2^0$. The power of $2$ represents that you must put a $1$ in that position:

```Example
10 = 2^3 + 2^1 = 0000 1010
117 = 2^6 + 2^5 + 2^4 + 2^2 + 2^0 = 0111 0101
```

It is a different story for [[Unsigned]] representation.