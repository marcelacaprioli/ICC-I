#include <stdio.h>

int main()
{
    int x, y, soma = 0;

    printf("Entre com os numeros x e y (y deve ser maior  x): ");
    scanf("%d %d", &x, &y);

    if (y < x) {
        printf("Invalido");
    }
    else {
        do {
            soma += x;
            x++;
        } while(x <= y);
        printf("Soma = %d", soma);
    }

    return 0;
}