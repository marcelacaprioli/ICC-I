#include <stdio.h>

int main ()
{
    int n, fat = 1;

    printf("Entre com um inteiro:\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        fat *= i;
    }

    printf("%d", fat);

    return 0;
}
