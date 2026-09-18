#include <stdio.h>

// LeetCode Solution
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    
    while (left <= right) {
        // Calculate mid this way to prevent integer overflow
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

// Local Test Cases
int main() {
    // Test Case 1: Target exists in the array
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1: %d\n", search(nums1, 6, 9)); // Expected: 4

    // Test Case 2: Target does not exist
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 2: %d\n", search(nums2, 6, 2)); // Expected: -1

    return 0;
}