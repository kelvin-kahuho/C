#include <stdio.h>

int main()
{
char answer;

printf("Do you agree to the terms and conditions?[y/n]: ");
scanf("%c", &answer);

if (answer == 'y' || answer == 'Y')
{
printf("Thank you for agreeing with our terms and conditions");
}
else if (answer == 'n' || answer == 'N')
{
printf("Terms and conditions declined");
}
else
{
printf("Invalid answer");
}

return 0;
}
