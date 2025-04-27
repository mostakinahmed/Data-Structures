// Linear Algorithms
#include <stdio.h>

int linear_search(int data[], int s, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == s)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size, s;
    printf("Enter size: ");
    scanf("%d", &size);
    int data[size];

    for (int i = 0; i < size; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    printf("Searching Data: ");
    scanf("%d", &s);

    int index = linear_search(data, s, size);

    printf("Index: %d ", index);
    return 0;
}
