#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    // value assign
    head->data = 50;

    printf("%d", head->data);
    return 0;
}
