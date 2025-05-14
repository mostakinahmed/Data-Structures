// Linear Algorithms
#include <stdio.h>

//create additional func to manage operation
//linear
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

//main function
int main()
{
    int size, s;
    printf("Enter size: ");
    scanf("%d", &size);
    int data[size];

    //show data
    for (int i = 0; i < size; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    //show data
    printf("Searching Data: ");
    scanf("%d", &s);
    //call func and pass argument
    int index = linear_search(data, s, size);

    printf("Index: %d ", index);
    return 0;
}
