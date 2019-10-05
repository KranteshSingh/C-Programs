// WAP to display fahrenheight to celcius table within the range of 0 - 300
#include <stdio.h>
int main()
{
    float fahr, celcius;
    int lower, upper, diff;
    lower = 0;
    upper = 300;
    diff = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celcius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.1f\t %6.3f\n", fahr, celcius);
        fahr = fahr + diff;
    }
}