#include <stdio.h>
#include <math.h>

double arctan_series(double x)
{
    double sum = 0.0;
    double term;
    int n = 0;

    do {
        term = pow(x, 2 * n + 1) / (2 * n + 1);

        if (n % 2 == 0)
            sum += term;
        else
            sum -= term;

        n++;
    } while (fabs(term) > 1e-15);

    return sum;
}

int main()
{
    double pi;

    pi = 16.0 * arctan_series(1.0 / 5.0)
       - 4.0 * arctan_series(1.0 / 239.0);

    printf("Pi = %.10f\n", pi);

    return 0;
}