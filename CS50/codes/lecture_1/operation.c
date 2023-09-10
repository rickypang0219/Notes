#include <stdio.h>

int main(){
  long x;
  printf("What's x: ");
  scanf("%ld", &x);

  long y;
  printf("What's y: ");
  scanf("%ld", &y);
  

  // For division
  // without using (float) to convert x and y
  // the compiler will truncate the decimal 
  // change float to dounble to ease the floating point imprecision
  // float supports 32 bits, double supports 64 bits
  double z = (double) x /  (double) y; 

  printf("%.20f\n", z);
}
