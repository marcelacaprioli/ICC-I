#include <stdio.h>

int main () 
{
    float antigo, novo;
    
    printf("qual o salario atual? ");
    scanf("%f", &antigo);

    if (antigo <= 500)
        novo = antigo + (antigo * 0.2);
    else
        novo = antigo + (antigo * 0.1);

    printf("O novo salario e %.2f", novo);

    return 0; 
}