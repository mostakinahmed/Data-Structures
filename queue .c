#include <stdio.h>
#define MAX_SIZE 5
int data[MAX_SIZE];

int top = -1;
int rear = -1;
int front = -1;
// method declaration
void push();
void pop();
void display();
int main()
{
    int opt;
    while (1)
    {
        printf("\nOPTION LIST: \n");
        printf("1. Push.\n2. Pop.\n3. Display Data. \n4. Exit for - 0 \nChoose Option.....\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            return 0;
        default:
            printf("Choose correct option!");
            break;
        }
    }
}

// cheak array is empty or not
int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// cheak array is full or not
int isFull()
{
    if (rear == MAX_SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push for add data one by one
void push()
{
    int value;
    if (isFull())
    {
        printf("Data OverFlow\n");
    }
    else
    {
        printf("\nEnter data to add: ");
        scanf("%d", &value);
        rear = rear + 1;
        data[rear] = value; // add value
        if (front == -1)
        {
            front = 0;
        } // make always zero if once value added
        printf("%d is push in QUEUE.\n", value);
    }
}

// pop for delete data one by one
void pop()
{

    if (isEmpty())
    {
        printf("UnderFlow\n");
    }
    else if (front == rear)
    {
        printf("%d is deleted.\n", data[front]);
        rear = front = -1;
    }
    else
    {
        front = front + 1;
        printf("%d is deleted.\n", data[front - 1]);
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQUEUE is Empty.\n");
    }
    else
    {
        printf("\nQUEUE Data.......\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", data[i]);
        }
    }

    printf("\n");
}
