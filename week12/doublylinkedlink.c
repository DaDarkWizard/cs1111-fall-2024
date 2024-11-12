#include <stdio.h>
#include <stdlib.h>

// Our node can point behind itself too!
struct Node_t {
    int value;
    struct Node_t *next;
    struct Node_t *previous;
};

// Our doubly linked list has a beginning and an end.
struct DoublyLinkedList_t {
    struct Node_t *head;
    struct Node_t *tail;
    int size;
};

// Rename our structs.
typedef struct Node_t Node;
typedef struct DoublyLinkedList_t DoublyLinkedList;

void printLinkedList(DoublyLinkedList *);
void addLinkedList(DoublyLinkedList *list, int value);

int main()
{
    // In setup, we need to keep track of both the head and the tail now.
    DoublyLinkedList list;
    list.head = malloc(sizeof(Node));
    list.tail = list.head;
    list.size = 1;
    list.head->value = 1;
    list.head->next = NULL;
    list.head->previous = NULL;

    addLinkedList(&list, 4);
    addLinkedList(&list, 5);
    addLinkedList(&list, 6);

    printLinkedList(&list);
}

void addLinkedList(DoublyLinkedList *list, int value)
{
    // Create the new node, same as before.
    Node *newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;

    // Use the tail to point our last node in the list
    // at the new node. Point the new node's previous
    // at the old end of the list.
    list->tail->next = newNode;
    newNode->previous = list->tail;

    // Update tail to point at the end of the list again.
    list->tail = newNode;

    // Increase our size variable.
    // How would we know the size if we didn't have this?
    list->size++;
}

void printLinkedList(DoublyLinkedList *list)
{
    Node *head = list->head;
    while(head != NULL)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}
