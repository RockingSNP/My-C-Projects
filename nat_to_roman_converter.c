#include <stdio.h>

void convertToRoman(int number) {
    int i, j;
    const int num[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* roman[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (number < 1 || number > 100) {
        printf("Invalid input! Number must be in the range of 1 to 100.\n");
        return;
    }

    i = 0;
    while (number > 0) {
        if (number >= num[i]) {
            printf("%s", roman[i]);
            number -= num[i];
        }
        else {
            i++;
        }
    }
}

int main() {
    int number;

    printf("Enter a number (1-100): ");
    scanf("%d", &number);

    convertToRoman(number);

    return 0;
}
