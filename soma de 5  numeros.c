#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int numero;
    int soma = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Informe o %d� n�mero: ", i);
        scanf("%d", &numero);

        soma += numero;
    }

    printf("Soma de todos os n�meros: %d", soma);

    return 0;
}