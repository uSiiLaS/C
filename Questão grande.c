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
        printf("Digite o %dº número: ", i + 1);
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
    printf("Quantidade de números POSITIVOS: %d\nQuantidade de números NEGATIVOS: %d\n", positivo, negativo);
    printf("Quantidade de números inseridos: %d\n", quantidadeTotal);
    printf("Maior número: %d\nMenor número: %d\n", maior, menor);
    printf("Média dos números PARES: %.2f\n", mediaPar);
    printf("Média dos números IMPARES: %.2f\n", mediaImpar);
    printf("Média dos números inseridos: %.2f\n", mediaTotal);

    printf("\nNúmeros inseridos na ordem inversa;\n");

    for (i = 4; i >= 0; i--)
    {
        printf("\t%d\n", valor[i]);
    }

    return 0;
}