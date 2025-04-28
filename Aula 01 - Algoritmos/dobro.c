#include <stdio.h>

int main () 
{
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("\nO dobro de %.2f e %.2f", num, 2*num);
    return 0;
}