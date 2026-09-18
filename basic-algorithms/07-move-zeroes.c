#include <stdio.h>

// LeetCode Solution
void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    
    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }
    
    // Fill the remaining array with zeroes
    while (insertPos < numsSize) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

// Local Test Cases
int main() {
    // Test Case 1: Mixed zeroes and non-zeroes
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test 1: ");
    for(int i = 0; i < 5; i++) printf("%d ", nums1[i]); // Expected: 1 3 12 0 0
    printf("\n");

    // Test Case 2: All zeroes
    int nums2[] = {0, 0};
    moveZeroes(nums2, 2);
    printf("Test 2: ");
    for(int i = 0; i < 2; i++) printf("%d ", nums2[i]); // Expected: 0 0
    printf("\n");

    return 0;
}