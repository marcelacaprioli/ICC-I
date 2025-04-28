#include <stdio.h>
#include <math.h>

int main () 
{
    float A, B, C, delta, X1, X2;

    printf("Forneca A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    delta = pow(B, 2) - (4 * A * C);

    if (delta < 0) 
        printf("Nao existe raiz real");
    else {
        X1 = (- B - (sqrt(delta)) ) / (2 * A);
        X2 = (- B + (sqrt(delta)) ) / (2 * A);
        printf("As raizes reais sao X1 = %.2f e X2 = %.2f", X1, X2);
    }

    return 0; 
}