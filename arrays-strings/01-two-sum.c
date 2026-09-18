#include <stdio.h>
#include <stdlib.h>

// LeetCode Solution
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

// Local Test Cases
int main() {
    int returnSize;
    
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int* result1 = twoSum(nums1, 4, 9, &returnSize);
    printf("Test 1: [%d, %d]\n", result1[0], result1[1]);
    free(result1);

    // Test Case 2: Edge case (minimum length, duplicates)
    int nums2[] = {3, 3};
    int* result2 = twoSum(nums2, 2, 6, &returnSize);
    printf("Test 2: [%d, %d]\n", result2[0], result2[1]);
    free(result2);

    return 0;
}