#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', '\0'
                };
    int size=21;
    char delData='c';

    for(int i=0; i<size-1; i++) { //travers all data for finding delData
        //for delete
        if(ch[i]==delData) {
            for(int j=i; j<size-1; j++) {
                ch[j]=ch[j+1];
            }
            size--;
            break;
        }

    }

    //print
    for(int i = 0; i < size - 1; i++) {
        printf("%c ", ch[i]);
    }

    return 0;
}
