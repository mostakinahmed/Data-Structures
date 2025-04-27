
#include <stdio.h>

int revArray(int data1[], int data2[], int size)

{
    printf("\nCommon Data: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (data1[i] == data2[j])
            {
                printf("%d ", data1[i]);
            }
        }
    }
}

int main()
{
    int size, s;
    printf("Enter size: ");
    scanf("%d", &size);
    int data1[size], data2[size];

    printf("\n1st array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data1[i]);
    }
    printf("\n2nd array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &data2[i]);
    }
    // print original array
    printf("\noriginal array 1: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data1[i]);
    }
    printf("\noriginal array 2: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data2[i]);
    }

    revArray(data1, data2, size);

    return 0;
}
