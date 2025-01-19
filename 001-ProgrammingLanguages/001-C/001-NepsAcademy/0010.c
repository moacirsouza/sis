#include <stdio.h>

// Declares fibonacci, a function that uses recursiveness to calculate the
// fibonacci value of a positive integer
int fibonacci(int number){
  // Base case:
  // 1. If the input number is 0 or 1, returns 1
  if(number == 0 || number == 1){
    return 1;
  }

  return fibonacci(number-1) + fibonacci(number-2);
}

int main(void){
  // Declares two integer variables
  int n, output;

  // Expects and integer input from the user
  scanf("%d", &n);

  // Tests whether the input is a number between 0 and 30. If it isn't, warns
  // the user and exits the program with a return code of 1. Otherwise, calls
  // fibonacci and prints the appropriate value, exiting with zero as the
  // sucess return code
  if(n < 0 || n > 30){
    printf("Valor não permitido.\n");
    printf("Por favor, use um número inteiro, entre 0 e 30.\n");

    return 1;
  }else{
    output = fibonacci(n);
    printf("%d\n", output);
  } 

  return 0;
}
