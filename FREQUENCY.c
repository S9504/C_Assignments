#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 1000;
    int a[1000];
    int observation[1000], frequency[1000], i, j, t, count, maxfreq, mode;
    float median;

    srand(time(0));

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10 + 1; 
    }

    
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    count = 0;
    t = a[0];
    observation[count] = t;
    frequency[count] = 1;
    count = 1;

    
    for (i = 1; i < n; i++)
    {
        if (a[i] == t)
            frequency[count - 1]++;
        else
        {
            t = a[i];
            observation[count] = t;
            frequency[count] = 1;
            count++;
        }
    }

    printf("Frequency Distribution Table:\n");
    
    for (i = 0; i < count; i++)
    {
        printf("%d\t\t%d\n", observation[i], frequency[i]);
    }

    
    maxfreq = frequency[0];
    mode = observation[0];
    for (i = 1; i < count; i++)
    {
        if (frequency[i] > maxfreq)
        {
            maxfreq = frequency[i];
            mode = observation[i];
        }
    }

    
    if (n % 2 == 0)
        median = (a[n / 2 - 1] + a[n / 2]) / 2.0;
    else
        median = a[n / 2];

    printf("\nMode = %d", mode);
    printf("\nMedian = %.2f\n", median);

    return 0;
} 
