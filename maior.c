#include <stdio.h>

int main () 
{
    int n1, n2;

    printf("Digite 2 numeros diferentes: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
        printf("%d e o maoir numero", n1);
    else if (n2 > n1)
        printf("%d e o maior numero", n2);
    else
        printf("numeros iguais");

    return 0; 
}