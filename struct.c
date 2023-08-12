#include<stdio.h>
#include<string.h>

void main(){
    
    struct student{
        int roll;
        float cgpa;
        char name[100];

    }x[100];

    //struct x ={1994,9.2,};
    x[0].roll = 1994;
    x[0].cgpa = 9.2;
    strcpy(x[0].name , "Souvik");
    printf("%d\n",x[0].roll);
    
    // x[1].roll = 1222;
    // x[1].cgpa = 7.8;
    // strcpy(x[1].name , "Chintu");
    // printf("%d\n",x[1].roll);

    struct student *ptr;
    ptr = &x[0];

    printf("%s",(*ptr).name);
}