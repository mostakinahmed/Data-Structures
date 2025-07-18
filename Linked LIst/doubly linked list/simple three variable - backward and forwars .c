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

    head = first;
    printf("Original Doubly Linked List: \n");
    struct Node *current = head;

    printf("Forward: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    current = third;
    printf("Backward: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }

    return 0;
}
