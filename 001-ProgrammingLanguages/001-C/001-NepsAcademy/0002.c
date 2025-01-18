#include <stdio.h>

int main(void){
  // Declares two integer variables
  int A, B;

  // Expects two integer inputs from the user
  scanf("%d%d", &A,&B);

  // Prints the sum of the two previously entered inputs with a line break
  // at the end of it
  printf("%d\n", A+B);

  return 0;
}
