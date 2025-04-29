#include <stdio.h>

int main ()
{
    int l1, l2, l3;

    printf("Informe os lados do triangulo ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if (((l1 + l2) > l3) && ((l1 + l3) > l2) && ((l2 + l3) > l1))
        printf("Triangulo valido");
    else
        printf("Triangulo nao valido");

    return 0;
}