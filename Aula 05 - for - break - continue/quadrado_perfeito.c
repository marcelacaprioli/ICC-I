#include <stdio.h>

int main()
{
    int i, quadrado;

    for(i = 1; ; i++) {
        quadrado = i * i;

        if (quadrado > 5000)
            break;

        printf("%d ", quadrado);
    }

    return 0;
}