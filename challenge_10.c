
/*
    Challenge 10

    Tasks:
      given a userInput and a joinCharacter
      allocate minimum required memory for a new string
      that is split on every character in userInput, then joined on the joinCharacter

      Example:
        if userInput is "hello"
        and joinCharacter is '-'
        create the new string "h-e-l-l-o"

    $
    gcc challenge_10.c && ./a.out

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_LEN 100


int main() {

  char userInput[MAX_STR_LEN];
  printf("Enter a string\n");
  fgets(userInput, MAX_STR_LEN, stdin);

  if(userInput[strlen(userInput)-1]=='\n') // remove new line character
    userInput[strlen(userInput)-1]='\0';

  if(strlen(userInput) < 2) {
    printf("ERROR String too short!\n");
    return 1;
  }

  printf("Enter a join character\n");
  char joinChar = getchar();

  // Edit code below v v

  // Edit code above ^ ^

  return 0;
}


