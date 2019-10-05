// WAP to use display area of a circle given radius also using constant keyword.
#include <stdio.h>
int main()
{
    int radius;
    printf("Enter Radius:");
    scanf("%d", &radius);
    const float PI = 3.14;
    int area = PI * radius * radius;
    printf("%d", area);
}