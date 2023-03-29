#include <stdio.h>

/*
main - entry point
This program declare an array, initializez it and accesses values in array
return 0; exe success
*/

int main()
{
  int number[5];
  int i, j;

  // adding values to the array
  for (i = 0; i < 5; i++)
  {
    number[i] = i + 1;
  }

  // Printing values of the array
  for (j = 0; j < 5; j++)
  {
    printf("The value of number[%d] is %d\n", j, number[j]);
  }
  // End program
  return 0;
}