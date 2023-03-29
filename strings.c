#include <stdio.h>
#include <string.h>
/*
Main - entry point of the program
The program asks user for two strings and joins them
also prints length of the string
*/

int main()
{
  // variable declaration
  char first[20];
  char last[20];
  int len;

  // input from user
  printf("First name: ");
  scanf("%s", &first);
  printf("Last name: ");
  scanf("%s", &last);

  // join the two together
  strcat(first, last);

  // length of name
  len = strlen(first);

  // Print out
  printf("Your full name is %s.\n", first);
  printf("Your name has %i characters\n", len);

  // end program
  return 0;
}