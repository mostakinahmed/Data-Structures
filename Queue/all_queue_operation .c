#include <stdio.h>

void enqueue();
void dequeue();
void display();
void peek();

// Global data
#define size 5
int data[size];
int front = -1, rear = -1;

//
//
void enqueue()
{
    printf("--------------Enueue--------------\n");
    int val;

    if (rear == size - 1)
    {
        printf("Queue is Full....");
    }
    else
    {
        printf("Enter Data: ");
        scanf("%d", &val);
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        data[rear] = val;
        printf("Enqueue %d is successfull.", val);
    }
}
//
//
//
void dequeue()
{
    printf("--------------Dequeue--------------\n");

    if (front == -1)
    {
        printf("Queue is Empty....");
    }
    else
    {
        printf("%d is Dequeue.", data[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1; // reset
        }
    }
}
//
//
//
void display()
{
    printf("--------------Display--------------\n");
    if (front >= 0)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", data[i]);
        }
    }
    else
    {
        printf("Queue is empty.\n");
    }
}
//
//
//
void peek()
{
    printf("--------------Peek--------------\n");

    if (front == -1)
    {
        printf("Queue is Empty....");
    }
    else
    {
        printf("Peek element is %d.", data[front]);
    }
}
//
//
//
int main()
{
    int n = 1;
    while (n)
    {

        printf("\n_____________________\n");
        printf("         Menu\n");
        printf("1. Enqueue \n2. Dequeue \n3. Display \n4. Peek \n5. Exit \n");

        int option;
        printf("Enter Option___: ");
        scanf("%d", &option);
        printf("\n");
        switch (option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            n = 0;
            break;

        default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}
