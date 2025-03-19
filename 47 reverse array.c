#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)
	 {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
