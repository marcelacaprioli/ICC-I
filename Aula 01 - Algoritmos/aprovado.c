#include <stdio.h>

int main () 
{
    float n1, n2, n3, media;

    printf("entre com as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 5.0)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0; 
}