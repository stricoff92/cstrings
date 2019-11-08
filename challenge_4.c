
/*
    CHALLENGE 4
    display your name

    Task:
      Use  a cstring variable to hold your name.
      Print your name to the terminal using printf and a formatted string;
      Print the address of the cstring that is holding your name

    Example:
      char* favoriteColor = "blue";
      printf("my favorite color is %s\n", favoriteColor);
      printf("my pointer's address is %p\n", favoriteColor);


    Note:
      The char* type is a pointer to the first memory address of a block of characters.
      char* type is can refer to a character array AKA a c-strings in memory
      Use %s to format a char* as a string
      Use %p to format a char* as a pointer (memory address)
      

    $
    gcc challenge_4.c && ./a.out
  
  
*/

#include <stdio.h>




int main() {
  // Edit code below v v
      char* favoriteColor = "blue";
      printf("my favorite color is %s\n", favoriteColor);
      printf("my pointer's address is %p\n", favoriteColor);

  // Edit code above ^ ^
  return 0;
}