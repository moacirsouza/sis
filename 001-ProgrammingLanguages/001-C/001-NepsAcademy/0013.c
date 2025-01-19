#include <stdio.h>

int main(void){
  // Declares two variables: Onde vector, one scalar
  int vector[10], iterator;

  // Executes a loop of 10 iterations, expecting, each time, an integer input
  // from the user
  for(iterator = 0; iterator < 10; iterator++){
    scanf("%d", &vector[iterator]);
  }

  // Executes a loop of 10 iterations, printing the content of the 'vector'
  // variable, backwards. It's important to realise that the indices of a vector
  // with 10 positions go from 0 to 9, so, the iterator should start at 9,
  // instead of 10, and stop at 0
  for(iterator = 9; iterator >= 0; iterator--){
    printf("%d\n", vector[iterator]);
  }

  return 0;
}
