#include <stdio.h> 

int main(){
  //const int n = 5; // n is a constant and we cant chnage it 
  
  int n; 
  do
  { 
    printf("Size: ");
    scanf("%d", &n);
  }
  while (n<1);

  for (int i=0; i<n ; i++)
  {
    for (int j=0; j<n;j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
