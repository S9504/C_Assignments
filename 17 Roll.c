#include <stdio.h>

#define MAX_ROLLS 100 

int main()
 {
    int rolls[MAX_ROLLS];
    int n, i;
    int roll_to_check = 30; 
    int found = 0; 
    printf("Enter the number of roll numbers: ");
    scanf("%d", &n);
    printf("Enter the roll numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Roll number %d: ", i + 1);
        scanf("%d", &rolls[i]);
    }
    for (i = 0; i < n; i++) {
        if (rolls[i] == roll_to_check) {
            found = 1;
            break; 
        }
    }
    if (found) {
        printf("Roll number %d is present.\n", roll_to_check);
    } else {
        printf("Roll number %d is not present.\n", roll_to_check);
    }

    return 0;
}
