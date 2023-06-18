#include <stdio.h>

int calFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calFactorial(n - 1);
    }
}

int main() {
    int n, factorial;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial = calFactorial(n);
        printf("The factorial of %d is %d\n", n, factorial);
    }

    return 0;
}
