#include <stdio.h>

int main ()
{
    float altura, largura, area, material,  mao;
    int n_paredes;

    printf("Qual a altura, largura e numero de paredes? ");
    scanf("%f %f %d", &altura, &largura, &n_paredes);

    area = altura * largura * n_paredes;
    material = (ceil(area / 5.0)) * 20; //ceil -> arredonda para cima
    mao = (area / 10.0) * 30;

    printf("Orcamento = %.2f do material + %.2f da mao de obra = %.2f total", material, mao, material + mao);

    return 0;
}