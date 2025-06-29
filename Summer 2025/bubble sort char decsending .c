#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', '\0'
                };
    int size=21;

    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-1-i; j++) {
            char temp='\0';
            if(ch[j]<ch[j+1]) {
                temp=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp;
            }
        }
    }

    //print
    for(int i = 0; i < size - 1; i++) {
        printf("%c ", ch[i]);
    }

    return 0;
}
