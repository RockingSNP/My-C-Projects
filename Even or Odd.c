 #include<stdio.h>
 #include<math.h>

int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a %2==0){
        printf("%d is even\n", a);


    }
    else{
        printf("%d is odd\n", a);

    }
    return 0;
}