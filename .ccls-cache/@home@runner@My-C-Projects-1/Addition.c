# include<stdio.h>
# include<math.h>
/*
this is our first c program
which is awesome.
*/
int main(){

    int a, b;

    printf("Enter the  Greater integer value of a\n");
    scanf("%d", &a);
    printf("Enter the Less integer value of b\n");
    scanf("%d", &b);

    printf("Here is your total = %d\n", a + b);

    printf("Here is your difference = %d", a - b);

    return 0;
}