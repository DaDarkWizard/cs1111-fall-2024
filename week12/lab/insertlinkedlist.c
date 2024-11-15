/*
 * Contains the implementation for insertLinkedList
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"
#include <stdlib.h>

/*
 * Inserts a value into to a linked list.
 *
 * @param head: The first node in the list.
 * @param index: The location to put in the list.
 * @param value: The value to add to the list.
 *
 * @return: 0 on success, -1 on failure.
 */
int insertLinkedList(Node **head, int index, int value)
{
    // Allocate some memory for the new node.
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
    {
        return -1;
    }

    // Initialize the new node.
    newNode->next = NULL;
    newNode->value = value;

    // Special base case for the first node.
    if (index == 0)
    {
        // Point the new node at head.
        // Head is a pointer to a pointer, so we
        // need to dereference it once.
        newNode->next = *head;

        // Update head to point at the new beginning of the list.
        *head = newNode;
    }
    else
    {
        // Iterate through the list until we find the node we should be at.
        Node *current = *head;
        for(int i = 1; i < index && current != NULL; i++)
        {
            current = current->next;
        }

        // This will only happen if the index they gave was out of bounds.
        if(current == NULL)
        {
            // Remember to prevent memory leaks!
            free(newNode);
            return -1;
        }

        // Put the new node between the current one and the following one.
        newNode->next = current->next;
        current->next = newNode;
    }

    // Remember to return success.
    return 0;
}
