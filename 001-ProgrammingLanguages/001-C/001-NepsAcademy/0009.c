#include <stdio.h>

// Declares factorial, a function that uses recursiveness to calculate the
// factorial of a positive integer
int factorial(int number){
  // Base case:
  // 1. Tests whether number is equal to zero. If it is, returns 1.
  if(number == 0){
    return 1;
  }

  // Step case:
  // 1. If the number is greater than zero, the factorial function is called
  // with a different parameter (number-1) and its result is mulitplied by the
  // number value passed to the immediately last call
  return number*factorial(number-1);
}

int main(void){
  // Declares two integer variables
  int n, output;

  // Expects an integer input from the user
  scanf("%d", &n);

  // Tests whether the input is a number between 0 and 12. If it isn't, warns
  // the user and exits the program with a return code of 1. Otherwise, calls
  // factorial and prints the appropriate value, exiting with zero as the
  // sucess return code
  if(n < 0 || n > 12){
    printf("Valor não permitido.\n");
    printf("Por favor, use um número inteiro, entre 0 e 12.\n");

    return 1;
  }else{
    output = factorial(n);
    printf("%d\n", output);
  }

  return 0;
}
