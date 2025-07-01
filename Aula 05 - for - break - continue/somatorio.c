#include <stdio.h>
#include <math.h>

int main () 
{
    int P, N, i;
    float soma = 0.0;

    printf("Entre com N e P:\n");
    scanf("%d %d", &N, &P);
    if (N == 0) {
        printf("N invalido.\n");
        return 1;
    }

    for (i = 1; i <= N; i++) {
        soma += sqrt((float)(P + i) / i);
    }

    printf("Somatorio = %.2f", soma);

    return 0;
}