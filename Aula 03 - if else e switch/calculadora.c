#include <stdio.h>

int main ()
{
    float n1, n2, resul;
    char op;

    printf("Entre com os dois numeros: ");
    scanf("%f %f", &n1, &n2);
    printf("\nInforme o operador: ");
    scanf(" %c", &op);
    
    

    switch(op) {
        case '+': 
            resul = n1 + n2;
            break;
        case '-':
            resul = n1 - n2;
            break;
        case '*':
            resul = n1 * n2;
            break;
        case '/':
            if (n2 != 0)
                resul = n1 / n2;
            else {
                printf("Erro: divisao por zero\n");
                return 1;
            }
            break;
        default:
            printf("Operador invalido");
            return 0;
    }

    printf("Resultado da operacao = %.2f", resul);

    return 0;
}