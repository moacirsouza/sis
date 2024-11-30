#include <stdio.h>

int main(void){
  int x, y;
  
  scanf("%d", &x);
  scanf("%d", &y);

  if( x == 0 || y == 0 ){
    printf("eixos\n");
  }else{
    if( x > 0 ){
      if ( y > 0 ){
        printf("Q1\n");
      }else{
        printf("Q4\n");
      }
    }else{
      if( y > 0 ){
        printf("Q2\n");
      }else{
        printf("Q3\n");
      }
    }
  }
}

