
#include <stdio.h>

int insert_data(int arr[], int n, int value, int pos)

{

    for (int i = n; i >= 0; i--)
    {
        if (i == pos - 1)
        {
            arr[i] = value;
            break;
        }

        arr[i] = arr[i - 1];
    }

    printf("\nNew Data: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}

//main function
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

    printf("\nAdding Data: ");
    scanf("%d", &value);
    printf("\nAdding Position: ");
    scanf("%d", &pos);

    // call function
    insert_data(arr, n, value, pos);

    return 0;
}
