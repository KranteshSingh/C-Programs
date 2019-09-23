// Write a program to print Fahrenheit to Celsius Table.
#include <stdio.h>
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;   // Lower limit of temperature table
    upper = 300; // Upper limit of temperature table
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
