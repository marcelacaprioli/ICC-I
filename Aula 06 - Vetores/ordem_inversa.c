#include <stdio.h>

int main ()
{
    int vet[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor numero %d:\n", i+1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i ++)
        printf("%d ", vet[i]);
    printf("\n");
    
    for (int i = 0, j = 9; i < j; i++, j--) {
        int temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
    }

    for (int i = 0; i < 10; i ++)
        printf("%d ", vet[i]);

    return 0;
}