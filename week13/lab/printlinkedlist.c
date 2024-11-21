/*
 * Contains implementation of the printLinkedList function.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"
#include <stdio.h>

/*
 * Prints a linked list to stdout
 *
 * @param head: The first node in the list.
 */
void printLinkedList(Node *head)
{
    Node *current = head;

    // Print each value until we reach the end.
    while(current != NULL)
    {
        // Print the current value.
        printf("%d ", current->value);

        // Move to the next value.
        current = current->next;
    }
}
