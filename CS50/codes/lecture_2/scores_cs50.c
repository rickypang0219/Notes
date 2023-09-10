#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int length, int array[]){
  int sum = 0;
  for (int i = 0; i<N;i++ ){
    sum += array[i];
  }
  return sum/ (float) length;
}

int main(){
  int i = 0;
  int scores[N];
  for (i=0; i<N; i++){
    scores[i] = get_int("Score:");
  }

  printf("The average is equal %f\n", average(N, scores));
}
