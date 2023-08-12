#include<stdio.h>

void main(){
    
int i,j,k,l,m,n,r;
printf("Enter the no. of rows: \t");
int r_2;
scanf("%d", &r_2);
r=(r_2+1)/2;

    for(i=0;i<r;i++){
        for(j=r-i-1;j>0;j--){
            printf(" ");
        }
        
        for(k=0;k<i+1;k++){
            printf(" *");
        }
        printf("\n");
    }
    
    for(l=r-1;l>0;l--){
        for(n=r-l;n>0;n--){
        printf(" ");
        }
        
        for(m=0;m<l;m++){
            printf(" *");
        }
        

        
        printf("\n");
    }
    
}