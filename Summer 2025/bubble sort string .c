#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "galiba mukhsotho"; 

    int size = 16;
    printf("Original: %s\n", name);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (name[j] > name[j + 1]) {
                char temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    printf("Sorted: %s\n", name);
    return 0;
}
