#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    srand(time(0));
    int toss = rand() % 2;
    if (toss == 0) {
        printf("The result is: Heads\n");
    } else {
        printf("The result is: Tails\n");
    }

    return 0;
}
