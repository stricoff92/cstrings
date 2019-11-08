
/*
    Challenge 9
    Tasks:
      1) Given a userInput allocate the minimum required memory for a reversed version of that string
      2) Add characters in reverse order to the new string. Don't forget the null terminator.
      3) Print the new string.
      4) Verify the 2 strings have different addresses in memory
      5) Release the memory allocated for the new string.


    $
    gcc challenge_9.c && ./a.out

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_LEN 100



int main() {

  char userInput[MAX_STR_LEN];
  printf("Enter a string and I'll reverse it\n");
  fgets(userInput, MAX_STR_LEN, stdin);
  if(userInput[strlen(userInput)-1]=='\n') // remove new line character
    userInput[strlen(userInput)-1]='\0';


  // Edit code below v v

  // Edit code above ^ ^

  return 0;
}
