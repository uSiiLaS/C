#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;

    printf("Informe um valor de 1 até 7 que represente os dias da semana: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("Domingo \n");
        printf("Final de semana \n");
        break;
    case 2:
        printf("Segunda-Feira \n");
        printf("Dia útil \n");
        break;
    case 3:
        printf("Terça-Feira \n");
        printf("Dia útil \n");
        break;
    case 4:
        printf("Quarta-Feira \n");
        printf("Dia útil \n");
        break;
    case 5:
        printf("Quinta-Feira \n");
        printf("Dia útil \n");
        break;
    case 6:
        printf("Sexta-Feira \n");
        printf("Dia útil \n");
        break;
    case 7:
        printf("Sábado \n");
        printf("Final de semana \n");
        break;
    default:
        printf("Valor inválido \n");
    }

    return 0;
}