#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int b[100];
    int a = n;
    int c;
    int d;
    int i = 0;
    while (a > 0)
    {
        d = a % 10;
        a = a / 10;
        b[i] = d;
        c++;
        i++;
    }
    int h = 0, s = 0, e = 0, y = 0, o = 0, q = 0, u = 0, t = 0, p = 0, g = 0;
    for (int j = 0; j < i; j++)
    {
        if (b[j] == 0)
        {
            h++;
        }
        else if (b[j] == 1)
        {
            s++;
        }
        else if (b[j] == 2)
        {
            e++;
        }
        else if (b[j] == 3)
        {
            y++;
        }
        else if (b[j] == 4)
        {
            o++;
        }
        else if (b[j] == 5)
        {
            q++;
        }
        else if (b[j] == 6)
        {
            u++;
        }
        else if (b[j] == 7)
        {
            t++;
        }
        else if (b[j] == 8)
        {
            p++;
        }
        else if (b[j] == 9)
        {
            g++;
        }
    }
    printf("The frequency of each digit is : ");
    printf("{0,%d,1,%d,2,%d,3,%d,4,%d,5,%d,6,%d,7,%d,8,%d,9,%d}", h, s, e, y, o, q, u, t, p, g);
    return 0;
}
