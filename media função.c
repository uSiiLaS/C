#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

void cabecalho()
{
    printf("\n===========================\n");
    printf("\t SENAI-BA\n");
    printf("===========================\n\n");
}

float calcularMedia(int a, int b)
{
    float media;

    media = (a + b) / (float) 2;

    return media;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    float media;

    cabecalho();
    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    media = calcularMedia(primeiroNumero, segundoNumero);

    system("cls || clear");

    cabecalho();
    printf("Primeiro número: %d\n", primeiroNumero);
    printf("Segundo número: %d\n", segundoNumero);
    printf("Soma: %.2f", media);

    return 0;
}