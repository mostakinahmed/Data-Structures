#include <stdio.h> 
#include <stdlib.h>

int main()
{
  //intialize variables
  int search, c, n;
  
  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  int array[n];
  printf("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  //add file or data
  //aaa adada

  if (c==n)
  
    printf("%d isn't present in array.\n", search);
  return 0;
}