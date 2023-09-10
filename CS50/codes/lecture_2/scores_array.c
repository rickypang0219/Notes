#include <stdio.h> 

int main(){
  int scores[3];
  scores[0] = 72;
  scores[1] = 73;
  scores[2] = 33;

  int sum = 0; 
  float avg; 

  for (int i=0;i<3;i++){
    sum += scores[i];
  }

  avg = sum/ 3.0 ;
  printf("The sum of scores is %d\n:", sum);
  printf("The avg of scores is %f\n:", avg);
  return 0;
}
