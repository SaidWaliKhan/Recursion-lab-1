#include <stdio.h>

int isPrime(int number, int divisor) {
    if (number <= 1) {
        return 0;  
    } else if (divisor == 1) {
        return 1;  
    } else if (number % divisor == 0) {
        return 0; 
    } else {
        return isPrime(number, divisor - 1);
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

    int prime = isPrime(number, number / 2);

    if (prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
