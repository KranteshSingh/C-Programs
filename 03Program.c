// WAP to explain Format Specifier in C
#include <stdio.h>
int main()
{
    char firstLetter = 'M';
    int currentYear = 2019;
    float myWeight = 65.5;
    double area = 42.2235;

    printf("%c\n", firstLetter);  // M
    printf("%5d\n", currentYear); // 5 Character Wide
    printf("%6f\n", myWeight);    // Print 6 Character after Decimal
    printf("%4.3f\n", area);      // Prints at least 4 character before decimal and 3 character after decimal
    printf("%.2f\n", area);       // Print 2 Character after decimal
}