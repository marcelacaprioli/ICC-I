#include <stdio.h>

int main ()
{
    int vet[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor numero %d:\n", i+1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i ++) {
        if (vet[i] % 2 != 0)
            soma += vet[i];
    }

    printf("Soma = %d", soma);
    
    return 0;
}