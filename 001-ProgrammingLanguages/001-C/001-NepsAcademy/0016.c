#include <stdio.h>
#include <string.h>

int main(void){
  // Declares nine variables:
  // 1. Three strings with up to 50 characters, each
  // 2. One string containing all the vowels
  // 3. Five integers to use as counters, controllers and iterators
  char vowels[6] = "aeiou", vowelsList[50] = "" , consonantsList[50] = "";
  char inputString[50];
  int vowelFound = 0, vowelsCounter = 0, consonantsCounter = 0, indexA, indexB;

  // Expects a string input from the user
  scanf("%s", inputString);

  // Executes a loop with the number of iterations equal to the size of the 
  // input string. For each letter of this string, another loop, a more
  // internal one, is executed, to find out if the letter is a vowel or a
  // consontant. In case it as vowel, the letter is inserted into the
  // 'vowelsList' vector and the 'vowelFound' variable is changed to 1.
  // If the letter is a consonant, the test inside the internal loop is never
  // reached and the 'vowelFound' variable remains 0. In this situation, the
  // last test is evaluated as true, since 'vowelFound' equals 0, and the
  // 'consonantsList' receives the letter for that iteration. Finally, the 
  // variable 'vowelFound' is reassigned with 0 and the loop continues until the
  // last character in 'inputString' is reached
  for(indexA = 0; indexA < strlen(inputString); indexA++){
    for(indexB = 0; indexB < strlen(vowels); indexB++){
      if(inputString[indexA] == vowels[indexB]){
        vowelsList[vowelsCounter] = inputString[indexA];
        vowelsCounter++;
        vowelFound = 1;
      }
    }

    if(vowelFound != 1){
      consonantsList[consonantsCounter] = inputString[indexA];
      consonantsCounter++;
    }

    vowelFound = 0;
  }

  // Prints the list of vowels and consonants of the string
  printf("Vogais: %s\nConsoantes: %s\n", vowelsList, consonantsList);

  return 0;
}
