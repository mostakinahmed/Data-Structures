
#include <stdio.h>

int bubble_sort(int arr[], int n)

{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int temp = 0;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Data: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n, data;
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

    bubble_sort(arr, n);

    return 0;
}
