#include <stdio.h>
#include <string.h>

// LeetCode Solution
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

// Local Test Cases
int main() {
    // Test Case 1: Even length string
    char s1[] = "hello";
    reverseString(s1, strlen(s1));
    printf("Test 1: %s\n", s1); // Expected output: olleh

    // Test Case 2: Odd length string
    char s2[] = "Hemanth";
    reverseString(s2, strlen(s2));
    printf("Test 2: %s\n", s2); // Expected output: htnameH

    return 0;
}