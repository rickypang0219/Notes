#include <stdio.h>

int main(void)
{
  int array[] = {1, 3, 5, 10, 9, 6, 7};
  int max = 0;

  for (int i = 0; i<7; i++)
  {
    if (max < array[i])
    {
      max = array[i];
      printf("%d\n", max);
    }
  }
  printf("Max is %d\n", max);
}
