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

void mostrarTabuada(int valor)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;

    printf("Informe um número: ");
    scanf("%d", &valor);

    mostrarTabuada(valor);

    return 0;
}