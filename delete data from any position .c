
#include <stdio.h>

int delete_data(int arr[], int n, int pos)

{
    int data;

    for (int i = pos - 1; i < n; i++)
    {
        if (i == pos - 1) // for storing delete value
        {
            data = arr[i];
        }
        arr[i] = arr[i + 1];
    }
    n--;

    printf("\n%d is Deleted.\n", data);

    printf("\nNew Data: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n, value, pos;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];

    // take input
    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // print original array
    printf("\nOriginal array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("\nDeleting Data: ");
    // scanf("%d", &value);
    printf("\nDeleting Position: ");
    scanf("%d", &pos);

    // call function
    delete_data(arr, n, pos);

    return 0;
}
