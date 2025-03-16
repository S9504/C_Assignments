#include <stdio.h>
int main() 
{
    int n, i = 1;
    unsigned long long first = 0, second = 1, next; 
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series up to %d terms:\n", n);
        if (n >= 1) {
            printf("%llu", first);
        }
        if (n >= 2) {
            printf(", %llu", second);
        }
        while (i <= n - 2) { 
            next = first + second; 
            printf(", %llu", next);
            first = second;
            second = next; 
            i++;
        }
    }

    printf("\n"); 
    return 0;
}
