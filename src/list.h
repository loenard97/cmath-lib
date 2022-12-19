#ifndef LIST_H
#define LIST_H

typedef struct listnode ListNode;
typedef struct list List;

void printListNode(ListNode* node);
void printList(List* list);
void append(List* list, ListNode* node);

#endif
