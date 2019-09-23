// Write a program to print Fahrenheit to Celsius Table.
#include <stdio.h>
int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;   // Lower limit of temperature table
    upper = 300; // Upper limit of temperature table
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t %6.3f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
