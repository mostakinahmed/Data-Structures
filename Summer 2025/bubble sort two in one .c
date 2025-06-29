#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6]= {76,65,74,85,71,79};
    int arr2[6]= {76,65,74,85,71,79};
    int arr3[6]= {76,65,74,85,71,79};
    printf("Old array: \n");
    for (int i=0; i< 6; i++) {
        printf("%d ",arr[i]);
    }
    int size=6;
    printf("\nA - D Array: \n");
    for (int i=0; i< size-1; i++) {
        for(int j=0; j<size-1-i; j++) {
            int temp=0;
            if(arr2[j]>arr2[j+1]) {
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    for (int i=0; i< 6; i++) {
        printf("%d ",arr2[i]);
    }


    printf("\nD - A Array: \n");
    for (int i=0; i< size-1; i++) {
        for(int j=0; j<size-1-i; j++) {
            int temp=0;
            if(arr3[j]<arr3[j+1]) {
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }
    for (int i=0; i< 6; i++) {
        printf("%d ",arr3[i]);
    }
    //  printf("Hello world!\n");
    return 0;
}
