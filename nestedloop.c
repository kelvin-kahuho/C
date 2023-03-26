#include <stdio.h>

/*
main - entry point
The program will print out # in square shape
this will be done using a nested for loop
return 0 - succesful exe
*/

int main()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}