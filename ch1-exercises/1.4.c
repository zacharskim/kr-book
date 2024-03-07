#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (celsius <= upper) {
        fahr = (celsius * 9/5) + 32;
        printf("%3.0f\t   %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}