#include <stdio.h>
int value(int a, int b, int c)
{
    int i, d = 0;
    for (int i = 1; i <= a; i++)
    {
        d++;
    }
    c = b + (d * 2);
    return c;
}
int main()
{
    int a;
    printf("The number of * on one side of rhombus: ");
    scanf("%d", &a);
    int c = 0, b = 3;
    int d = a - 3;
    int f = value(d, b, c);
    for (int i = 1; i <= a; i++)
    {
        if (i > 1 && i < a) // for the middle portion
        {
            for (int k = 1; k < i; k++)
            {
                // printf("  ");
                printf(" ");
            }
            printf(" *");
            for (int d = 1; d < f; d++)
            {
                printf(" ");
            }
            printf(" *\n");
        }
        else if (i == 1) // for the first line
        {
            for (int j = i; j <= a; j++)
            {
                printf(" *");
            }
            printf("\n");
        }
        else if (i == a) // for the last line
        {
            for (int k = 1; k < a; k++)
            {
                // printf("  ");
                printf(" ");
            }
            for (int j = 1; j <= a; j++)
            {
                printf(" *");
                if (j == a)
                {
                    break;
                }
            }
            printf("\n");
        }
    }
    return 0;
}