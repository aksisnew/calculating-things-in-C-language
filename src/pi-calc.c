#include <stdio.h>

int main() {
    double pi = 0.0;
    double term;
    long long i;

    for (i = 0; i < 1000000000LL; i++) {
        term = 1.0 / (2.0 * i + 1.0);

        if (i % 2 == 0)
            pi += term;
        else
            pi -= term;
    }

    pi *= 4.0;

    printf("Pi = %.8f\n", pi);

    return 0;
}