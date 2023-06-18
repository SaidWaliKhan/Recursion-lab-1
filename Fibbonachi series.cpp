#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int terms) {
    if (terms <= 0) {
        return;
    }

    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms: ", n);
    printFibonacciSeries(n);

    return 0;
}
