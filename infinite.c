#include <stdio.h>
#include <stdbool.h>
// #include <cs50.h>
/*
main -entry point

this program is to print something infinitlu

return 0 - succesful exe
*/

int main()
{
  char name[15];

  printf("What's your name?: ");
  scanf("%s", &name);

  while (true)
  {
    printf("My name is %s\n", name);
  }

  return 0;
}