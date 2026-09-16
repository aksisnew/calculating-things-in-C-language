#include <stdio.h>

int main()
{
    int n = 4;
    int permutation = 1;

    for (int i = 1; i <= n; i++)
    {
        permutation *= i;
    }

    printf("Permutations of %d objects = %d\n", n, permutation);

    return 0;
}