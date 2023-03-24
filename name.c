#include <stdio.h>
#include <cs50.h>

int main()
{
  char name[60];
  int age;

  printf("Enter your name: \n");
  scanf("%s", name);

  string second_name = get_string("Enter second name: ");

  printf("Enter your age: \n");
  scanf("%d", &age);

  printf("Your name is %s %s and you are %d years old.\n", name, second_name, age);

  return 0;
}