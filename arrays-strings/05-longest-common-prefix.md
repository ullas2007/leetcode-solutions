## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I used vertical scanning. I took the first string as a reference and compared its characters column by column with the other strings. As soon as a mismatch occurs or a string ends, I insert a null terminator `\0` to cut off the reference string at that index and return it.

### Complexity
- Time: $O(S)$ where S is the sum of all characters in all strings.
- Space: $O(1)$ because we are modifying the input array in-place.

### Notes
This vertical matching approach prevents unnecessary comparisons that horizontal scanning might do if the final string is very short.