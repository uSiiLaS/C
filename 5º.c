#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    int quantidade = 0;
    int soma = 0;
    float media;

    do
    {
        printf("Informe o %dº número: \n", quantidade + 1);
        scanf("%d", &numero);

        if (numero > 0)
        {
            quantidade++;
            soma += numero;
        }

    } while (numero > 0);

    media = (float)soma / quantidade;

    printf("\n\nQuantidade de números: %d\n", quantidade);
    printf("Soma dos números: %d\n", soma);
    printf("Média dos números: %.2f\n", media);

    return 0;
}