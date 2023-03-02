# include<stdio.h>
/*
this is our first c program
which is awesome.
*/
int main(){

    float a,b,c,d;
    printf("Enter the reading of main scale (in mm)\n");
    scanf("%f", &a);
    printf("Enter the reading of vernier scale \n");
    scanf("%f", &b);
    c = b * 0.1;
    d = a + c;
    printf("Here is your result %f mm\n", d);
    return 0;
}
