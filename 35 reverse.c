#include <stdio.h>
int main()
 {
    int number, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    number = (number < 0) ? -number : number;
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
