#include <stdio.h>

/*
main - entry point of program
This program is for displaying memory locations of variables
return 0- exe success
*/

int main()
{
  int num;

  printf("Enter num: ");
  // The scanf function uses & to access and store the value
  scanf("%d", &num);

  // printing the num and its memory location
  printf("%d's memory location is %x\n", num, &num);

  // end program
  return 0;
}