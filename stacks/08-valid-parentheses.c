#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// LeetCode Solution
bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) return false; // Odd length strings can never be perfectly paired
    
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        // Push opening brackets onto the stack
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } 
        // Process closing brackets
        else {
            if (top == -1) { // Stack is empty, but we have a closing bracket
                free(stack);
                return false;
            }
            char topChar = stack[top--]; // Pop the top element
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                free(stack);
                return false; // Mismatched bracket types
            }
        }
    }
    
    bool result = (top == -1); // If stack is empty at the end, it's valid
    free(stack);
    return result;
}

// Local Test Cases
int main() {
    // Test Case 1: Valid brackets
    char s1[] = "()[]{}";
    printf("Test 1: %s\n", isValid(s1) ? "true" : "false"); // Expected: true

    // Test Case 2: Invalid brackets (mismatched)
    char s2[] = "(]";
    printf("Test 2: %s\n", isValid(s2) ? "true" : "false"); // Expected: false

    return 0;
}