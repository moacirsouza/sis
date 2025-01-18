#include <stdio.h>

int main(void){
  // Declares three float variables
  float N1, N2, WA;
  
  // Declares and initializes two integer variables
  int P1 = 2, P2 = 3;

  // Expects twp float inputs from the user
  scanf("%f", &N1);
  scanf("%f", &N2);

  // Calculates the weighted average using the inputs previously received by
  // the user and initialized by the code itself
  WA = (N1*P1+N2*P2)/(P1+P2);

  // Calculates the student situation, based on the weighted average number.
  // If greater than of equal to seven, approved, if less than three, failed
  // and otherwise goes to final 
  if(WA >= 7){
    printf("Aprovado\n");
  }else if(WA < 3){
    printf("Reprovado\n");
  }else{
    printf("Final\n");
  }

  return 0;
}
