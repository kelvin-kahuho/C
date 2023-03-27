#include <stdio.h>

/*
main - entry point
The program will print out # in square shape
this will be done using a nested for loop
return 0 - succesful exe

*/

int main()
{
  int height = 5;
  int row = 20;
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < row; j++)
    {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}