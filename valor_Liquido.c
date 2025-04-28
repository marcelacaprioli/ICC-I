#include <stdio.h>

int main ()
{
    int dias, valor;

    printf("Qual o numero de dias trabalhado pelo encanador? ");
    scanf("%d", &dias);

    valor = (200 * dias) * 0.64;
    printf("Valor liquido a ser pago = %d reais", valor);

    return 0;
}