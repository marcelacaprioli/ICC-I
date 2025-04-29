#include <stdio.h>

int main()
{
    char c;

    do {
        printf("Digite um caracter (digite s para sair) ");
        c = getchar();
    } while(c != 's');
    


    return 0;
}