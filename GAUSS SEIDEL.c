#include <stdio.h>

int main()
 {
    int i, j, k;
    int n = 4;
    int iterations = 10;

    double A[4][4] = 
{
        {4, 3, 2, 1},
        {3, 4, 3, 2},
        {2, 3, 4, 3},
        {1, 2, 3, 4}
    };
    double b[4] = {1, 1, -1, -1};
    double x[4] = {0, 0, 0, 0}; 

    printf("Gauss-Seidel Iteration Method\n");
    printf("Initial approximation X = (0, 0, 0, 0)\n\n");

    for (k = 1; k <= iterations; k++)
 {
        for (i = 0; i < n; i++)
 {
            double sum = 0.0;
            for (j = 0; j < n; j++)
 {
                if (j != i)
                    sum += A[i][j] * x[j];
            }
            x[i] = (b[i] - sum) / A[i][i];
        }

        printf("Iteration %2d: ", k);
        for (i = 0; i < n; i++)
 {
            printf("x%d = %.6lf  ", i + 1, x[i]);
        }
        printf("\n");
    }
    printf("The solution after %d iterations is\n", iterations);
    printf("X = (%.4lf, %.4lf, %.4lf, %.4lf)\n", x[0], x[1], x[2], x[3]);

    return 0;
}
