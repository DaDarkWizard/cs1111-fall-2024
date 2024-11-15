/*
 * Some test cases for linked lists.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"

#include <stdio.h>

Node *testAddLinkedList()
{
    // Make sure to initialize to NULL!
    Node *head = NULL;

    addLinkedList(&head, 1);
    addLinkedList(&head, 2);
    addLinkedList(&head, 3);
    printLinkedList(head);
    printf("\n");
    return head;
}

Node *testInsertLinkedList(Node *head)
{
    insertLinkedList(&head, 1, 4);
    insertLinkedList(&head, 3, 5);
    printLinkedList(head);
    printf("\n");
    return head;
}

int main()
{
    Node *list = testAddLinkedList();
    list = testInsertLinkedList(list);
    return 0;
}
