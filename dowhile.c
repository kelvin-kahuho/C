#include <stdio.h>
/*
main - entry point of the program

program - implements a do while loop

the program asks for a number from a user and checks if the number os positive

return 0 - exe success
*/

int main()
{
  int i;
  do
  {
    printf("Enter number: ");
    scanf("%d", &i);
  } while (i < 0);

  printf("%d is a positive number\n", i);
}