#include <stdio.h> 

int main() 
{
  int x;
  printf("What's x?");
  scanf("%d", &x);

  int y;
  printf("What's y?");
  scanf("%d", &y);

  if (x<y)
  {
    printf("x is less than y \n");
  }
  else if ( x > y) 
  { 
    printf("x is not less than y \n"); 
  } 
  else 
  { 
    printf("x is equal y \n");
  }

}
