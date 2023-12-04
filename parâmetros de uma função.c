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

int somar(int primeiroNumero, int segundoNumero)
{
    int somaNumeros;

    somaNumeros = primeiroNumero + segundoNumero;

    return somaNumeros;
}

int main()
{
    int primeiroNumero;
    int segundoNumero;
    int soma;

    cabecalho();
    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    soma = somar(primeiroNumero, segundoNumero);
    // soma = primeiroNumero + segundoNumero;

    system("cls || clear");

    cabecalho();
    printf("Primeiro número: %d\n", primeiroNumero);
    printf("Segundo número: %d\n", segundoNumero);
    printf("Soma: %d", soma);

    return 0;
}