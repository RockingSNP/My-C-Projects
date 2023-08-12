#include<stdio.h>

void main(){
    int x=7,y=5;
    x = y++ + x++;
    y= ++y + ++x;
    printf("%d\t%d",x,y);
    
}