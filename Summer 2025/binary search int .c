#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int arr[10]= {1,5,77,9,11,22,55,88,89,100};
    int size=10;
    int searchData=100; //searching data
    int f=0, l=size-1,mid,found=0,index=0;;

    while(f<=l) {
        mid=(f+l)/2;
        if(arr[mid]==searchData) {
            found=1;
            index=mid+1;
            break;
        }

        else if(arr[mid]<searchData) {
            f=mid+1;
        } else {
            l=mid-1;
        }
    }

    if(found==1){
        printf("%d is found at position %d.",searchData, index);
    }
    else{
        printf("%d is Not found in the Array.",searchData);
    }

    return 0;
}
