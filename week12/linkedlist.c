#include <stdio.h>
#include <stdlib.h>

// We can typedef before the struct to use the type
// inside the definition.
typedef struct Node_t Node;

// Declare our node structure. It holds a value, and can
// point to another node that may also hold a value
// and point somewhere else.
struct Node_t {
    int value; // size 4
    Node *next; // This must be a pointer - an object
                // can never be large enough to hold itself!
                // So this is size 8 (on my machine)
}; // The whole structure is size 12.

// BAD EXAMPLE:
/*
struct Node_t {
   int value; 4 bytes
   Node next; How many bytes is this???
} // We don't know the size.
*/

// Declare our function prototypes so we can use them
// in main() before declaration.
// Note that there is no variable name for printLinkedList
// The compiler only needs to know the types, so variable
// names aren't required in prototypes.
void printLinkedList(Node *);
void addLinkedList(Node *head, int value);

int main()
{
    // Declare our 'head' node.
    // It will be the top of our list.
    Node head;
    head.next = NULL;
    head.value = 1;

    // Call our functions to add
    // to the end of the list.
    addLinkedList(&head, 4);
    addLinkedList(&head, 5);
    addLinkedList(&head, 6);

    printLinkedList(&head);
}

// Add to a linked list given the value and the beginning of the list.
void addLinkedList(Node *head, int value)
{
    // Create a variable to keep track of our current node.
    Node *currentNode = head;

    // Find the end of the linked list.
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }

    // Create a new node to hold the given value.
    Node *newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;

    // Our current node is at the end of the list.
    // We just have to point it at our new node.
    currentNode->next = newNode;
}

// Given the beginning of a list, print it.
void printLinkedList(Node *head)
{
    // Print each value until we reach the end.
    while(head != NULL)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}
