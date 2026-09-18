## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I used a single-pass greedy approach. As I iterate through the array, I keep track of the minimum price seen so far and continuously update the maximum profit by checking the difference between the current price and that minimum price.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
This $O(n)$ approach is highly optimal compared to a brute-force $O(n^2)$ nested loop that checks every single pair of days.