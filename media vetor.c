#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float notas[3];
    float media = 0;
    float soma = 0;
    int i;
    int quantidade = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Informe a %dº nota: \n", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
        quantidade++;
    }

    system("cls || clear");

    media = soma / quantidade;

    printf("1º nota: %.2f\n", notas[0]);
    printf("2º nota: %.2f\n", notas[1]);
    printf("3º nota: %.2f\n", notas[2]);
    printf("Média das notas: %.2f", media);

    return 0;
}