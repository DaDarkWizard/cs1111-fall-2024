/*
 * Contains the implementation for addLinkedList
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"

/*
 * Adds a value to a linked list.
 *
 * @param head: The first node in the list.
 * @param value: The value to add to the list.
 *
 * @return: 0 on success, -1 on failure.
 */
int addLinkedList(Node **head, int value)
{
    // This is a special case of inserting!
    // Just add it to the begining.
    return insertLinkedList(head, 0, value);
}
