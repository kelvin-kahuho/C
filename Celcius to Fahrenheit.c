#include <stdio.h>

float main ()
{
    float celcius, fahrenheit;

    printf("Degrees Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;

    printf("%f Celcius is equal to %f Fahrenheit", celcius, fahrenheit);

    return 0;
}