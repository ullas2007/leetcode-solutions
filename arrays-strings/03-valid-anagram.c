#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// LeetCode Solution
bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }
    
    int counts[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }
    return true;
}

// Local Test Cases
int main() {
    // Test Case 1: Valid anagram
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1: %s\n", isAnagram(s1, t1) ? "true" : "false"); // Expected: true

    // Test Case 2: Invalid anagram
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2: %s\n", isAnagram(s2, t2) ? "true" : "false"); // Expected: false

    return 0;
}