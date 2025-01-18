#include <stdio.h>

int main(void){
  // Declares two integer variables
  int A, B;

  // Expects two integers as inputs
  scanf("%d%d", &A, &B);

  // Prints the arithmetic mean of the two previously entered integers, with
  // a line break at the end. Notice that the returned value might be truncated
  // as it's defined as integer and not as float or double
  printf("%d\n", (A+B)/2);

  return 0;
}
