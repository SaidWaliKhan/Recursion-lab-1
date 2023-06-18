#include <stdio.h>

int reverseNumber(int number) {
    static int reversedNumber = 0;
    if (number == 0) {
        return reversedNumber;
    } else {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        return reverseNumber(number / 10);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int reversed = reverseNumber(number);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
