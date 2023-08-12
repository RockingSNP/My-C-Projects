#include <stdio.h>
int main()
{
    printf("Enter the numebr you want the multiplicaion table for :\n");
    int a = 0;
    scanf("%d", &a);
    int b;
    printf("The multiplication table of %d is :\n", a);
    for (int i = 1; i <= 10; i++)
    {
        b = a * i;
        printf("%d X %d = %d\n", a, i, b);
    }
    return 0;
}