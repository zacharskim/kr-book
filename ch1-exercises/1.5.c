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

    fahr = lower;
    printf("Fahrenheit Celsius\n");
    for(fahr = 300; fahr >= 0; fahr = fahr - 20){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t   %6.1f\n", fahr, celsius);
    }
}