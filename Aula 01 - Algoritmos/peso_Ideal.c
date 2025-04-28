#include <stdio.h>

int main () 
{
    float altura, peso;
    char sexo;

    printf("Qual a altura e o sexo (digite h para homem ou m para mulher)? ");
    scanf("%f %c", &altura, &sexo);

    if (sexo == 'h') {
        peso = (72.7 * altura) - 58;
        printf("O peso ideal e %.2f", peso);
    }
    else if (sexo == 'm') {
        peso = (62.1 * altura) - 44.7;
        printf("O peso ideal e %.2f", peso);
    }
    else
        printf("Opcao invalida.");

    return 0; 
}