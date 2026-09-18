## Problem: Reverse a Linked List (Easy - Bonus)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
I used an iterative approach with three pointers (`prev`, `curr`, and `nextTemp`). By traversing the list, I continuously pointed the current node's `next` pointer to the previous node, ultimately reversing the entire chain.

### Complexity
- Time: $O(n)$ where n is the number of nodes in the list.
- Space: $O(1)$ since we are only rearranging existing pointers without allocating new memory.

### Notes
This was completed as a bonus problem to ensure all four topic folders contain practical implementations.