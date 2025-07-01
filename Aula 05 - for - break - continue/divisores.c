#include <stdio.h>

int main()
{
    unsigned int num;

    printf("Informe um positivo inteiro: ");
    scanf("%u", &num);

    for(int i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    return 0;
}