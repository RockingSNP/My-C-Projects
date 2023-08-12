#include<stdio.h>


void main(){
    
    FILE *fptr;
    int lim;

    printf("Enter the Limit:\t");
    scanf("%d",&lim);

    fptr = fopen("Odd.txt","w");
    for(int i=0;i<=lim;i++){
        if(i%2!=0)
        fprintf(fptr,"%d\t",i);
    }

   
    fclose(fptr);
}