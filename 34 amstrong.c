#include <stdio.h>
#include <math.h>
int main() {
    int number, originalNumber, remainder, result = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    while (originalNumber != 0) 
	{
        originalNumber /= 10;
        digits++;
    }
    originalNumber = number;
    while (number != 0)
	 {
        remainder = number % 10;
        result += pow(remainder, digits); // 
        number /= 10; 
    }
    if (result == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
