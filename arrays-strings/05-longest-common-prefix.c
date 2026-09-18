#include <stdio.h>
#include <string.h>

// LeetCode Solution
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    // Check character by character using the first string as a reference
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char currentChar = strs[0][i];
        
        // Compare this character with the same position in all other strings
        for (int j = 1; j < strsSize; j++) {
            if (i == strlen(strs[j]) || strs[j][i] != currentChar) {
                strs[0][i] = '\0'; // Terminate the string early
                return strs[0];
            }
        }
    }
    return strs[0];
}

// Local Test Cases
int main() {
    // Test Case 1: Common prefix exists
    char s1_1[] = "flower";
    char s1_2[] = "flow";
    char s1_3[] = "flight";
    char* strs1[] = {s1_1, s1_2, s1_3};
    printf("Test 1: %s\n", longestCommonPrefix(strs1, 3)); // Expected: "fl"

    // Test Case 2: No common prefix
    char s2_1[] = "dog";
    char s2_2[] = "racecar";
    char s2_3[] = "car";
    char* strs2[] = {s2_1, s2_2, s2_3};
    printf("Test 2: %s\n", longestCommonPrefix(strs2, 3)); // Expected: "" (empty string)

    return 0;
}