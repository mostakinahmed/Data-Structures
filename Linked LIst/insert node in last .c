#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

// main function
int main()
{
    struct node *head = NULL;    // for 1st node
    struct node *temp = NULL;    // for creating dynamic address
    struct node *current = NULL; // for storing update node
    struct node *newNode = NULL; // for new node

    // user input the size of linked list
    int n, value;
    printf("\nEnter Linked list size: ");
    scanf("%d", &n);

    // input from keyboard
    for (int i = 0; i < n; i++)
    {
        // memory address create
        temp = (struct node *)malloc(sizeof(struct node));

        // cheak the memory address is created or not
        if (temp == NULL)
        {
            printf("memory allocation failled.\n");
        }

        printf("Enter Data[%d]: ", i + 1);
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

    // print previous linked list
    printf("\nPrevious linked list.\n");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n\nInput New Node Data.\n");
    printf("-------------------------\n");
    // Add one linked list at last position
    // create memory address
    newNode = (struct node *)malloc(sizeof(struct node));

    // take input data
    printf("Enter Data: ");
    scanf("%d", &value);

    // set value to linked list
    newNode->data = value;
    newNode->link = NULL;
    current->link = newNode;

    // print New linked list
    printf("\nNew linked list.\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

// --------------------------------------------------------------------
