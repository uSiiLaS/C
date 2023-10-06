#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    float maca;
    float valor;

    printf("Informe a quatidade desejada de maçãs: \n ");
    scanf("%d", &quantidade);

    if (quantidade < 12)
    {
        maca = 1.3;
    }
    else
    {
        maca = 1;
    }

    system("cls || clear");

    valor = maca * quantidade;

    printf("Quantidade de maçãs: %d \n", quantidade);
    printf("Valor total a ser pago: %.2fR$ \n", valor);

    return 0;
}