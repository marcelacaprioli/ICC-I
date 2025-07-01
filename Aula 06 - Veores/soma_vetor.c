#include <stdio.h>

int main ()
{
    int A[5], B[5], S[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d do vetor A:\n", i+1);
        scanf("%d", &A[i]);
        printf("Digite o valor %d do vetor B:\n", i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        S[i] = A[i] + B[i];
        printf("%d ", S[i]);
    }

    return 0;
}