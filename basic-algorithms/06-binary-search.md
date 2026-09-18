## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used a standard iterative binary search. I set two pointers at the start and end of the array, calculated the midpoint, and halved the search space on each iteration based on whether the target was greater or less than the midpoint value.

### Complexity
- Time: $O(\log n)$
- Space: $O(1)$

### Notes
Calculating `mid` using `left + (right - left) / 2` instead of `(left + right) / 2` is a crucial habit to prevent integer overflow errors for very large arrays.