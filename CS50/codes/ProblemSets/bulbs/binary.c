#include <stdio.h>
#include <stdlib.h>

int* turn_binary(int ASCII) {
    int* binary = (int*) malloc(8 * sizeof(int));   // Allocate memory on the heap
    int i = 0;
    int num = ASCII;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    return binary;   // Return a pointer to the allocated memory
}

int main(){
  int ASCII = 72; 
  int* bin_rep = turn_binary(ASCII); 
  for (int i =0; i < 8; i++)
  {
    printf("%d\n", bin_rep[i]);
  }
}
