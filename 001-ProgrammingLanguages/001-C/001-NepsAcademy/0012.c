#include <stdio.h>

int main(void){
  // Declares five integer variables: Two vectors and three scalars
  int vector[10], indicesWhereXIsFound[10];
  int iterator, x, counter = 0;

  // Executes a loop of 10 iterations, expecting, each time, a integer input
  // from the user. Each value is stored in one of the positions within the
  // 'vector' variable.
  for(iterator = 0; iterator < 10; iterator++){
    scanf("%d", &vector[iterator]);
  }

  // Expects an integer input from the user and stores it in the x variable
  scanf("%d", &x);

  // Executes a loop of 10 iterations, testing, each time, if the input stored
  // in the 'x' variable is equal to at least one of the previously input
  // integers stored in the 'vector' variable.
  // If true, the 'indicesWhereXIsFound' variable value is updated to contain
  // the position in 'vector', where 'x' was found. Notice that the 'counter'
  // variable is used as 'indicesWhereXIsFound' index, and 'counter' is only
  // updated after that
  for(iterator = 0; iterator < 10; iterator++){
    if(x == vector[iterator]){
      indicesWhereXIsFound[counter] = iterator;
      counter += 1;
    }
  }

  // Tests the value of the 'counter' variable:
  // 1. If it is different than 0, prints its content and uses it as part of
  // the for loop that prints the 'indicesWhereXIsFound' vector.
  // 2. If it is equal to 0, prints a message meaning 'x' was not found in
  // 'vector'
  if(counter != 0){
    printf("%d\n", counter);

    for(iterator = 0; iterator < counter; iterator++){
      printf("%d ", indicesWhereXIsFound[iterator]);
    }

    printf("\n");
  }else{
    printf("Mia x\n"); 
  }

  return 0;
}
