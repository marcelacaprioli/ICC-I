
int main()
{
    long long a, b, c;

    printf("Entre com 3 numeros inteiros: \n");
    if  (scanf("%lld %lld %lld", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    //Algoritmo de Euclides
    //mdc entre a e b
    long long x = (a < 0) ? -a : a;
    long long y = (b < 0) ? -b : b;
    while (y != 0) {
        long long resto = x % y;
        x = y;
        y = resto;
    }
    long long mdc_ab = x;
    //mdc etre resto e c 
    y = (c < 0) ? -c : c;
    while (y != 0) {
        long long resto = x % y;
        x = y;
        y = resto;
    }
    long long mdc_abc = x;

    //mmc(a, b) = (a * b) / mdc(a, b)
    long long mmc_ab = (a / mdc_ab) * b;
    //mmc(a,b,c) = mmc(mmc(a,b), c) = (mmc(a,b) * c) / mdc(a,b,c)
    long long mmc_abc = (mmc_ab / mdc_abc) * c;
    if (mmc_abc < 0) mmc_abc = -mmc_abc;

    printf("MDC(%lld, %lld, %lld) = %lld\n", a, b, c, mdc_abc);
    printf("MMC(%lld, %lld, %lld) = %lld\n", a, b, c, mmc_abc);

    return 0;
}