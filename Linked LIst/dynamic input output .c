#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;    // for 1st node
    struct node *temp = NULL;    // for creating dynamic address
    struct node *current = NULL; // for storing Current node

    // user input the size of linked list
    int n, value;
    printf("\nEnter Linked list size: ");
    scanf("%d", &n);

    // input from keyboard
    for (int i = 0; i < n; i++)
    {
        // memory address create
        temp = (struct node *)malloc(sizeof(struct node));

        // input value
        printf("Enter data[%d]: ", i + 1);
        scanf("%d", &value);

        // set value to linked list
        temp->data = value;
        temp->link = NULL;

        // 1st node set to head
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }

        // 2nd to others node update
        else
        {
            current->link = temp; // set previous node->link
            current = temp;       // current node update
        }
    }

    // print all data
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link; // update node to next node
    }
    return 0;
}
