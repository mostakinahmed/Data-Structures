// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x[5] = {1, 2, 300, 4, 5};
    int* ptr;
    ptr=&x[0];
    
    for(int i=0;i<5;i++){
        printf("Adress of x[%d]: %u\n",i,&ptr);
        printf("x[%d]: %d\n\n",i,*ptr);
        ptr++;
    }

    return 0;
}
