#include <stdio.h>

/*
main - entry point of the program
in this program- declare a pointer assign pointer to variable and access
the variable via the pointer
return 0 - exe success
*/

int main()
{
  int num = 14;
  int *po;

  po = &num;

  printf("Memory address of num: %x\n", &num);

  printf("Value of *po: %x\n", po);

  // accessing value using pointer
  printf("Value of num via pointer: %d\n", *po);

  // end program

  return 0;
}