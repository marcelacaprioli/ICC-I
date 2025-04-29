#include <stdio.h>

int main ()
{
    int a, b, c;

    printf("Entre com os 3 lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Todos os lados devem ser positivos");
    }
    else if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        if (a == b && b == c)
            printf("Triangulo equilatero");
        else if (a != b && b != c && a != c)
            printf("Triangulo escaleno");
        else
            printf("Triangulo isosceles");
    }
    else
        printf("Triangulo invalido");
    

    return 0;
}