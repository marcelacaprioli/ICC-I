#include <stdio.h>

int main () 
{
    float p1, p2, p3, e1, e2;
    float media = 0, maior1 = 0, maior2 = 0;

    printf("Entre com as 3 notas das provas do aluno: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    printf("Entre com as 2 notas de exercicios do aluno: ");
    scanf("%f %f", &e1, &e2);

    media = ((p1 + p2 + p3) / 3) * 0.7 + ((e1 + e2) / 2) * 0.3;

    if (p1 >= p2 && p1 >= p3) {
        maior1 = p1;
        if (p2 >= p3)
            maior2 = p2;
        else
            maior2 = p3;
    }
    else if (p2 >= p1 && p2 >= p3) {
        maior1 = p2;
        if (p1 >= p3)
            maior2 = p1;
        else
            maior2 = p3;
    } else {
        maior1 = p3;
        if (p1 >= p2)
            maior2 = p1;
        else
            maior2 = p2;
    }

    printf("As duas maiores notas de prova sao %.2f e %.2f\n", maior1, maior2);
    if (media >= 6.0)
        printf("Aluno aprovado\n");
    else
        printf("Aluno reprovado\n");
    printf("Media final = %.2f", media);

    return 0;
}