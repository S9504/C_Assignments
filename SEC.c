#include <stdio.h>
#include <math.h>

float f(float x) 
{
    return x*x*x - 2*x*x + 5;
}

int main() 
{
    float a, b, fa, fb, r, error;
    int N, i;

    printf("Enter initial guesses a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter tolerance: ");
    scanf("%f", &error);
    printf("Enter max iterations: ");
    scanf("%d", &N);

    fa = f(a);
    fb = f(b);

    for (i = 1; i <= N; i++) 
{
        r = b - fb * (a - b) / (fa - fb);

        printf("Iteration %d: Approx root = %.6f\n", i, r);

        if (fabs(r - b) < error) 
{
            printf("\nFinal root = %.6f found in %d iterations.\n", r, i);
            return 0;
        }

        a = b;
        fa = fb;
        b = r;
        fb = f(r);
    }

    printf("\nDid not converge within %d iterations.\n", N);
    return 0;
}

