#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list (provided by LeetCode).
struct ListNode {
    int val;
    struct ListNode *next;
};

// LeetCode Solution
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* nextTemp = NULL;
    
    while (curr != NULL) {
        nextTemp = curr->next; // Store next node
        curr->next = prev;     // Reverse the pointer
        prev = curr;           // Move prev forward
        curr = nextTemp;       // Move curr forward
    }
    return prev;
}

// Local Testing Helpers
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Local Test Cases
int main() {
    // Test Case 1: 1 -> 2 -> 3 -> NULL
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    
    printf("Original: ");
    printList(head1);
    
    struct ListNode* reversed1 = reverseList(head1);
    printf("Reversed: ");
    printList(reversed1); // Expected: 3 -> 2 -> 1 -> NULL

    // Test Case 2: Empty list
    struct ListNode* head2 = NULL;
    printf("Empty Original: ");
    printList(head2);
    
    struct ListNode* reversed2 = reverseList(head2);
    printf("Empty Reversed: ");
    printList(reversed2); // Expected: NULL

    return 0;
}