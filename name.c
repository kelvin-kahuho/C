#include <stdio.h>

int main()
{
  char name[16];
  int age;

  printf("Enter your name: \n");
  scanf("%s", name);

  printf("Enter your age: \n");
  scanf("%d", &age);

  printf("Your name is %s and you are %d years old.\n", name, age);

  return 0;
}