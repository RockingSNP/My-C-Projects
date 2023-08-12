#include <stdio.h>
int main()
{
    int a, n = 0, r;
    printf("Enter the upper limit : ");
    scanf("%d", &a);
    printf("The perfect numbers between 1 and %d are : ", a);
    for (int j = 1; j < a; j++)
    {
        for (int i = 1; i < j; i++)
        {   r = j % i;
            if (r == 0){n = n + i;}
        }
        if (j == n){printf("%d ", j);}
        n = 0;
    }
    return 0;
}