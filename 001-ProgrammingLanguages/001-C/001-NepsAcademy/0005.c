#include <stdio.h>

int main(void){
  // Declares an integer variable
  int x;

  // Expects an integer input from the user
  scanf("%d", &x);

  // Tests whether the integer is less than 1000:
  // 1. If it is, verifies if it's negative. positive or equal to zero,
  // printing the respective portuguese names for these values, followed by
  // a line break.
  // 2. If it is not, it prints and 'error' message, followed by a
  // line break
  if(x<1000){
    if(x<0){
      printf("negativo\n");
    }else if(x>0){
      printf("positivo\n");
    }else{
      printf("nulo\n");
    }
  }else{
    printf("inválido\n");
  }

  return 0;
}
