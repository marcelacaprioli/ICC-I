#include <stdio.h>

int main ()
{
    int dia, mes, ano;

    printf("Digite o dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch(mes) {
        case 1:
            if (dia == 31) {
                mes++;
                dia = 1;
            } 
            else
                dia++;
            break;
        case 2:
            if (dia == 28) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 3:
            if (dia == 31) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 4:
            if (dia == 30) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 5:
            if (dia == 31) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 6: 
            if (dia == 30) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 7:
            if (dia == 31) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 8:
            if (dia == 31) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 9:
            if (dia == 30) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 10:
            if (dia == 31) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 11:
            if (dia == 30) {
                mes++;
                dia = 1;
            }
            else
                dia++;
            break;
        case 12:
            if (dia == 31) {
                mes = 1;
                dia = 1;
                ano++;
            }
            else
                dia++;
            break;
    }

    printf("%d / %d / %d", dia, mes, ano);

    return 0;
}