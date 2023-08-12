#include<stdio.h>

void main(){
    
    int i,j,r;
    printf("Enter the no. of rows: ");
    scanf("%d", &r);
    
    for(i = 0;i<r;i++)//looping for repetative rows
    {
        for(j=0;j<i+1;j++){
           if(i%2==0){
            //for even rows
                if(j%2==0){
                    printf(" 1");
                }else{
                    printf(" 0");
                }
           }else{
            //for odd rows
                if(j%2==0){
                        printf(" 0");
                    }else{
                        printf(" 1");
                    }

           }
        }
        printf("\n");
    }
}