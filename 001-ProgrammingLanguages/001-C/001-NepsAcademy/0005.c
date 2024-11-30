#include <stdio.h>

int main(void){
  int x;
  scanf("%d", &x);
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
}
