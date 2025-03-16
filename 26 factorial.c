#include <stdio.h>
#include <limits.h> 
int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; 
    }
    for (int i = 1; i <= number; i++) {
        if (factorial > ULLONG_MAX / i) {
            printf("Factorial of %d is too large to be calculated.\n", number);
            return 1; 
        }
        factorial *= i; 
    }

    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}
