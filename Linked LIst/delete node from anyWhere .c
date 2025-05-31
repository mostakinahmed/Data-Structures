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
    int n, value, pos;
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

    // delete any positon node
    printf("Enter Position: ");
    scanf("%d", &pos);

    // update node
    ptr = head;
    for (int i = 1; i <= pos; i++)
    {

        if (i == pos && ptr == head) // delete 1st index only
        {
            head = ptr->link;
            break;
        }
        else if (i == pos - 1) // make change in linked list pos-1
        {
            ptr->link = ptr->link->link;
        }
        ptr = ptr->link;
    }

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
