#include <stdio.h>

int main()
{
    int arr[]= {1,2,5,8,9,11,20,55};
    int size=8,pos=0;
    int dData=9,i=0,found=0;

    //find position of del value
    while(i<size) {
        if(dData==arr[i]) {
            pos=i;
            break;
        }
        i++;
    }

    //data delete
    for(int j=pos; j<size; j++) {
        arr[j]=arr[j+1];
    }
    size--;

    //printf update data
    for(int j=0; j<size; j++) {
       printf("%d ",arr[j]);
    }

    return 0;
}
