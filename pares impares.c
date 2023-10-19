#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    int valor;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int quantidadeGeral = 0;
    int somaGeral = 0;
    int somaPares = 0;
    int somaImpares = 0;
    float mediaPares = 0;
    float mediaGeral = 0;

    do
    {
        printf("Informe o %d valor: ", quantidadeGeral + 1);
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            somaPares += valor;
            quantidadePares++;
            mediaPares = somaPares / (float) (quantidadePares);
        }
        else
        {
            somaImpares += valor;
            quantidadeImpares++;
        }

        quantidadeGeral++;
        somaGeral = somaImpares + somaPares;

    } while (valor > 0);

    mediaGeral = somaGeral / (float) (quantidadeGeral - 1);

    printf("Quantidade de n�meros PARES: %d\n", quantidadePares-1);
    printf("Quantidade de n�meros IMPARES: %d\n", quantidadeImpares);
    printf("M�dia dos valores PARES: %.1f\n", mediaPares);
    printf("M�dia geral: %.1f\n", mediaGeral);

    return 0;
}