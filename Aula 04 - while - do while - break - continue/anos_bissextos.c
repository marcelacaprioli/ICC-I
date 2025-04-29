#include <stdio.h>

int main()
{
    int anoi, anof;

    printf("Entre com o ano inicial e depois com o ano final: ");
    scanf("%d %d", &anoi, &anof);

    if (anof < anoi)
        printf("Invalido. O ano final deve ser maior que o ano inicial");
    else {
        while (anoi <= anof) {
            if ((anoi % 400 == 0) || ((anoi % 4 == 0) && (anoi % 100 != 0))) {
                printf("%d ", anoi);
            }
            anoi++;
        }
    }

    return 0;
}