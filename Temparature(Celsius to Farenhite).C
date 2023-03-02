# include<stdio.h>


int main(){

    float a;
    printf("What is the temparature in Celsius Scale\n");
    scanf("%f", &a);

    float b = a * 1.8;
    float c = b + 32;
    printf("Here is your result in Farenhite Scale %f\n", c);

    return 0;
}