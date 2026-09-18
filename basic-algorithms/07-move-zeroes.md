## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
I used a two-pointer approach to modify the array in-place. A fast pointer iterates through the array to find non-zero elements, while a slow pointer (`insertPos`) keeps track of where to place the next non-zero element. After placing all non-zeros, a second loop fills the rest of the array with zeroes.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
This approach is more efficient than a bubble sort variant because it operates in linear time $O(n)$ rather than $O(n^2)$, while still maintaining the relative order of the non-zero elements.