#include <stdio.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, swappedNum = 0;
    
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store the original number for later use
    originalNum = num;
    
    // Get the last digit
    lastDigit = num % 10;
    
    // Calculate the number of digits in the number
    int numDigits = 0;
    int tempNum = num;
    while (tempNum != 0) {
        tempNum /= 10;
        numDigits++;
    }
    
    // Reset tempNum to the original value
    tempNum = num;
    
    // Get the first digit
    int divisor = 1;
    for (int i = 1; i < numDigits; i++) {
        divisor *= 10;
    }
    firstDigit = tempNum / divisor;
    
    // Calculate the swapped number
    swappedNum = lastDigit * divisor + num % divisor;
    swappedNum = swappedNum - lastDigit + firstDigit;
    
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digits: %d\n", swappedNum);
    
    return 0;
}
