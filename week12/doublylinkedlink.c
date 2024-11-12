#include <stdio.h>
#include <stdlib.h>

struct Node_t {
    int value;
    struct Node_t *next;
    struct Node_t *previous;
};

struct DoublyLinkedList_t {
    struct Node_t *head;
    struct Node_t *tail;
    int size;
};

typedef struct Node_t Node;

typedef struct DoublyLinkedList_t DoublyLinkedList;

void printLinkedList(DoublyLinkedList *);
void addLinkedList(DoublyLinkedList *list, int value);

int main()
{
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

    Node *newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;

    list->tail->next = newNode;
    newNode->previous = list->tail;
    list->tail = newNode;
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
