#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumDigits(n / 10);
    }
}

int main() {
    int number, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    sum = sumDigits(number);

    printf("The sum of digits of %d is %d\n", number, sum);

    return 0;
}
