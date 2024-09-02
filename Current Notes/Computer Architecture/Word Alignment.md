---
aliases:
  - Word Aligned
---
For $32$-bit word length, natural boundaries appear at $4n$.

>[!definition|*] Aligned Addresses
>Multiple word locations are *aligned* if they begin at a byte address that is a multiple of the number of bytes in a word.

>[!definition|*] Unaligned Addresses
>There is no reason a collection of words need to be aligned. In that case, they are *unaligned*.

It makes life significantly easier to assume that words are aligned. With this, we are now ready to start memory operations. For this, we need to investigate [[Register Transfer Notation]]. 