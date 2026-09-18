## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a frequency counter array of size 26 to track the occurrences of each lowercase English letter. I incremented the count for letters in the first string and decremented for the second string. If the strings are anagrams, all counts will cancel out to zero.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ (since the array size is fixed at 26 regardless of input size)

### Notes
This approach is highly efficient for comparing strings limited to a specific alphabet. Checking the lengths first is a quick optimization to rule out strings of different sizes immediately.