#include <stdio.h>

int main(void){
  // Declares two integer variables
  int x, y;
  
  // Expects two integer inputs from the user
  scanf("%d", &x);
  scanf("%d", &y);

  // Calculates in which quadrant of the cartesian plane the coordinates are:
  // 1. If any of the two inputs equals zero, the point is over one of the axes
  // 2. If the first coordinate is positive, the point will be at Q1 (first
  // quadrant) if the second coordinate is also positive, and at Q4 (fourth
  // quadrant) otherwise
  // 3. If the first coordinate is negative, the point will be at Q2 (second 
  // quadrant) if the second coordinate is positive, and at Q3 (third quadrant)
  // otherwise
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

  return 0;
}

