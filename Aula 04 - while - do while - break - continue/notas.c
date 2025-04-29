#include <stdio.h>

int main()
{
    float n, soma = 0;
    int baixa, alta;
    baixa = alta = 0;

    do {
        printf("Digite a nota: ");
        scanf("%f", &n);

        if (n < 0)
            break;
        
        if (n < 5.0 && n > 0)
            baixa++;
        else if (n >= 5 && n > 0)
            alta++;

        soma += n;
        
    } while(1);

    printf("%d alunos tiveram nota baixa\n", baixa);
    printf("%d alunos tiveram nota alta\n", alta);
    printf("Media geral = %.1f\n", soma / (baixa + alta));
    printf("%d%% dos alunos obtiveram nota maior ou igual a 5", (100 * alta) / (alta + baixa));

    return 0;
}