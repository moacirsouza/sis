#include <stdio.h>

int main(void){
  float N1, N2, WA;
  int P1 = 2, P2 = 3;
  scanf("%f", &N1);
  scanf("%f", &N2);
  WA = (N1*P1+N2*P2)/(P1+P2);
  if(WA >= 7){
    printf("Aprovado\n");
  }else if(WA < 3){
    printf("Reprovado\n");
  }else{
    printf("Final\n");
  }
}
