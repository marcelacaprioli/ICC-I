#include <stdio.h>

int main ()
{
    int A, B, C;

    printf("Entre com 3 valores inteiros: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A == B || B == C || A == C)
        printf("Numeros nao sao distintos");
    else if (A < B && B < C)
        printf("%d %d %d", A, B, C);
    else if (A < C && C < B)
        printf("%d %d %d", A, C, B);
    else if (B < A && A < C)
        printf("%d %d %d", B, A, C);
    else if (B < C && C < A)
        printf("%d %d %d", B, C, A);
    else if (C < A && A < B)
        printf("%d %d %d", C, A, B);
    else if (C < B && B < A)
        printf("%d %d %d", C, B, A);

    return 0;
}