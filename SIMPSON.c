#include <stdio.h>
#include <math.h>

double f(double x)
{
    return (x * x) / (1 + pow(x, 3));
}

int main()
{
    int i, n = 20;
    double a = 0, b = 2;
    double h, inte_val = 0.0;
    h = (b - a) / n;
    if (n % 2 == 0)
    {

        for (i = 0; i <= n; i++) 
        {
            double x = a + i * h;
            if (i == 0 || i == n)
                inte_val += f(x);
            else if (i % 2 == 1)
                inte_val += 4 * f(x);
            else
                inte_val += 2 * f(x);
        }

        inte_val = (h * inte_val) / 3.0;
        printf("Applying Simpson's 1/3 rule the integral value = %.5f\n", inte_val);
    } 
    else
    {
        printf("Simpson's 1/3 rule not applicable (n must be even)\n");
    }

    return 0;
}
