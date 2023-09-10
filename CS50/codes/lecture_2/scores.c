#include <stdio.h>

int func(void){
  return 0;
}

int main(){
  int score1 = 72;
  int score2 = 73;
  int score3 = 33;

  printf("Average: %.20f\n", (double) (score1 + score2 + score3)/ (double) 3.0);
}
