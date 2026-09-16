#include <stdio.h>

int main()
{
    int n = 10;
    long long permutation = 1;

    for (int i = 1; i <= n; i++)
    {
        permutation *= i;
    }

    printf("Permutations of %d objects = %lld\n", n, permutation);

    return 0;
}