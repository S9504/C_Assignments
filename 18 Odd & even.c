#include <stdio.h>

int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 % 2 == 0) {
        printf("The first number %d is even.\n", num1);
    } else {
        printf("The first number %d is odd.\n", num1);
    }
    if (num2 % 2 == 0) {
        printf("The second number %d is even.\n", num2);
    } else {
        printf("The second number %d is odd.\n", num2);
    }

    return 0;
}
