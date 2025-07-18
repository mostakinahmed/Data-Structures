#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *head = NULL;
    struct Node *taill = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // data assign
    first->data = 10;
    first->next = second;
    first->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = first;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    struct Node *current = head;
    head = first;
    printf("\nOriginal Doubly Linked List: \n");
    current = head;
    printf("Old     : ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    // create new node
    struct Node *newNode = NULL;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 555;
    newNode->next = NULL;
    newNode->prev = NULL;

    // adding at last position
    current = head;
    while (current->next != NULL)
        current = current->next;

    newNode->prev = current;
    current->next = newNode;
    taill = newNode;

    // printf last list
    current = head;
    printf("\nNew List: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    // printf("\n");
    // current = taill;
    // printf("Backward: ");
    // while (current != NULL)
    // {
    //     printf("%d ", current->data);
    //     current = current->prev;
    // }

    return 0;
}
