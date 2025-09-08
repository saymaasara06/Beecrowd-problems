#include <stdio.h>
int main()
{
    double N;
    scanf("%lf", &N);

    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    int valor = (int)(N);
    int cents = (int)((N - valor) * 100 + 0.5);
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
        {
        int q = valor / notas[i];
        printf("%d nota(s) de R$ %.2f\n", q, (double)notas[i]);
        valor %= notas[i];
    }


    cents += valor * 100;

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
        {
        int q = cents / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", q, moedas[i] / 100.0);
        cents %= moedas[i];
    }

    return 0;
}

