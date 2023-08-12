#include <stdio.h>

void main()
{
    int a = 10, b = 6;

    // bitwise-and operator
    int c = a & b;
    printf("%d\n", c);

    // bitwise-or operator

    int d = a | b;
    printf("%d\n", d);

    // bitwise-xor operator

    int e = a ^ b;
    printf("%d\n", e);

    // Not operator

    int f = ~~b;
    printf("%d\n", f);

    // Bitwise left shift
    int g = (a + b) << 2;
    printf("%d\n", g);

    // Bitwise right shift
    int h = (a + b) >> 2;
    printf("%d\n", h);
}