
#include <stdio.h>

int main()
{

    int arr[]= {1,2,5,8,9,11,20,55};
    int left=0,right=7,mid=0;
    int sData=15;
    int inx=0,found=0;
    while(left<=right) {
        mid =(left+right)/2;
        if(arr[mid]==sData) {
            found=1;
            inx=mid;
            break;
        }

        else if(sData>arr[mid]) {
            left=mid+1;
        } else {
            right=mid-1;
        }
    }

    if(found){
         printf("%d is found at index %d",sData,inx);
    }
    else{
        printf("%d is missing in this array.",sData);
    }



    return 0;
}
