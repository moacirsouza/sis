#include <stdio.h>
#include <string.h>

int main(void){
  // Declares two variables: A string and an int
  char userInput[50];
  int stringLength = 0;

  // Expects a string input from the user
  scanf("%s", userInput);

  // Calculates the string length and stores it in a variable
  stringLength = strlen(userInput);

  // Prints the length of the string passed by the user.
  printf("%d \n", stringLength);

  return 0;
}
