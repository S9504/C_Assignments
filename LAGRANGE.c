#include <stdio.h>
int main() 
{
    int n = 9;
    double x[] = {4.3, 4.5, 5.9, 5.6, 6.1, 5.2, 3.8, 2.1, 7.5};
    double y[] = {126, 121, 116, 118, 114, 118, 132, 141, 108};
    double value = 4.8;
    double result = 0.0;
    int i, j;
        for (i = 0; i < n; i++)
 {
        double nproduct = 1.0;
        double dproduct = 1.0;
        for (j = 0; j < n; j++)
 {
            if (j != i) 
{
                dproduct *= (x[i] - x[j]);
                nproduct *= (value - x[j]);
            }
        }
        result += (nproduct / dproduct) * y[i];
    }
    printf("Amount of particulate removed when daily rainfall is %.1f units = %.2f ?g/m^3\n", value, result);
    return 0;
}

