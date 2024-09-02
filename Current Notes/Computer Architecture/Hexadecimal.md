Every number can be represented in hexadecimal form (base 16). The digits that make it up are:

#### Hexadecimal Table
| Hex Digit | Decimal Digit |
| ---- | ---- |
| 0 | 0 |
| 1 | 1 |
| 2 | 2 |
| 3 | 3 |
| 4 | 4 |
| 5 | 5 |
| 6 | 6 |
| 7 | 7 |
| 8 | 8 |
| 9 | 9 |
| A | 10 |
| B | 11 |
| C | 12 |
| D | 13 |
| E | 14 |
| F | 15 |



#### Hexadecimal Conversion
The most efficient way to go from decimal to hexadecimal is to first convert the decimal to binary, then separate the binary digits into groups of 4 (add leading 0’s if necessary). Then, for each group corresponds to a power of 16. Find how many times you need to multiply by 16 to reach that number and that number will be your hexadecimal digit. Always start your hexadecimal representation with `0x`.
```Example
For 106:
	106 = 0110 1010
	Thus:
		1010 = 8 + 2 = 10
			Thus 10 *16^0
			Thus 10 = A
		0110 = 64 + 32 = 96
			Thus 6 * 16^1
			Thus 6 = 6
We conclude 106 = 0x6A
```