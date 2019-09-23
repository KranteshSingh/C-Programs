// Program to calculate the sum of natural numbers
#include <stdio.h>
int main()
{
    int N, i, sum = 0;
    printf("Enter the value of Numbers:");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    printf("Sum of Natural Numbers: %d", sum);
}
