#include <stdio.h>

int sumOfSquares(int n) {
    if (n == 0)
        return 0;
    return n * n + sumOfSquares(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of squares of first %d natural numbers is: %d\n", n, sumOfSquares(n));
    return 0;
}
