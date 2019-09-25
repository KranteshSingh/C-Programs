#include <stdio.h>
int main()
{
    char firstLetter = 'M';
    int currentYear = 2019;
    float myWeight = 65.5;
    double area = 42.2235;

    printf("%c\n", firstLetter);
    printf("%d\n", currentYear);
    printf("%f\n", myWeight);
    printf("%f\n", area);

    printf("Size of variable firstLetter : %d\n", sizeof(firstLetter));
    printf("Size of variable currentYear : %d\n", sizeof(currentYear));
    printf("Size of variable myWeight : %d\n", sizeof(myWeight));
    printf("Size of variable area : %d\n", sizeof(area));

    printf("Size of char data type : %d\n", sizeof(char));
    printf("Size of int data type : %d\n", sizeof(int));
    printf("Size of float data type : %d\n", sizeof(float));
    printf("Size of double data type : %d\n", sizeof(double));
}