
/*
    Challenge 7
    Task:
      Use a for loop, the strlen function, and the isVowelfunction to
      update vowelCount to reflect the number of vowels in userInput.
    $
    gcc challenge_7.c && ./a.out

*/

#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100


int isVowel(char c) {
  // Check if a character is a vowel. Return 1 if yes, 0 if no.
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    return 1;
  return 0;
}


int main() {

  char userInput[MAX_STR_LEN];
  int vowelCount = 0;
  printf("Enter a string and I'll tell you how many vowels\n");
  fgets(userInput, MAX_STR_LEN, stdin);
  if(userInput[strlen(userInput)-1]=='\n') // remove new line character
    userInput[strlen(userInput)-1]='\0';

  // Edit code below v v

  // Edit code above ^ ^

  printf("there are %i vowels in the string '%s'\n", vowelCount, userInput);
  return 0;
}
