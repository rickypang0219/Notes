include <stdio.h> 
#include <cs50.h> 

int main(void){
  // creating an array
  int numbers[] =  {20, 500, 10, 5 ,100,1,50}; 

  int n = get_int("Number: "); 

  for ( int i=0; i<7; i++){
    if (numbers[i] == n){
      printf("Found \n");
      return 0; 
    }
  }
  printf("Not Found \n");
  return 1;
}
