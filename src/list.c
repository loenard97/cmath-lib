#include "list.h"
#include <stdio.h>


typedef struct listnode
{
    int value;
    ListNode* next;
} ListNode;

typedef struct list
{
    ListNode* root;
} List;


void printListNode(ListNode* node)
{
    printf("<ListNode object '%d, %p' at %p>\n", node->value, node->next, node);
}

void printList(List* list)
{
    if (list->root == NULL)
    {
        printf("<List object '[]' at %p>", &list);
        return;
    }
    ListNode* cur = list->root;

    printf("<List object '[");
    while (cur->next != NULL)
    {
        printf("%d, ", cur->value);
        cur = cur->next;
    }
    printf("%d]' at %p>", cur->value, &list);
}

void append(List* list, ListNode* node)
{
    if (list->root == NULL)
    {
        list->root = node;
        return;
    }

    ListNode* cur = list->root;

    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = node;
}