#include <stdio.h>

int main(){
  // Defines "bino" and "cino" as integers
  int bino, cino;

  // Receives "bino" and "cino" as integers
  scanf("%d", &bino);
  scanf("%d", &cino);
 
 // Tests the sum of the two inputs
  if((bino+cino)%2 != 0){
    printf("Cino\n"); // Prints "Cino" if the result is odd
  }else{
    printf("Bino\n"); // Prints "Bino" if the result is even
  }

  return 0;
}
