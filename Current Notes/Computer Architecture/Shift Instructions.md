Many applications exist where bits need to be either shifted left or right. Such a feat is achieved using the Logical-shift-left or the Logical-shift-right instruction.

>[!definition|*] Logical Shift
>The logical shift instruction `LShiftL` and `LShiftR` work by specifying a register to be shifted and the amount that that register needs to be shifted by. Thus `LShiftL    Ri, Rj, count`, will shift `Rj` to the left by `count`.
>
>Note that vacated positions are filled with $0$’s.

However, another type of shifting exists that accounts for the type of number being inputted. Very useful shortcut for multiplication and division. 

>[!rmk|*] Multiplication and Division by $2$
>When shifting in either direction, assuming the decimal number is in its [[Unsigned Representation|2's Complement]] form, we have:
> - A *left shift* is equivalent to multiplying by $2$. However overflow might occur.
> - A *right shift* is equivalent to dividing by $2$. Using a simple logical shift operation could cause the sign representation to change.

Since a *logical right shift* would not preserve the sign of a signed number, a new type of shift is needed to fix this.

>[!definition|*] Arithmetic Shift
>The arithmetic shift instruction `AShiftR` accounts for the signed bit when shifting to the right (dividing by $2$). It will automatically set the most significant bit for the [[Unsigned Representation|2's Complement]] to the required bit to retain sign value. 
>
>Note `AShiftL` is equivalent to `LShiftL`. 
