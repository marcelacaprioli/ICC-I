#include <stdio.h>

int main ()
{
    int n, i, j;

    printf("Entre com um inteiro:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
            if (j < i)
                printf("\t");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
            if (j < i)
                printf("\t");
        }
        printf("\n");
    }

    return 0;
}