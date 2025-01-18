#include <stdio.h>

int main(void){
  // Declares a float variable
  float R;

  // Declares a float constant, which means this value can't be changed
  // throughout the code
  float const pi = 3.1416;

  // Expects a float input from the user
  scanf("%f", &R);

  // Prints the result of the multiplication of pi by R, squared, which is
  // defined as the area ot the circle
  printf("%.2f\n", pi*R*R);

  return 0;
}
