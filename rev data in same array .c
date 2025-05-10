// Linear Algorithms
#include <stdio.h>

//additional func
int revArray(int data[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = 0;
        temp = data[i];
        data[i] = data[size - i - 1];
        data[size - i - 1] = temp;
        // data[size - i - 1] = data[i];
    }

    // print rev array
    printf("\nreverse array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
}

//main function
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
    // print original array
    printf("original array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    revArray(data, size);

    return 0;
}
