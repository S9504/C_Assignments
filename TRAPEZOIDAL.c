#include <stdio.h>
#include <math.h>
double f(double x)
{
    return (x * x) / (1 + pow(x, 3));
}

int main()
{
    double a = 0, b = 2; 
    double h = 0.2;     
    int n, i;
    double inte_val = 0.0;
    n = (int)((b - a) / h);
    for (i = 0; i <= n; i++)
    {
        double x = a + i * h;

        if (i == 0 || i == n)
            inte_val += f(x);
        else
            inte_val += 2 * f(x);
    }

    inte_val = (h * inte_val) / 2.0;

    printf("Applying Trapezoidal rule the aroximate value of the integral  = %.5lf\n", inte_val);

    return 0;
}
