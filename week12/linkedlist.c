#include <stdio.h>
#include <stdlib.h>

typedef struct Node_t Node;

struct Node_t {
    int value;
    Node *next;
};


void printLinkedList(Node *);
void addLinkedList(Node *head, int value);

int main()
{
    Node head;
    head.next = NULL;
    head.value = 1;

    addLinkedList(&head, 4);
    addLinkedList(&head, 5);
    addLinkedList(&head, 6);

    printLinkedList(&head);
}

void addLinkedList(Node *head, int value)
{
    Node *currentNode = head;

    // Find the end of the linked list.
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }

    Node *newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;

    currentNode->next = newNode;
}

void printLinkedList(Node *head)
{
    while(head != NULL)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}
