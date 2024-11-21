#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node_t Node;

// Declare our node structure. It holds a value, and can
// point to another node that may also hold a value
// and point somewhere else.
struct Node_t {
    int value;
    Node *next; // This must be a pointer - an object
                // can never be large enough to hold itself!
                // So this is size 8 (on my machine)
};

// Implement these functions:

/*
 * Deletes the node at index from the linked list.
 *
 * @param head: memory address of pointer to first node in the list.
 *              This will be updated to point at the new head if it changes
 *              such as when deleting index 0.
 * @param index: The index to remove from the list.
 *
 * @return 0 on success, -1 on failure.
 */
int deleteLinkedList(Node **head, int index);

/*
 * Gets a value from a linked list.
 *
 * @param head: The first node of the list.
 * @param index: The index to get the value of.
 * @param out: location to store the value from the list.
 *
 * @return: 0 on success, -1 on failure (out of bounds).
 */
int getLinkedList(Node *head, int index, int *out);


/*
 * Gets the index of a value.
 *
 * @param head: The first node of the list.
 * @param value: The value to search for.
 *
 * @return the index found, or -1 on failure.
 */
int indexOfLinkedList(Node *head, int value);

// These functions have been implemented for you.

/*
 * Inserts a value into to a linked list.
 *
 * @param head: The first node in the list.
 * @param index: The location to put in the list.
 * @param value: The value to add to the list.
 *
 * @return: 0 on success, -1 on failure.
 */
int insertLinkedList(Node **head, int index, int value);

/*
 * Adds a value to a linked list.
 *
 * @param head: The first node in the list.
 * @param value: The value to add to the list.
 *
 * @return: 0 on success, -1 on failure.
 */
int addLinkedList(Node **head, int value);

/*
 * Prints a linked list to stdout
 *
 * @param head: The first node in the list.
 */
void printLinkedList(Node *head);

#endif
