#include <stdio.h>

int main ()
{
    int A[10], maior = 0;

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 10; i ++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 9; i++) {
        if ((A[i+1] - A[i]) > maior)
            maior = A[i+1] - A[i];
    }

    printf("Diferenca: %d", maior);

    return 0;
}