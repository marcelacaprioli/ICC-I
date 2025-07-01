#include <stdio.h>

int main()
{
    int x, y, pot = 1;
    
    printf("Informe x e y: ");
    scanf("%d %d", &x, &y);

    for (int i = 0; i < y; i++) {
        pot = pot * x;
    }

    printf("%d", pot);

    return 0;
}