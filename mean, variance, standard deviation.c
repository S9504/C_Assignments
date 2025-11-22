#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int n = 1000;
    int a[1000];
    double sum_mean = 0.0, sum_var = 0.0;
    double mean, variance, std_dev;

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        a[i] = (rand() % 50) + 1;
        sum_mean += a[i];
    }

    mean = sum_mean / n;

    for (int i = 0; i < n; i++)
    {
        sum_var += pow((a[i] - mean), 2);
    }

    variance = sum_var / n;

    std_dev = sqrt(variance);

    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_dev);

    return 0;
}
