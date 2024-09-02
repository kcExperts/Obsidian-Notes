---
aliases:
  - Share
  - Stock
  - Shares
  - Stocks
---
The most basic financial instrument is the equity, stock or share.

>[!def|*] Equity/Stock/Share
>Owning an equity equates to the ownership of a piece of a company.

>[!def|*] #Shareholder
>A shareholder is someone is owns a share (equity/stock) of the company. The shareholders who own the company have say in running the business and the directors of the company are meant to act in the best interest of the shareholders.

#### Rudimentary Simulation of the randomness of Equities

Suppose a stock starts at $1$ dollar. Let the current value of the stock be denoted by $v_p$ and the previous value be denoted by $v_{p-1}$. Now suppose I have a coin, then:
 - If heads, perform $v_p = (1.01)v_{p-1}$
 - If tails, perform $v_p = (0.99)v_{p-1}$
 This is referred to as a geometric random walk. Below I have simulated multiple graphs of $50$ different coin flips.

![[Pasted image 20240312220351.png]]
![[Pasted image 20240312220427.png]]![[Pasted image 20240312220437.png]]

As you can see, they have nothing to do with each other, thus a sort of randomness is present. This carries over to stocks as well.

