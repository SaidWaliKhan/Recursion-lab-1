#include <stdio.h>

int calSum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + calSum(n - 1);
    }
}

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = calSum(n);

    printf("The sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
