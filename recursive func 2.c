#include <stdio.h>

void recFunc(int start, int n)
{
    printf("%d \n", start);
    if (start == n)
    {
        return;
    }
    // call this func until found n=1
    recFunc(start + 1, n);
}

int main()
{
    int n, start = 1;
    printf("Enter N: ");
    scanf("%d", &n);

    recFunc(start, n);

    return 0;
}
