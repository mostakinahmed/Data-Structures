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
    struct node *current = NULL; // for storing update node

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
    // --------------------------------------------------------------------

    // search data by using linear search algorithm
    // input searching data
    int sValue, found = 0;
    printf("\nEnter Search data: ");
    scanf("%d", &sValue);

    // search data by using while loop
    struct node *ptr;
    ptr = head; // set 1st node to ptr
    while (ptr != NULL)
    {
        if (ptr->data == sValue)
        {
            found = ptr->data; // if found then set the value to found and exit loop
            break;
        }
        ptr = ptr->link; // update linked list to nxt node
    }

    // cheak found or not
    if (found != 0)
    {
        printf("Data Found: %d", found);
    }
    if (found == 0)
    {
        printf("Data Not Found in Linked List");
    }

    return 0;
}
