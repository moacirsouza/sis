#include <stdio.h>

// Declares isInputValid, a function that returns 0 if the input given by the
// user is invalid and 1 otherwise
int isInputInvalid(int number){
  if(number < 0 || number > 100){
    printf("[ERRO] O valor [%d] não é permitido.\n", number);
    printf("Por favor, use apenas números inteiros, entre 0 e 100.\n");

    return 0;
  }

  return 1;
}

int main(void){
  // Declares four integer variables: One vector and three scalars
  int vector[10], iterator, x, found = 0;

  // Executes a loop of 10 iterations, expecting, each time, a integer input
  // from the user. Each value is stored in one of the positions within the
  // 'vector' variable. The 'isInputInvalid' function is used to test if any of
  // the values passed by the user is invalid and in case it is, the function
  // warns the user and exits the program with a return code different than 0
  for(iterator = 0; iterator < 10; iterator++){
    scanf("%d", &vector[iterator]);

    if(isInputInvalid(vector[iterator]) == 0){
      return 1;
    }
  }

  // Expects an integer input from the user and stores it in the x variable
  scanf("%d", &x);
  
  // Tests whether the number to be found is valid. If it isn't, the function
  // warns the user and exits the program with a return code different than 0
  if(isInputInvalid(x) == 0){
    return 2;
  }

  // Executes a loop of 10 iterations, testing, each time, if the input stored
  // in the 'x' variable is equal to at least one of previously input integers
  // stored in the 'vector' variable. If true, the 'found' variable value is
  // updated to 1, otherwise, it remains 0, as originally declared
  for(iterator = 0; iterator < 10; iterator++){
    if(x == vector[iterator]){
      found = 1;
    }
  }

  // Tests the value of the 'found' variable, printing YES (SIM) if it is equal
  // to 1 and NO (NAO), otherwise
  if(found == 1){
    printf("SIM\n");
  }else{
    printf("NAO\n"); 
  }

  return 0;
}
