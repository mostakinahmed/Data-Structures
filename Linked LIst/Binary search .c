#include <stdio.h>
#include <stdlib.h>
void dataInput();
struct node
{
    int id;
    int data;
    struct node *link;
};
int f_id, l_id;
struct node *head = NULL;    // for 1st node
struct node *temp = NULL;    // for creating dynamic address
struct node *current = NULL; // for storing update node

void dataInput()
{
    // user input the size of linked list
    int n, value, id;
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
        temp->id = i + 1;
        temp->data = value;
        temp->link = NULL;

        // 1st node set to head
        if (head == NULL)
        {
            f_id = temp->id; // set for store first id - binary search
            head = temp;
            current = temp;
        }

        // 2nd to others node update
        else
        {
            current->link = temp; // set previous node->link
            current = temp;       // current node update
            l_id = temp->id;      // set for store last id - binary search
        }
    }
}

//midFunction for getting mid value
int midFunc(int midInx)
{
    struct node *ptr;
    ptr = head; // set 1st node to ptr
    while (ptr != NULL)
    {
        if (ptr->id == midInx)
        {
            return ptr->data; //if mid index value found
        }
        ptr = ptr->link; // update linked list to nxt node
    }
}

// main function
int main()
{
    dataInput();

    // search data by using Binary search algorithm
    // input searching data
    int sValue, found = 0, mid;
    printf("\nEnter Search data: ");
    scanf("%d", &sValue);

    // search data by using while loop
    struct node *ptr;
    ptr = head; // set 1st node to ptr
    while (f_id <= l_id)
    {
        mid = (f_id + l_id) / 2;
        int midValue = midFunc(mid); //getting mid value from midFunction
        if (sValue == midValue)
        {
            found = midValue;
            break;
        }
        else if (midValue < sValue)
        {
            f_id = mid + 1;
        }
        else
        {
            l_id = mid - 1;
        }
    }

    // cheak found or not
    if (found != 0)
    {
        printf("Data Found: %d at index %d.", found, mid);
    }
    if (found == 0)
    {
        printf("Data Not Found in Linked List");
    }

    return 0;
}

// --------------------------------------------------------------------
