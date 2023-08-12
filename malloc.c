#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
    system("cls");
    int *ptr,n;
    //clrscr();
    printf("How much Space do you required:\n");
    scanf("%d",&n);


    ptr = (int *) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
            ptr[i]=i+2;
            printf("\n%d",ptr[i]);
    }
    system("malloc.exe");
    
}