#include <stdio.h>
#include <math.h>

double raiz (double e, int n)
{
    double r = e / 2.0;

    for (int i = 1; i < n; i++) {
        r = (r + e / r) / 2.0;
    }

    return r;
}

int main ()
{
    double num;
    int iteracoes;

    printf("Digite o numero real e o numero de iteracoes:\n");
    scanf("%lf %d", &num, &iteracoes);

    double result = raiz(num, iteracoes);
    printf("Raiz aproximada de %.5f com %d iteracoes: %.10f\n", num, iteracoes, result);

    return 0;
}