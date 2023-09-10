#include <stdio.h>


int get_size(void);
void print_grid(int n);


int main(void){

  // Get the size of grid 
  int n = get_size();
  
  // Print the size of grid
  print_grid(n);

}

int get_size(void){
  int n;
  do
  {
    printf("Size: ");
    scanf("%d", &n);
  }
  while (n<1);
  return n;
}

void print_grid(int n){
  for (int i=0; i<n ; i++)
  {
    for (int j=0; j<n;j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
