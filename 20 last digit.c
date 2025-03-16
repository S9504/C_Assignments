#include <stdio.h>

int main()
 {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number; 
    }
    while (number >= 10) {
        number = number / 10; 
    }
    printf("The last digit is: %d\n", number);

    return 0;
}
