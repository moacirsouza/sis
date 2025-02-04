#include <stdio.h>
#include <string.h>

int main(void){
  // Declares four variables: A string with up to 50 letters, a single
  // charactaer and two integers
  char inputString[50], letter;
  int index, counter = 0;
  
  // Expects two inputs from the user: First one string and then a letter
  scanf("%s %c", inputString, &letter);

  // Executes a loop with the number of iterations equal to the length of the 
  // variable 'inputString'. Each time the character stored in 'letter' is found
  // inside 'inputString' the 'counter' variable is incremented
  for(index = 0;index < strlen(inputString); index++){
    if(inputString[index] == letter){
      counter++;
    }
  }

  printf("%d\n", counter);
  return 0;
}
