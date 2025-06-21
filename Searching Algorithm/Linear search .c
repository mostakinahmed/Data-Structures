
#include <stdio.h>

int main()
{

    int arr[]= {1,2,5,8,9,11,20,55};
    int size=8;
    int sData=20,inx,i=0,found=0;

    while(i<size) {

        if(arr[i]==sData) {
            found=1;
            inx=i;
            break;
        }
        i++;
    }

    if(found) {
        printf("%d is found at index %d",sData,inx);
    } else {
        printf("%d is missing in this array.",sData);
    }



    return 0;
}
