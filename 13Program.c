// Check the largest number from given 3 Numbers
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter 1st Number:\n");
    scanf("%d", &n1);
    printf("Enter 2nd Number:\n");
    scanf("%d", &n2);
    printf("Enter 3rd Number:\n");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
        printf("%d is the greatest number", n1);
    else if (n2 > n1 && n2 > n3)
        printf("%d is the greatest number", n2);
    else
        printf("%d is the greatest number", n3);
}