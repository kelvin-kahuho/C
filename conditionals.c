#include <stdio.h>

int main()
{
int x;
int y;

printf("Enter X: \n");
scanf("%d", &x);

printf("Enter Y: \n");
scanf("%d", &y);

if (x > y)
{
printf("%d is less than %d", x, y);
}
else if (x < y)
{
printf("%d is greator than %d", y, x);
}
else
{
printf("%d is equal to %d", x, y);
}

return 0;
}
