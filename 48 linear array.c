#include <stdio.h>
int main() {
    int n, i, search, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }
    return 0;
}
