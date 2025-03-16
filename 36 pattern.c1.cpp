#include <stdio.h>

int main() {
    int i, j,c=4;
    for (i = 4; i >= 1; i--) {
        for (j = 4; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}


