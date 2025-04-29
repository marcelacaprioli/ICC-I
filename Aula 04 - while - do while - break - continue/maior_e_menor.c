#include <stdio.h>

int main()
{
    int n, maior, menor;
    
    printf("Entre com a primeira nota: ");
    scanf("%d", &n);
    if (n < 0)
        return 0;
    else
        maior = menor = n;

    while (n >= 0) {
        printf("Entre com a proxima nota: ");
        scanf("%d", &n);
        
        if (n < 0){
            break;
        }
        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
    }

    printf("%d %d", maior, menor);

    return 0;
}