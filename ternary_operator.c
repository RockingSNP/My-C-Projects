#include <stdio.h>

void main()
{
    void regular(){
        int a, b, max;
        printf("Write Down\n");
        scanf("%d%d", &a, &b);

        if (a > b)
        {
            int max = a;
            printf("%d\n", max);
        }
        else
        {
            int max = b;
            printf("%d", max);
        }
    }

    void ternary()
    {

        int a, b, max;
        printf("Write Down\n");
        scanf("%d%d", &a, &b);

        max = a > b ? a : b;
        printf("%d\n", max);
    }

    // regular();
    ternary();
}