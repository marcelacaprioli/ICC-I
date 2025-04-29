#include <stdio.h>

int main ()
{
    float km, litros, consumo;

    printf("Entre com a distancia em km e aqunatidade de litros de gasolina comsumidas: ");
    scanf("%f %f", &km, &litros);

    consumo = km / litros;

    if (consumo < 8)
        printf("Venda o carro! Consumo: %.2f km/l", consumo);
    else if (consumo > 8 && consumo < 12)
        printf("Economico! Consumo: %.2f km/l", consumo);
    else 
        printf("Super economico! Consumo: %.2f km/l", consumo);

    return 0;
}