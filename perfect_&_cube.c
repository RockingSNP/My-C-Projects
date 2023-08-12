#include <stdio.h>
#include <math.h>


void main() {
    int num,limit;

    printf("Enter upper limit: \n");
    scanf("%d", &limit);

    for(num =1;num <= limit;num++){
        // Check if the number is a perfect square & cube too
        int srt = sqrt(num); //squareroot
        int crt = cbrt(num); //cuberoot
        if (srt * srt == num && crt * crt * crt == num) {
            printf("\n %d is a perfect square & also cube number.\n", num);
        }
        
    }
}
