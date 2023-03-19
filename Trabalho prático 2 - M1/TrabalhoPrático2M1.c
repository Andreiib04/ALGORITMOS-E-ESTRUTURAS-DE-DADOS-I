#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;
bool isPalindrome(ListNode* head){
    if (head == NULL || head->next == NULL){
        return true;
    }
    ListNode *slow = head, *fast = head;
    for (; fast->next != NULL && fast->next->next != NULL; slow = slow->next, fast = fast->next->next);
    ListNode *prev = NULL, *curr = slow->next;
    for (; curr != NULL; ){
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = prev;
    ListNode *p1 = head, *p2 = prev;
    for (; p2 != NULL; p1 = p1->next, p2 = p2->next){
        if (p1->val != p2->val) {
            return false;
        }
    }

    return true;
}

int main(){
    // Criação da lista encadeada de exemplo
    ListNode *head = malloc(sizeof(ListNode));
    head->val = 5;

    ListNode *node1 = malloc(sizeof(ListNode));
    node1->val = 4;

    ListNode *node2 = malloc(sizeof(ListNode));
    node2->val = 3;

    ListNode *node3 = malloc(sizeof(ListNode));
    node3->val = 4;

    ListNode *node4 = malloc(sizeof(ListNode));
    node4->val = 5;

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    if (isPalindrome(head)){
        printf("A lista encadeada e um palindromo.\n");
    } else {
        printf("A lista encadeada nao e um palindromo.\n");
    }
    ListNode *curr = head;
    while (curr != NULL){
        ListNode *temp = curr;
        curr = curr->next;
        free(temp);
    }

    return 0;
}
