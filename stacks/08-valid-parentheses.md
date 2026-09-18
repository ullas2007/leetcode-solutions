## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used an array to simulate a stack. I iterate through the string, pushing opening brackets onto the stack. When I encounter a closing bracket, I pop the top element from the stack and check if it forms a matching pair. If it doesn't match, or if the stack is empty when a closing bracket appears, the string is invalid.

### Complexity
- Time: $O(n)$ where n is the length of the string.
- Space: $O(n)$ to store the stack in the worst-case scenario (all opening brackets).

### Notes
In C, memory management is important. I made sure to `free(stack)` before every `return` statement to prevent memory leaks.