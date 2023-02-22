#include <stdio.h>

int main()
{
    int a, b, multiple;

    printf("Enter thr first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    multiple = a * b;

    printf("The multiplication of %d and %d is %d", a,b,multiple);

    return 0;
}