
/*
    Challenge 8
    Tasks:
      1) Given a userInput and a suffix, allocate the minimum required memory for a new string with that suffix.
      2) Add characters to the new string, including the suffix and a null terminator
      3) Print the new string.
      4) Verify the 2 strings have different addresses in memory
      5) Release the memory allocated for the new string.

    Only allocate the minimum required memory to hold the new string and its suffix


    $
    gcc challenge_8.c && ./a.out

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

  printf("Enter a suffix\n");
  char suffix = getchar();

  // Edit code below v v

  // Edit code above ^ ^

  return 0;
}
