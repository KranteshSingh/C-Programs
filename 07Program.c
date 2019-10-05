// Bitwise Operators
#include <stdio.h>
int main()
{
    int a = 60;             // 00111100
    int b = 13;             // 00001101
    printf("%d\n", a & b);  // Bitwise AND
    printf("%d\n", a | b);  // Bitwise OR
    printf("%d\n", a ^ b);  // Exclusive OR
    printf("%d\n", ~a);     // Bitwise Negation
    printf("%d\n", ~b);     // Bitwise Negation
    printf("%d\n", a << 2); // LeftShift the Bit by 2
    printf("%d\n", a >> 2); // RightShift the Bit by 2
}