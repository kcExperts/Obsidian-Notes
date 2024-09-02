---
aliases:
  - DBD
---

>[!def|*] Declining-Balance Depreciation
>Declining-Balance Depreciation (DBD) also known as reducing-balance depreciation models the loss in value of an asset over a period as a constant fraction of the asset’s current **book value**. Algebraically, the depreciation charge for period $n$ is the depreciation rate multiplied by the book value from the end of period $(n-1)$. **Note that the book value at time 0 is $P$**: $$D_{db}(n) = BV_{db}(n-1) \times d$$where: $$BV_{db}(n) = P(1-d)^n$$where $d$ is the depreciation rate which is found using: $$d= 1 - \sqrt[n]{\frac{S}{P}}$$where $S$ is the salvage value.

The book value at the end of any particular period is easy to calculate by noting that the remaining value after each period is $(1-d)$ times the value at the end of the previous period: $$BV_{db}(n) = P(1-d)^n$$Where we recall that $P$ is the purchase price. Note that $P$ can also be the current market value.
