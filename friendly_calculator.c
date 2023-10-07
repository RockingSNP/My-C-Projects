#include <stdio.h>
#include <math.h>
/*
this is our first Calculator in Calculator
Which is awesome.
*/

int a,b = 0;
char op;
int addition(int x, int y)
{
    printf("The Answer of %d + %d is:\t", x, y);
    return x + y;
}
int substraction(int x, int y)
{
    printf("The Answer of %d - %d is:\t", x, y);
    return x - y;
}
int multiplication(int x, int y)
{
    printf("The Answer of %d * %d is:\t", x, y);
    return x * y;
}
float division(int x, int y)
{
    printf("The Answer of %d / %d is:\t", x, y);
    return ((float)x / (float)y);
}

int main()
{
    while (1)
    {
        printf("\n\nFriendly Calculator \n");
        scanf("%d %c %d", &a, &op, &b);

        if (op == '+')
        {
            printf("%d", addition(a, b));
        }
        else if (op == '-')
        {
            printf("%d", substraction(a, b));
            continue;
        }
        else if (op == '*')
        {
            printf("%d", multiplication(a, b));
            continue;
        }
        else if (op == '/')
        {
            printf("%f", division(a, b));
            continue;
        }
        else
        {
            printf("Invalid Input!  Exiting the Calculator.\n");
            return 0;
        }
    }

    return 0;
}
