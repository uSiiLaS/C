#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int valor[5];
    int maior = -9999;
    int menor = 9999;
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;
    float mediaPar;
    int somaPar;
    int somaImpar;
    float mediaImpar;
    float mediaTotal;
    int quantidadeTotal = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &valor[i]);

        if (valor[i] % 2 == 0)
        {
            somaPar += valor[i];
            par++;
        }
        else
        {
            somaImpar += valor[i];
            impar++;
        }

        if (valor[i] > 0)
        {
            positivo++;
        }
        else
        {
            negativo++;
        }

        maior = valor[i] > maior ? valor[i] : maior;
        menor = valor[i] < menor ? valor[i] : menor;

        quantidadeTotal++;
    }

    mediaPar = (float)somaPar / par;
    mediaImpar = (float)somaImpar / impar;
    mediaTotal = (float)(somaPar + somaImpar) / quantidadeTotal;

    printf("\n");

    printf("Quantidade de PARES: %d\nQuantidade de IMPARES: %d\n", par, impar);
    printf("Quantidade de n�meros POSITIVOS: %d\nQuantidade de n�meros NEGATIVOS: %d\n", positivo, negativo);
    printf("Quantidade de n�meros inseridos: %d\n", quantidadeTotal);
    printf("Maior n�mero: %d\nMenor n�mero: %d\n", maior, menor);
    printf("M�dia dos n�meros PARES: %.2f\n", mediaPar);
    printf("M�dia dos n�meros IMPARES: %.2f\n", mediaImpar);
    printf("M�dia dos n�meros inseridos: %.2f\n", mediaTotal);

    printf("\nN�meros inseridos na ordem inversa;\n");

    for (i = 4; i >= 0; i--)
    {
        printf("\t%d\n", valor[i]);
    }

    return 0;
}