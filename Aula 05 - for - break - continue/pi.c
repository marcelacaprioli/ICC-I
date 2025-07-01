#include <stdio.h>

int main ()
{
    int n;
    double pi = 0.0;

    printf("Quantos termos?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            pi += 4.0 / (2 * i +1);
        else
            pi -= 4.0 / (2 * i + 1);
    }

    printf("Valor aproximado de pi com %d termos: %.15f\n", n, pi);

    return 0;
}
