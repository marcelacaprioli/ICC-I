#include <stdio.h>

int main ()
{
    int a, b, c, d, soma = 0;

    printf("Digite 4 numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a % 2 == 0)
        soma += a;
    if (b % 2 == 0)
        soma += b;
    if (c % 2 == 0)
        soma += c;
    if (d % 2 == 0)
        soma += d;

    printf("Soma dos pares = %d", soma);

    return 0;
}