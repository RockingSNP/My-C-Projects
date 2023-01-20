# include<stdio.h>
/*
this is our first c program
which is awesome.
*/
int main(){

    int a;
    float b;
    int c;
    int e;
    printf("Type down The Principal Ammount\n");
    printf("Rs");
    scanf("%d", &a);
    printf("Type down the Rate of interest(Must in point value)\n");
    scanf("%f", &b);
    printf("Type down the time(in yrs)\n");
    scanf("%d", &c);
    // printf("Type down the time(in months)[IF REQUIRED]\n");
    // scanf("%d", &e);
    float g = (e / 12);
    float h = c + g;
    float result = a*b*c;
    printf("Here is your outcome Rs %f", result);
    return 0;
}