#include <stdio.h>
//declare all function here
void push();
void pop();
void display();

int MaxSize = 10;
int data[10];
int top = -1;
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
            return 0;  //0 for stop program
        default:
            printf("Choose correct option!");
            break;
        }
    }
}

// cheak array is empty or not
int isEmpty()
{
    if (top == -1)
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
    if (top == MaxSize - 1)
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
        top = top + 1;
        data[top] = value;
        printf("%d is push in stack.\n", value);
    }
}

// pop for delete data one by one
void pop()
{
    if (isEmpty()) //if stack is blank
    {
        printf("UnderFlow\n");
    }
    else
    {
        top = top - 1;
        printf("%d is deleted.\n", data[top + 1]);
    }
}

void display()
{
    printf("Stack Data.......\n");
    for (int i = 0; i <= top; i++)
    {
        printf("Data [%d]: %d\n", i, data[i]);
    }
}
