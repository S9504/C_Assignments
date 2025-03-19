#include <stdio.h>
void callByValue(int a) {
    a = a + 10;
    printf("Inside callByValue: a = %d\n", a);
}
void callByReference(int *b) {
    *b = *b + 10;
    printf("Inside callByReference: b = %d\n", *b);
}
int main() {
    int num1 = 5;
    int num2 = 5;
    printf("Before callByValue: num1 = %d\n", num1);
    callByValue(num1);
    printf("After callByValue: num1 = %d\n", num1);
    printf("Before callByReference: num2 = %d\n", num2);
    callByReference(&num2);
    printf("After callByReference: num2 = %d\n", num2);
    return 0;
}
