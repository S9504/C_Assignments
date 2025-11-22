#include <stdio.h>
#include <math.h>

int main()
{
    int n = 6;
    double x[6] = {-50, -30, 0, 60, 90, 110};
    double y[6] = {1250, 1280, 1350, 1480, 1580, 1700};
    
    double sumx = 0, sumy = 0, sumx2 = 0, sumy2 = 0, sumxy = 0;
    
    for(int i = 0; i < n; i++) {
        sumx += x[i];
        sumy += y[i];
        sumx2 += x[i] * x[i];
        sumy2 += y[i] * y[i];
        sumxy += x[i] * y[i];
    }
    
    double cov = n * sumxy - sumx * sumy;
    double varx = n * sumx2 - sumx * sumx;
    double vary = n * sumy2 - sumy * sumy;
    
    double r = cov / sqrt(varx * vary);
    double b = cov / varx;
    double a = (sumy / n) - b * (sumx / n);
    
    printf("Correlation Coefficient r: %f\n", r);
    printf("Regression Equation: y = %f + %f * x\n", a, b);
    
    // Predictions
    double t1 = -60, t2 = 150;
    double c1 = a + b * t1;
    double c2 = a + b * t2;
    printf("Predicted c at T=-60: %f\n", c1);
    printf("Predicted c at T=150: %f\n", c2);
    
    return 0;
}
