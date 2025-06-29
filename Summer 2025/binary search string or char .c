#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', '\0'
                };

    int size=21;
    char searchData='p'; //searching data
    int f=0, l=size-1,mid,found=0,index=0;;

    while(f<=l) {
        mid=(f+l)/2;
        if(ch[mid]==searchData) {
            found=1;
            index=mid+1;
            break;
        } else if(ch[mid]<searchData) {
            f=mid+1;
        } else {
            l=mid-1;
        }
    }

    if(found==1) {
        printf("%c is found at position %d.",searchData, index);
    } else {
        printf("%c is Not found in the Array.",searchData);
    }

    return 0;
}
