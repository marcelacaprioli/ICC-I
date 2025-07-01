#include <stdio.h>

int main()
{
    double S = 0;
    int i, j = 1;

    for (i = 1; i <= 50; i++) {
        S += (double)j / i;
        j += 2;
    }

    printf("S = %.2f", S);

    return 0;
}