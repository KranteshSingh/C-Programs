#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a < 20)
    {
        printf("a is less than 20");
    }
    else if (a < 100)
    {
        printf("a is between 20 and 100");
    }
    else
    {
        printf("a is greater than 100");
    }
}