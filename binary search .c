
#include <stdio.h>

int binary_search(int arr[], int n, int data)

{
    int f, l, mid;
    f = 0, l = n - 1;


    //use while
    while (f <= l)
    {
            mid = (f + l) / 2;
            
        if (arr[mid] == data)
        {
            return mid;
        } 
        else if (arr[mid] > data)
        {
            l = mid - 1;
        }
        else if (arr[mid] < data)
        {
            f = mid + 1;
        }
    }

    return -1;
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

    printf("\nEnter Search Data: ");
    scanf("%d", &data);

    int res = binary_search(arr, n, data);

    printf("Adress : %d", res);

    return 0;
}
