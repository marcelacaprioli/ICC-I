#include <stdio.h>

int main ()
{
    float b, h, area;

    printf("Digite a base e altura do triangulo: ");
    scanf("%f %f", &b, &h);

    area = (b * h) / 2;

    printf("Area do triangulo = %.2f", area);

    return 0;
}