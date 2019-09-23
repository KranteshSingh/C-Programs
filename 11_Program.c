// Program to read input until user enters a positive number
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a value:");
        scanf("%d", &n);
    } while (n <= 0);
    printf("n value: %d", n);
    return 0;
}
