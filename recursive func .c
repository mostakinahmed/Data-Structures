#include <stdio.h>

void sumNum(int n, int sum)
{
    sum = sum + n;
    if (n == 1)
    {
        printf("\nSum = %d\n", sum);
        return;
    }
    //call this func until found n=1
    sumNum(n - 1, sum);
}


int main()
{
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    sumNum(n, sum);


    return 0;
}
