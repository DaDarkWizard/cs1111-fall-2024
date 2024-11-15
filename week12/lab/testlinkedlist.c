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

    printf("addLinkedList\n");
    addLinkedList(&head, 1);
    addLinkedList(&head, 2);
    addLinkedList(&head, 3);
    printf("Actual:  ");
    printLinkedList(head);
    printf("\nCorrect: 3 2 1\n");
    return head;
}

Node *testInsertLinkedList(Node *head)
{
    printf("deleteLinkedList\n");
    insertLinkedList(&head, 1, 4);
    insertLinkedList(&head, 3, 5);
    printf("Actual:  ");
    printLinkedList(head);
    printf("\nCorrect: 3 4 2 5 1\n");
    return head;
}

Node *testDeleteLinkedList(Node *head)
{
    printf("deleteLinkedList\n");
    deleteLinkedList(&head, 0);
    deleteLinkedList(&head, 3);
    printf("Actual:  ");
    printLinkedList(head);
    printf("\nCorrect: 4 2 5\n");
    return head;
}

void testGetLinkedList(Node *head)
{
    int one = 0, two = 0;
    printf("getLinkedList\n");
    getLinkedList(head, 0, &one);
    getLinkedList(head, 2, &two);
    printf("Actual:  %d %d\n", one, two);
    printf("Correct: 4 5\n");
}

void testIndexOfLinkedList(Node *head)
{
    int one = 0, two = 0;
    printf("indexOfLinkedList\n");
    one = indexOfLinkedList(head, 0);
    two = indexOfLinkedList(head, 4);
    printf("Actual:  %d %d\n", one, two);
    printf("Correct: -1 0\n");
}

int main()
{
    Node *list = testAddLinkedList();
    list = testInsertLinkedList(list);
    list = testDeleteLinkedList(list);
    testGetLinkedList(list);
    testIndexOfLinkedList(list);
    return 0;
}
