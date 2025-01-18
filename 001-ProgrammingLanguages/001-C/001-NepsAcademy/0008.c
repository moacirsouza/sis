#include <stdio.h>

int main(void){
  // Declares two integers
  int bino, cino;

  // Expects two integer inputs from the user
  scanf("%d", &bino);
  scanf("%d", &cino);
 
  // Tests the sum of the two inputs:
  // 1. Prints "Cino" if the result is odd
  // 2. Prints "Bino" if the result is even
  if((bino+cino)%2 != 0){
    printf("Cino\n"); 
  }else{
    printf("Bino\n"); 
  }

  return 0;
}
