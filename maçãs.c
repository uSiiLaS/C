#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    float custoTotal;
    float maca;

    printf("Quantas maçãs deseja comprar? \n");
    scanf("%d", &quantidade);
    printf("\n");

    system("cls || clear");

    if (quantidade < 12)
    {
        maca = 1.3;
    }
    else if (quantidade >= 12)
    {
        maca = 1;
    }

    custoTotal = maca * quantidade;

    printf("Quantidade de maçãs compradas: %d \n", quantidade);
    printf("Valor total: %.2f \n", custoTotal);

    return 0;
}