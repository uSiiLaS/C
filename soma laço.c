#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int valor;
    int soma = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &valor);

        soma += valor;
    }

    printf("\nSoma dos n�meros: %d \n", soma);

    return 0;
}