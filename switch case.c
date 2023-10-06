#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;

    printf("Informe um valor de 1 até 12 referente aos meses de um ano: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("Mês de Janeiro \n");
        break;
    case 2:
        printf("Mês de Fevereiro \n");
        break;
    case 3:
        printf("Mês de Março \n");
        break;
    case 4:
        printf("Mês de Abril \n");
        break;
    case 5:
        printf("Mês de Maio \n");
        break;
    case 6:
        printf("Mês de Junho \n");
        break;
    case 7:
        printf("Mês de Julho \n");
        break;
    case 8:
        printf("Mês de Agosto \n");
        break;
    case 9:
        printf("Mês de Setembro \n");
        break;
    case 10:
        printf("Mês de Outubro \n");
        break;
    case 11:
        printf("Mês de Novembro \n");
        break;
    case 12:
        printf("Mês de Dezembro \n");
        break;
    default:
        printf("Número incorreto");
        printf("TENTE NOVAMENTE!");
    }

    return 0;
}